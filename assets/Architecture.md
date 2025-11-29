# Project Architecture – FILE-CHANGE-MAKER-SYSTEM

---

## 1. Overview

The **File Change Maker System** is a modular C-based project designed to perform common file-system operations including:

- Creating files  
- Creating folders  
- Deleting files/folders  
- Renaming files/folders  
- Moving files/folders  
- Listing directory contents  

The system follows a clean and maintainable architecture with clear separation of concerns, modular code organization, and visual documentation. It is designed to be scalable and portable, suitable for academic submission, professional use, or further enhancement.

---

## 2. Folder Structure

FILE-CHANGE-MAKER-SYSTEM/
│
├── assets/ # Screenshots and visual documentation
│ ├── 1folder.png # Folder creation start
│ ├── 1foldercreated.png # Folder created confirmation
│ ├── 2filecreated.png # File created confirmation
│ ├── 2samplefile.png # Example file screenshot
│ ├── 3rename.png # Rename operation start
│ ├── 3renmaefile.png # Rename file confirmation
│ ├── 4deletefile.png # Delete file start
│ ├── 4deletefolder.png # Delete folder start
│ ├── 4filedeleted.png # File deleted confirmation
│ ├── 4folderdeleted.png # Folder deleted confirmation
│ ├── 5listfilesordirectories.png # Listing directory contents
│ ├── 7beforemovingfolder.png # Before moving folder
│ ├── 7foldermoved.png # Folder moved confirmation
│ ├── 8exit.png # Exit screen
│ └── 9invalidchoice.png # Invalid menu choice
│
├── docs/ # Diagrams and project documentation
│ ├── flowchartdetailed.png # Detailed flowchart diagram
│ ├── flowchartoutline.png # Outline flowchart diagram
│ └── ProjectReport.pdf # Comprehensive project report
│
├── include/ # Header files (.h)
│ ├── createfile.h # Create file declarations
│ ├── createfolder.h # Create folder declarations
│ ├── delete.h # Delete file/folder declarations
│ ├── listfiles.h # List directory contents declarations
│ ├── movefilefolder.h # Move file/folder declarations
│ ├── path.h # Path utility declarations
│ └── rename.h # Rename file/folder declarations
├── src/ # Source code (.c)
│ ├── createfile.c # Create file implementations
│ ├── createfolder.c # Create folder implementations
│ ├── delete.c # Delete file/folder implementations
│ ├── listfiles.c # List directory contents implementations
│ ├── movefilefolder.c # Move file/folder implementations
│ ├── main.c # Main program & menu handling
│ └── path.c # Path utility implementations
│
└── program.exe # Compiled executable binary

---

## 3. Module Descriptions

### 3.1 assets/

Contains screenshots demonstrating the progress and results of various operations, used for visual documentation and validation.

### 3.2 docs/

Holds flowcharts and detailed project documentation including the project report in PDF format.

### 3.3 include/

Header files declaring all functions and interfaces, enabling modular design and separation between declarations and implementations.

| Header File           | Purpose                                          |
| --------------------  | ----------------------------------------------  |
| `createfile.h`        | File creation function declarations             |
| `createfolder.h`      | Folder creation function declarations           |
| `movefilefolder.h`    | Move file/folder function declarations          |
| `delete.h`            | Delete file/folder function declarations        |
| `listfiles.h`         | Directory listing function declarations          |
| `path.h`              | Path manipulation helper declarations            |
| `rename.h`            | Rename file/folder function declarations        |

### 3.4 src/

Contains the implementation of all modules declared in headers.

| Source File           | Responsibility                                   |
| --------------------  | ----------------------------------------------- |
| `main.c`              | User interface, menu system, and program control flow |
| `createfile.c`        | File creation logic                              |
| `createfolder.c`      | Folder creation logic                            |
| `movefilefolder.c`    | Reliable moving of files and folders using `MoveFileEx`  |
| `delete.c`            | File and folder deletion                         |
| `listfiles.c`         | Listing files and directories                    |
| `path.c`              | Path utilities and helper functions              |

---

## 4. Program Flow Overview

1. User runs the compiled executable `program.exe`.
2. The program presents a menu with options:

   - Create File  
   - Create Folder  
   - Rename File/Folder  
   - Delete File  
   - Delete Folder  
   - List Files/Directories  
   - Move File/Folder  
   - Exit  

3. The main module receives the user choice and delegates control to the corresponding module.
4. Each module performs the required file system operation using appropriate system APIs (`fopen`, `CreateDirectory`, `MoveFileEx`, `remove`, etc.).
5. Operation results are printed to the console.
6. Screenshots of operations are saved under the `assets/` folder for validation and documentation.

---

## 5. Design Principles

- **Modularity:** Clear division of features into separate modules (`.c`/`.h` pairs).  
- **Interface and Implementation Separation:** Clean declaration in headers, definitions in source files.  
- **Scalability:** Easy addition of new features without affecting existing code.  
- **Maintainability:** Organized folder structure aids debugging and extensions.  
- **Robustness:** The move operation handles both files and non-empty folders reliably on Windows.  
- **Visual Documentation:** Screenshots complement functionality and support verification.

---

## 6. Summary

This architecture provides a professional, clean, and modular framework for file system management in C. The addition of the move file/folder feature completes the suite of core operations and ensures the system is both functional and extensible.

The project structure and visual assets make it suitable for academic submission, open-source sharing, or further development.

---

*End of Architecture Document*