# File I/O

This project introduces low-level **File Input/Output (I/O)** in C using **system calls**.  
Instead of relying on standard library functions like `printf` or `fopen`, this project works directly with the operating system through POSIX system calls.

Understanding File I/O is essential for systems programming, as it exposes how programs interact with files, devices, and streams at the kernel level.

---

## Learning Objectives

By the end of this project, you should be able to explain:

- What a file descriptor is
- The purpose of the three standard file descriptors:
  - `STDIN_FILENO`
  - `STDOUT_FILENO`
  - `STDERR_FILENO`
- How to create, open, read, write, and close files
- How the system calls `open`, `read`, `write`, and `close` work
- The meaning of the flags `O_RDONLY`, `O_WRONLY`, `O_RDWR`
- How file permissions work and how to set them when creating files
- What a system call is
- The difference between a function and a system call

---

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All files are compiled on **Ubuntu 20.04 LTS**
- Compilation command:
