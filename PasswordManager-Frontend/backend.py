import ctypes
import platform

def LoadDLL():
    if platform.system() == "Windows":  # Multi-Platform
        global lib
        lib = ctypes.CDLL("../PasswordManager-Backend/x64/Release/PasswordManager-Backend.dll")

# Log function
def Log(message):
    lib.Log(ctypes.c_char_p(str(message).encode('utf-8')))
