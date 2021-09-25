import wrapper

if __name__ == '__main__':
    backend = wrapper.LoadDLL()
    print(backend[1](101))
