
_This project has been created as part of the 42 curriculum by **mlaktaou**_
# Push_swap
## 💡 Overview
**Push_swap** is a highly efficient sorting project at 42 School. The challenge is to sort a random set of integers using two stacks (`a` and `b`) and a limited set of operations, aiming for the minimum number of moves possible.

This project includes:
1. **push_swap**: Outputs the most efficient sequence of instructions to sort the numbers.
2. **checker (Bonus)**: Validates if the sequence of instructions actually sorts the stack.

## 🛠️ The Rules & Operations
The program starts with `stack_a` containing a random amount of unique negative and/or positive integers. `stack_b` starts empty.

The available operations are:

| Operation | Description |
| :--- | :--- |
| **`sa` / `sb`** | **Swap**: Swap the first 2 elements at the top of stack a / b. |
| **`ss`** | `sa` and `sb` at the same time. |
| **`pa` / `pb`** | **Push**: Take the first element at the top of one stack and put it at the top of the other. |
| **`ra` / `rb`** | **Rotate**: Shift up all elements of a stack by 1. The first element becomes the last. |
| **`rr`** | `ra` and `rb` at the same time. |
| **`rra` / `rrb`** | **Reverse Rotate**: Shift down all elements of a stack by 1. The last element becomes the first. |
| **`rrr`** | `rra` and `rrb` at the same time. |



---

## 🚀 Performance
My implementation is optimized to meet the 42 Network requirements:

* **3 numbers**: Max 3 moves.
* **5 numbers**: Max 12 moves.
* **100 numbers**: Sorted in less than **700 moves** .
* **500 numbers**: Sorted in less than **5500 moves** .

## 🏗️ Instructions (Building the project)

To build the project, follow these steps:

1.  Compile the Mandatory part:
    
    This produces the push_swap executable.

    ```bash
	    make
    ```
    
2.  Compile the Bonus part:
    
    This produces the checker executable.
    ```bash
	    make bonus
    ```
    
3.  **Usage:**

    ``` bash
	    ./push_swap 3 2 1
	    # To verify with checker:
	    ARG="3 2 1"; ./push_swap $ARG | ./checker $ARG
    ```

## 🧠 Sorting Strategy

My algorithm focuses on:

-   **Tiny Sort (3 items):** Specialized logic to sort in max 3 moves.
-   **Small Sort (5 items):** Pushing 2 smallest to `stack_b` then sorting the remaining 3.
-   **Large Sort (100+ items):** Implemented an algorithm to calculate the lowest cost move for each element, ensuring we stay below the move limit for a full score.
    

## 📚 Resources

These are the resources that helped me understand the logic and complexity of the project:

-   **Algorithms:**
    
    -   **Sort Algorithm** Excellent guide for cost-based sorting.
    -   **Push Swap Visualizer** Essential tool for debugging your moves visually.
        
-   **C Concepts:**
    
    -   **Linked Lists in C** To understand how to manipulate the stacks.
    -   **Memory Management** Using Valgrind to ensure no memory leaks (crucial for 42).

* **AI & Learning Support:**

  * **Gemini AI** Used as a technical thought partner for understand the hard concepts, debugging complex memory leaks, optimizing the Makefile structure, and refining the logical flow of the sorting algorithm through iterative feedback.
  
## ⚠️ Error Handling

The program strictly validates input and will display `Error` if:

-   Arguments are not integers or exceed `INT_MAX/MIN`
-   There are duplicate numbers.
-   Invalid instructions are passed to the checker.

