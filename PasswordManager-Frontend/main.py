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
        self.canvas = tk.Canvas(self, width=575, height=430, background="#ffffff")
        self.frame = ttk.Frame(self.canvas)
        self.scrollbar = ttk.Scrollbar(self, orient='vertical', command=self.canvas.yview)

        self.canvas.configure(yscrollcommand=self.scrollbar.set)
        
        # Adding elements
        self.grid(column=0, row=0)
        # self.search.grid(column=0, row=0, columnspan=2)
        # self.canvas.grid(column=0, row=1)
        # self.scrollbar.grid(column=1, row=1)
        self.search.pack(side='top')
        self.canvas.pack(side='left', fill='both', expand=True)
        self.scrollbar.pack(side='right', fill='y')

        self.canvas.create_window((4, 4), window=self.frame, anchor="nw",tags="self.frame")

        self.frame.bind("<Configure>", self.onFrameConfigure)

        self.Populate()

        # Configuring rows and columns
        # self.rowconfigure(0, weight=1)
        # self.rowconfigure(1, weight=1)
        # self.columnconfigure(0, weight=1)
        # self.columnconfigure(1, weight=1)

    def onFrameConfigure(self, event):
        self.canvas.configure(scrollregion=self.canvas.bbox("all"))

    def Populate(self):
        ttk.Label(self.frame, text=backend.GetCredentials(), borderwidth='1', relief='solid').grid(column=0, row=0)

class Main(ttk.Frame):
    def __init__(self, parent):

        # Creating elements
        ttk.Frame.__init__(self, parent)
        self.search = ttk.Entry(self)
        self.canvas = tk.Canvas(self, width=575, height=430, background="#ffffff")
        self.frame = ttk.Frame(self.canvas)
        self.scrollbar = ttk.Scrollbar(self, orient='vertical', command=self.canvas.yview)

        self.canvas.configure(yscrollcommand=self.scrollbar.set)
        
        # Adding elements
        self.grid(column=0, row=0)
        # self.search.grid(column=0, row=0, columnspan=2)
        # self.canvas.grid(column=0, row=1)
        # self.scrollbar.grid(column=1, row=1)
        self.search.pack(side='top')
        self.canvas.pack(side='left', fill='both', expand=True)
        self.scrollbar.pack(side='right', fill='y')

        self.canvas.create_window((4, 4), window=self.frame, anchor="nw",tags="self.frame")

        self.frame.bind("<Configure>", self.onFrameConfigure)

        self.Populate()

    def onFrameConfigure(self, event):
        self.canvas.configure(scrollregion=self.canvas.bbox("all"))

    def Populate(self):
        ttk.Label(self.frame, text=backend.GetCredentials(), borderwidth='1', relief='solid').grid(column=0, row=0)

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
