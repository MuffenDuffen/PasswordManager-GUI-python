import backend
import tkinter as tk
import tkinter.ttk as ttk

#region Button Functions

def Enter():
    if backend.CheckPass(loginEntry.get()):
        print("Entered")
    else:
        print("Wrong password")

#endregion

if __name__ == '__main__':
    
    backend.LoadDLL() # Load backend

    # Window
    root = tk.Tk()
    root.title("Password Manager")
    root.geometry("600x450")

    root.rowconfigure(0, weight=1)
    root.columnconfigure(0, weight=1)

    ## Login Frame
    login = ttk.Frame(root)

    # Creating elements
    loginLabel = ttk.Label(login, text="Password Manager", font=('Segoe UI Semibold', 40))
    loginEntry = ttk.Entry(login, show="\u2022")
    loginButton = ttk.Button(login, text="Enter", command=Enter)

    # Adding elements
    login.grid(column=0, row=0)
    loginLabel.grid(column=0, row=0, columnspan=2, sticky='s')
    loginEntry.grid(column=0, row=1, sticky='e')
    loginButton.grid(column=1, row=1, sticky='w')

    # Configuring rows and columns
    login.rowconfigure(0, weight=1)
    login.rowconfigure(1, weight=1)

    login.columnconfigure(0, weight=1)
    login.columnconfigure(1, weight=1)

    #root.columnconfigure(0, weight=1)
    #root.columnconfigure(1, weight=2)
    #root.columnconfigure(2, weight=5)
    #
    ##  Rows
    #root.rowconfigure(0, weight=1)
    #root.rowconfigure(1, weight=2)
    #root.rowconfigure(2, weight=3)
    #
    ## Creating label
    #label1 = ttk.Label(root, text="Password Manager", font=('Segoe UI Semibold', 40))
    #label1.grid(row=1, column=1, columnspan=2, sticky='s')
    #
    ## Creating Input Field
    #input = ttk.Entry(root, width=40, show="\u2022") # u2022 is a bullet point
    #input.grid(row=2, column=1, sticky='ne')
    #
    ## Creating button
    #enter = ttk.Button(root, text="Enter", command=Enter)
    #enter.grid(row=2, column=2, sticky='nw')
    #
    # Running program
    root.mainloop()
