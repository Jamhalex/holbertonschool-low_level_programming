#  Singly Linked Lists

## Project Overview
This project introduces singly linked lists in C — a fundamental dynamic data structure used to store sequential data in memory.  
Unlike arrays, linked lists do not require contiguous memory, allowing efficient insertion and deletion of nodes.

You will learn how to:
- Build and traverse singly linked lists
- Add nodes at the beginning or end
- Measure list length
- Print list contents
- Free all allocated memory
- Work correctly with `struct`, pointers, and dynamic allocation (`malloc`/`free`)

---

## Data Structure

### `struct list_s`

```c
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
