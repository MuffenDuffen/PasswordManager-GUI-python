import backend
import tkinter as tk
import tkinter.ttk as ttk

#region Button Functions

def Enter():
    backend.Log(input.get())

#endregion

if __name__ == '__main__':
    backend.LoadDLL() # Load backend
    backend.Log("LoL")

    # Window
    root = tk.Tk()
    root.title("Password Manager")
    root.geometry("600x450")

    #  Rows
    root.rowconfigure(0, weight=1)
    root.rowconfigure(1, weight=2)
    root.rowconfigure(2, weight=3)

    # Creating label
    label1 = ttk.Label(root, text="Password Manager", font=('JetBrains Mono', 40))
    label1.grid(row=1, column=1, columnspan=2, padx=40, sticky='s')

    # Creating Input Field
    input = ttk.Entry(root, width=40, show="\u2022") # u2022 is a bullet point
    input.grid(row=2, column=1, sticky='ne')

    # Creating button
    enter = ttk.Button(root, text="Enter", command=Enter)
    enter.grid(row=2, column=2, sticky='nw')

    # Running program
    root.mainloop()
