import os
import backend

if __name__ == '__main__':
    dllFromCpp = backend.LoadDLL()

    if (!os.path.isfile("data.txt") == 1):
