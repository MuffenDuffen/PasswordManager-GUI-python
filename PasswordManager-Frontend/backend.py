import ctypes
import platform

def LoadDLL():
    if platform.system() == "Windows":  # Multi-Platform
        global lib
        lib = ctypes.CDLL("../PasswordManager-Backend/x64/Release/PasswordManager-Backend.dll")
        lib.CheckPass.restype = ctypes.c_bool
        lib.GetCredentials.restype = ctypes.c_void_p
        lib.Free.argtypes = [ctypes.c_void_p, ctypes.c_int]

# Log function
def Log(message):
    lib.Log(ctypes.c_char_p(str(message).encode('utf-8')))

def CheckPass(password):
    return lib.CheckPass(ctypes.c_char_p(str(password).encode('utf-8')))

def GetCredentials():
    _return = lib.GetCredentials()
    string = ctypes.cast(_return, ctypes.c_char_p).value
    lib.Free(_return, 0)

    creds = string.split('\u001d')

    for i in creds:
        i = i.split('\u001f')

    return creds
