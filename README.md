* Monty - Stacks and Queues Interpreter
Monty is a project that focuses on implementing a Monty language interpreter for manipulating stacks and queues. This README.md file provides an overview of the project and its requirements.

Table of Contents
Project Description
Resources
Learning Objectives
Copyright and Plagiarism
Requirements
Compilation & Output
Monty Language
Tasks
Task 0: push, pall
Task 1: pint
Task 2: pop
Task 3: swap
Task 4: add
Task 5: nop
Task 6: sub
Task 7: div
Task 8: mul
Task 9: mod
Task 10: comments
Task 11: pchar
Task 12: pstr
Task 13: rotl
Task 14: rotr
Task 15: stack, queue
Task 16: Brainf*ck
Task 17: Add Two Digits
Task 18: Multiplication
Task 19: Multiplication Level Up
Project Description
Monty is a scripting language that relies on a unique stack with specific instructions to manipulate it. The project's goal is to create an interpreter for Monty bytecode files. These bytecode files typically have the .m extension and contain a series of instructions.

Resources
Before starting the project, it is recommended to read or watch resources related to the following topics:

Google
Using extern to share variables between source files in C
Stacks and Queues in C
Stack operations
Queue operations
Learning Objectives
By the end of this project, you should be able to explain the following concepts without relying on external resources:

What LIFO and FIFO mean
What a stack is and when to use it
What a queue is and when to use it
Common implementations of stacks and queues
Most common use cases of stacks and queues
The proper way to use global variables
Copyright and Plagiarism
It is important to remember that plagiarism is strictly forbidden. You should come up with solutions for the tasks independently to meet the learning objectives. Do not copy or publish the work of others.

* Requirements
** General
Allowed editors: vi, vim, emacs
All files should be compiled on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=c89
All files should end with a new line
A README.md file at the root of the project folder is mandatory
Code should follow the Betty style, which will be checked using betty-style.pl and betty-doc.pl
You are allowed to use a maximum of one global variable
No more than 5 functions per file
You can use the C standard library
The prototypes of all functions should be included in a header file called monty.h
Don't forget to push your header file
All header files should be include guarded
Complete the tasks in the specified order
** GitHub
There should be one project repository per group. Cloning, forking, or using an existing repository with the same name before the second deadline can result in a 0% score.
Compilation & Output
Your code will be compiled using the following command:

c
Copy code
* $ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
All output must be printed on stdout
Any error messages must be printed on stderr
Monty Language
Monty 0.98 is a scripting language with specific opcodes for manipulating a stack. Bytecode files in Monty have the .m extension and contain one instruction per line. You can find examples of Monty bytecode files in the project description.

* Tasks
** Task 0: push, pall
Implement the push and pall opcodes.

The push opcode pushes an element onto the stack. Usage: push <int>.
The pall opcode prints all values on the stack.
** Task 1: pint
Implement the pint opcode.

The pint opcode prints the value at the top of the stack, followed by a new line.
** Task 2: pop
Implement the pop opcode.

The pop opcode removes the top element from the stack.
** Task 3: swap
Implement the swap opcode.

The swap opcode swaps the top two elements of the stack.
** Task 4: add
Implement the add opcode.

The add opcode adds the top two elements of the stack and stores the result in the second top element. The top element is removed.
** Task 5: nop
Implement the nop opcode.

The nop opcode does nothing.
** Task 6: sub (Advanced)
Implement the sub opcode.

The sub opcode subtracts the top element from the second top element and stores the result in the second top element. The top element is removed.
** Task 7: div (Advanced)
Implement the div opcode.

The div opcode divides the second top element by the top element and stores the result in the second top element. The top element is removed.
If the top element is 0, it results in an error.
** Task 8: mul (Advanced)
Implement the mul opcode.

The mul opcode multiplies the second top element by the top element and stores the result in the second top element. The top element is removed.
** Task 9: mod (Advanced)
Implement the mod opcode.

The mod opcode computes the remainder of the division of the second top element by the top element and stores the result in the second top element. The top element is removed.
If the top element is 0, it results in an error.
** Task 10: comments (Advanced)
Implement the capability to handle comments.

Lines starting with # should be treated as comments and ignored.
** Task 11: pchar (Advanced)
Implement the pchar opcode.

The pchar opcode prints the character corresponding to the ASCII value at the top of the stack.
** Task 12: pstr (Advanced)
Implement the pstr opcode.

The pstr opcode prints a string starting from the top of the stack, using the integers on the stack as ASCII values.
The string stops when the stack is empty, an integer is 0, or an integer is not in the ASCII table.
** Task 13: rotl (Advanced)
Implement the rotl opcode.

The rotl opcode rotates the stack to the top, making the top element the last one.
** Task 14: rotr (Advanced)
Implement the rotr opcode.

The rotr opcode rotates the stack to the bottom, making the last element the top one.
** Task 15: stack, queue (Advanced)
Implement the stack and queue opcodes.

The stack opcode sets the data format to a stack (LIFO), which is the default behavior.
The queue opcode sets the data format to a queue (FIFO).
When switching modes, the top and front of the stack or queue change accordingly.
** Task 16: Brainf*ck (Advanced)
Write a Brainf*ck script that prints "School," followed by a new line.

** Task 17: Add Two Digits (Advanced)
Read two digits from stdin, add them, and print the result.

** Task 18: Multiplication (Advanced)
Read two digits from stdin, multiply them, and print the result.

** Task 19: Multiplication Level Up (Advanced)
Read two digits from stdin, multiply them, and print the result, followed by a new line.


