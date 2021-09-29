import backend
import tkinter as tk
import tkinter.ttk as ttk

#region Button Functions

def Add():
    print("Added")

def Enter():
    if backend.CheckPass(login.entry.get()):
        print("Entered")
        login.destroy()
        main = Main(root)
    else:
        print("Wrong password")

#endregion

#region Classes

class Login(ttk.Frame):
    def __init__(self, parent):

        # Creating elements
        ttk.Frame.__init__(self, parent)
        self.entry = ttk.Entry(self, show="\u2022")
        self.label = ttk.Label(self, text="Password Manager", font=('Segoe UI Semibold', 40))
        self.button = ttk.Button(self, text="Enter", command=Enter)

        # Adding elements
        self.grid(column=0, row=0)
        self.label.grid(column=0, row=0, columnspan=2, sticky='s')
        self.entry.grid(column=0, row=1, sticky='e')
        self.button.grid(column=1, row=1, sticky='w')

        # Configuring rows and columns
        self.rowconfigure(0, weight=1)
        self.rowconfigure(1, weight=1)
        self.columnconfigure(0, weight=1)
        self.columnconfigure(1, weight=1)

class Main(ttk.Frame):
    def __init__(self, parent):

        # Creating elements
        ttk.Frame.__init__(self, parent)
        self.search = ttk.Entry(self)
        self.label = ttk.Label(self, text="LOL", font=('Segoe UI Bold', 50))
        self.add = ttk.Button(self, text="+", command=Add)
        
        # Adding elements
        self.grid(column=0, row=0)

        self.search.pack()
        self.label.pack()
        self.add.pack()

#endregion

if __name__ == '__main__':
    
    backend.LoadDLL() # Load backend

    # Window
    root = tk.Tk()
    root.title("Password Manager")
    root.geometry("600x450")

    root.rowconfigure(0, weight=1)
    root.columnconfigure(0, weight=1)

    login = Login(root)

    root.mainloop()
