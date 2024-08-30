# pointer-basics
**Aim**
To understand the fundamentals of pointers.

**Theory:**
**Definition:**

A pointer is a special type of variable that stores the memory address of another variable rather than holding data itself. It points to the location in memory where the actual data is stored. Pointers are essential for efficient memory and array management and provide direct access to memory manipulation. They enhance performance in operations involving repeated access to data structures (such as strings) by making it quicker and more space-efficient to copy and dereference pointers compared to copying and accessing the actual data.

**Features of Pointers:**

- Pointers can access elements of arrays without needing to consider their subscript range.
- They are useful in file handling.
- Pointers facilitate dynamic memory allocation.

**Advantages of Pointers:**

- **Memory Efficiency:** They enable efficient data sharing between different parts of a program.
- **Enhanced Performance:** They can reduce the amount of code and improve program performance.
- **Multiple Values:** They allow functions to return multiple values.
- **Data Structure Construction:** Pointers are instrumental in creating complex data structures such as linked lists, trees, and graphs.

**Algorithm:**
1. **Start**
2. **Initialize Variables**
3. **Declare an integer variable** `a` **and assign it a value of 10.**
4. **Declare a pointer variable** `aptr` **of type** `int*` **and set it to point to the address of variable** `a`.
5. **Use** `cout` **to print the value at the address stored in** `aptr`, **which will display the value of** `a`.
6. **Use** `cout` **to print the address stored in** `aptr`.
7. **Use** `cout` **to print the address of** `a` **directly.**
8. **End**
