import ctypes
import platform

def LoadDLL():
    if platform.system() == "Windows":  # Multi-Platform
        global lib
        lib = ctypes.CDLL("../PasswordManager-Backend/x64/Release/PasswordManager-Backend.dll")
        lib.CheckPass.restype = ctypes.c_bool
        lib.GetCredentials.restype = ctypes.c_char_p

# Log function
def Log(message):
    lib.Log(ctypes.c_char_p(str(message).encode('utf-8')))

def CheckPass(password):
    return lib.CheckPass(ctypes.c_char_p(str(password).encode('utf-8')))

def GetCredentials():
    _return = lib.GetCredentials()
    string = _return.value
    lib.Free(ctypes.c_void_p(_return))

    return string.split('\u241f')
