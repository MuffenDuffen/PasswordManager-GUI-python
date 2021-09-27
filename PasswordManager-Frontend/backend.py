import ctypes
import platform
import pathlib

def LoadDLL():
    if platform.system() == "Windows":  # Multi-Platform
        global lib
        lib = ctypes.CDLL(__file__[:35] + "PasswordManager-Backend/x64/Release/PasswordManager-Backend.dll")

# Log function
def Log(message):
    lib.Log(ctypes.c_char_p(str(message).encode('utf-8')))
