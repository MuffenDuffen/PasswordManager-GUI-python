import ctypes
import platform


def LoadDLL():
    if platform.system() == "Windows":  # Multi-Platform
        lib = ctypes.CDLL("../PasswordManager-Backend/x64/Release/PasswordManager-Backend.dll")

    lib.Log.argtypes = [ctypes.c_char_p] # Log Function

    return lib.Log
