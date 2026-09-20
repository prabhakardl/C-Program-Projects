# C Program Projects

A collection of practical **C programming projects and utilities** developed to practice file handling, string manipulation, structures, functions, command-line arguments, and console-based application development.

## 📌 Projects Included

### 1. Find and Replace String in Text File

**Source file:** `FindReplaceStringTextFile.c`

A command-line utility written in C to find a specified string in a text file and replace all occurrences with another string.

#### Features

* Open an existing text file
* Read the complete file into memory
* Search for a specified string
* Replace all occurrences of the string
* Write the modified content back to the original file
* Command-line argument support
* Displays a completion message after replacement

The program uses standard C libraries including:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
```

The program expects three arguments:

```text
filename
find string
replace string
```

#### Usage

```cmd
FindReplaceStringTextFile.exe input.txt FindString ReplaceString
```

Example:

```cmd
FindReplaceStringTextFile.exe input.txt old new
```

The repository also contains a command-line usage example in:

```text
Usage of FindReplaceStringTextFile.c from CMD.txt
```

The original example in that file demonstrates:

```cmd
FindReplaceStringTextFile -o Find_Replace_File input.txt FindString ReplaceString
```

The actual C source currently checks for three user arguments after the executable name, so the executable invocation should follow the syntax shown in the source:

```cmd
FindReplaceStringTextFile.exe <filename> <find> <replace>
```

The program reports:

```text
Replacement complete.
```

when the operation finishes successfully.

---

## 📚 2. Library Management System

**Source file:** `Library_Management.c`

A console-based Library Management System developed in C.

The application uses file handling and supporting header files to maintain library book records.

### Main Features

The main menu provides the following operations:

```text
1. Add Books
2. Delete Book
3. Search Book
4. View Book List
5. Edit Book Record
6. Change Password
7. Close Application
```

### Book Management

The application supports:

* Adding books
* Deleting books
* Searching books
* Viewing the book list
* Editing book records
* Maintaining book categories
* Maintaining book IDs
* Maintaining authors
* Maintaining quantities
* Maintaining prices
* Maintaining rack numbers

### Search Options

Books can be searched using:

```text
1. Search By ID
2. Search By Name
```

### File Storage

The Library Management System uses files for persistent storage.

Important files include:

```text
Record.dat
password.dat
```

`Record.dat` is used to store book records.

`password.dat` is used for the administrator authentication/password information.

---

## 🔐 Administrator Login

When the Library Management System starts, it checks whether:

```text
password.dat
```

exists.

If the file does not exist, the application provides an administrator sign-up flow.

If the file exists, the administrator sign-in process is used.

This provides a basic authentication mechanism for accessing the library management functions.

---

## 📂 Repository Structure

```text
C-Program-Projects/
│
├── Find Replace String in Text File/
│
├── FindReplaceStringTextFile.c
│
├── Library_Management.c
├── Library_Management.exe
│
├── Record.dat
├── password.dat
│
├── Usage of FindReplaceStringTextFile.c from CMD.txt
│
├── core_functions.h
├── general_functions.h
├── variables.h
│
├── progressbar.c
│
└── gmon.out
```

### File Description

| File                                                | Description                                             |
| --------------------------------------------------- | ------------------------------------------------------- |
| `FindReplaceStringTextFile.c`                       | Find and replace strings in a text file                 |
| `Library_Management.c`                              | Main Library Management System source                   |
| `Library_Management.exe`                            | Compiled Library Management executable                  |
| `Record.dat`                                        | Binary file containing library book records             |
| `password.dat`                                      | Administrator password/login data                       |
| `core_functions.h`                                  | Supporting functions for the Library Management System  |
| `general_functions.h`                               | General supporting functions                            |
| `variables.h`                                       | Shared variables/data definitions                       |
| `progressbar.c`                                     | C program related to progress bar functionality         |
| `gmon.out`                                          | Profiling/output file generated during program analysis |
| `Usage of FindReplaceStringTextFile.c from CMD.txt` | Command-line usage example                              |

---

## 🛠️ C Programming Concepts Used

These projects demonstrate several practical C programming concepts.

### Basic C

* Variables
* Data types
* Functions
* Conditional statements
* Loops
* Input/output

### Strings

The Find/Replace project uses:

```c
strlen()
strstr()
memcpy()
memmove()
```

for string processing and memory manipulation.

### File Handling

The projects demonstrate:

```c
fopen()
fread()
fwrite()
fseek()
ftell()
rewind()
fclose()
remove()
rename()
```

These functions are used for reading, writing, modifying, and managing files.

### Dynamic Memory

The Find/Replace program dynamically allocates memory using:

```c
malloc()
```

and releases the memory using:

```c
free()
```

### Structures and Binary Files

The Library Management System stores book records in a binary file using:

```c
fread()
fwrite()
```

This demonstrates practical use of structures and binary file storage.

### Command-Line Arguments

The Find/Replace program uses:

```c
int main(int argc, char *argv[])
```

to receive input from the Windows Command Prompt.

---

## 💻 How to Compile

### FindReplaceStringTextFile.c

Using GCC:

```cmd
gcc FindReplaceStringTextFile.c -o FindReplaceStringTextFile.exe
```

Run:

```cmd
FindReplaceStringTextFile.exe input.txt old new
```

---

## 🪟 Running from Windows CMD

Navigate to the project directory:

```cmd
cd C:\Path\To\C-Program-Projects
```

Compile:

```cmd
gcc FindReplaceStringTextFile.c -o FindReplaceStringTextFile.exe
```

Run:

```cmd
FindReplaceStringTextFile.exe input.txt old new
```

---

## 📖 Example

Suppose `input.txt` contains:

```text
Hello old world.
This is an old example.
The old value needs to be replaced.
```

Run:

```cmd
FindReplaceStringTextFile.exe input.txt old new
```

The resulting file will contain:

```text
Hello new world.
This is an new example.
The new value needs to be replaced.
```

---

## 🏫 Learning Objectives

These projects are useful for practicing:

* C programming fundamentals
* File handling
* String manipulation
* Dynamic memory allocation
* Binary file operations
* Command-line applications
* Structures
* Modular programming
* Header files
* Console-based application development
* Basic authentication concepts

---

## ⚠️ Notes

These projects were developed primarily for learning and practical programming practice.

The Library Management System uses Windows-specific console functionality such as:

```c
system("cls");
getch();
gotoxy();
```

Therefore, compatibility may depend on the compiler and operating system environment.

The existing executable files may also have been compiled using a particular compiler/environment. Recompiling the source code with your current compiler may be necessary.

---

## 🚀 Future Improvements

Possible improvements include:

* Replace `system("cls")` with a more portable screen-management approach
* Replace `getch()` with portable input handling
* Improve input validation
* Prevent duplicate book IDs
* Support book titles containing spaces
* Add issue/return book functionality
* Add student/member management
* Add due-date tracking
* Add fine calculation
* Add transaction history
* Add backup and restore functionality
* Improve password security
* Replace plain binary files with a database
* Add a graphical user interface
* Add Makefile/build scripts
* Add automated tests
* Improve error handling

---

## 👨‍💻 Author

**Prabhakar Reddy**

GitHub:

https://github.com/prabhakardl

---

## 📜 License

Unless a separate license file is added to this repository, the source code should be treated according to the repository owner's stated terms.

---

## ⭐ Repository

C Program Projects:

https://github.com/prabhakardl/C-Program-Projects
