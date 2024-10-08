# C++ - Module 01

## Overview

**C++ - Module 01** is part of the 42 school's C++ curriculum, designed to introduce key concepts of memory management, references, dynamic object handling, and basic file manipulation. Through a series of exercises, you will practice essential programming skills like working with objects, handling memory, and managing strings.

## Learning Objectives

In this module, you will:

- Learn to manage memory dynamically using **pointers** and the **heap**.
- Understand the use of **references** and **pointers** in object manipulation.
- Practice reading from and writing to files, and perform simple **string replacement** operations.
- Gain experience in handling **objects** and **dynamic memory** in C++.
- Implement **simple classes** and apply basic object-oriented principles.

## Project Structure

### Exercise 00: BraiiiiiiinnnzzzZ

In this exercise, you will create a `Zombie` class. The goal is to allocate and deallocate zombie objects dynamically:

- Implement a **Zombie class** with a member function to announce itself.
- Write two functions: `newZombie()` which allocates memory dynamically for a zombie, and `randomChump()` which creates a zombie on the stack.
- Practice the basics of object creation and destruction in C++.

### Exercise 01: Moar brainz!

This exercise expands on the zombie concept by exploring **dynamic memory allocation** and **pointers**:

- You will create a function that generates a **horde of zombies**, using dynamic memory allocation.
- Handle the cleanup of dynamically allocated objects to avoid memory leaks.

### Exercise 02: HI THIS IS BRAIN

In this exercise, you will:

- Work with **references** and **pointers** to practice manipulating variables directly in memory.
- Create a program that prints the memory addresses and values of a **string**, using both references and pointers.
- Understand the relationship between **references**, **pointers**, and memory addresses.

### Exercise 03: Unnecessary violence

This exercise focuses on using **pointers to functions** and **object-oriented design**:

- Create a class `Weapon` and a class `HumanA` and `HumanB`.
- `HumanA` uses a weapon passed by reference, while `HumanB` has a pointer to the weapon.
- Understand the importance of managing object references and pointers in classes.

### Exercise 04: Sed is for losers

In this exercise, you will manipulate files and strings to implement a **simple text replacement program**:

- Write a program that opens a file, reads its content, and replaces all occurrences of a **given string** with another string.
- Practice **file handling** and **string manipulation** in C++.
- The program must not modify the original file but create a new one with the changes.

### Exercise 05: Harl 2.0

In this final exercise, you will:

- Implement a `Harl` class with a **logging mechanism** that reacts to four different log levels (`DEBUG`, `INFO`, `WARNING`, `ERROR`).
- Use **function pointers** to map each log level to a corresponding function.
- This will give you a deeper understanding of how **function pointers** work in C++ and how to implement dynamic behavior based on conditions.

## Key Concepts

### 1. **Dynamic Memory Management**
   - In exercises 00 and 01, you will practice allocating and freeing memory dynamically using `new` and `delete` to avoid memory leaks.

### 2. **References and Pointers**
   - Exercise 02 emphasizes the use of references and pointers, which are fundamental to efficient memory management in C++.

### 3. **File Handling and String Manipulation**
   - Exercise 04 focuses on working with file streams in C++ (`ifstream`, `ofstream`) and performing string operations, giving you practical experience with real-world programming tasks.

### 4. **Function Pointers**
   - Exercise 03 and 05 introduce the concept of function pointers, which allows you to map specific functions to different cases and react dynamically to input.

### 5. **Object-Oriented Programming (OOP)**
   - Throughout the exercises, you will practice fundamental OOP principles such as **encapsulation** and **interaction between objects** through member functions and constructors.

## How to Run

1. **Clone the repository:**
   ```bash
   git clone https://github.com/your-username/CPP-Module-01.git
   cd CPP-Module-01
   ```

2. **Compile the code:**
   Each exercise has its own `Makefile`. Run the following command to compile the relevant exercise:
   ```bash
   make
   ```

3. **Run the executable:**
   After compiling, you can run each exercise like so:
   ```bash
   ./ex00
   ./ex01
   ./ex02
   ./ex03
   ./ex04
   ./ex05
   ```

## Requirements

- **Language:** C++
- **Compiler:** `clang++` or `g++`
- The project must adhere to the **C++98** standard (or as specified in the project instructions).

## Conclusion

**C++ - Module 01** provides essential practice in **dynamic memory management**, **object-oriented programming**, and **file handling**. These exercises will help solidify your understanding of fundamental C++ concepts, preparing you for more advanced topics in later modules.
