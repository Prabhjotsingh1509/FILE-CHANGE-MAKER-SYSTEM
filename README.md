# File System Change Maker

A simple, interactive, menu-driven C application that allows users to manage files and folders easily. The system brings together essential file operations such as creating, renaming, deleting, listing, and moving files or directories—all within one clean interface.

---

## 🚀 Features

### **1. Create Folder**

Create new directories instantly using Windows API functions.

### **2. Create File**

Generate new text files using standard C file-handling functions.

### **3. Rename File**

Rename any existing file using the `rename()` function.

### **4. Delete File or Folder**

Delete files or entire folders safely using system calls.

### **5. List Files in Directory**

View all files and folders inside a directory using `<dirent.h>`.

### **6. Move File or Folder**

Move items from one directory to another using Windows API.

### **7. Exit**

Close the application anytime.

---

## 🧩 Project Structure

```
project/
├── include/
│   ├── createfolder.h
│   ├── createfile.h
│   ├── rename.h
│   ├── delete.h
│   ├── movefolder.h
│   ├── listfiles.h
│   └── path.h
├── src/
│   ├── createfolder.c
│   ├── createfile.c
│   ├── rename.c
│   ├── delete.c
│   ├── movefolder.c
│   ├── listfiles.c
│   └── path.c
|   |__ main.c

```

---

## 📌 Technologies Used

* **C Programming Language**
* **Windows API (windows.h)**
* **Directory Handling (dirent.h)**
* **File Handling (stdio.h)**
* **Modular Header-Based Structure**

---

## 📖 How to Compile

Use GCC or MinGW:

```bash
gcc src/*.c -I include -o program
>> 
```

Run the program:

```bash
./program.exe
```

---

## 🧠 How It Works

* The program shows a menu.
* User selects an option.
* Corresponding function from the `include/` folder runs.
* Operations are performed on the selected directory.

---

## 🎯 Purpose

This project demonstrates practical file handling, directory operations, Windows API usage, and modular C programming—perfect for students and beginners.

---

## 📜 License

This project is open for personal or academic use.

---

If you want a **PDF**, **architecture.md**, **project report**, or **flowchart**, just ask!
