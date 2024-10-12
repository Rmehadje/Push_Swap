# 42 Push Swap

## 📚 Overview
**Push Swap** is a project from the 42 School curriculum that challenges you to sort a stack of integers using a limited set of operations. The goal is to implement an efficient sorting algorithm that uses the fewest moves possible while demonstrating a strong understanding of data structures and algorithm optimization.

## 🚀 Getting Started

### Prerequisites
- **C Compiler**: Make sure you have a C compiler installed (GCC recommended).
- **Make**: A build system to compile the project.

### Installation
1. Clone the repository:
   ```
   git clone https://github.com/your-username/42-push-swap.git
    ```
2. Access the repository:
```
   cd 42-push-swap
```
3. Compile and run the program with the desired arguments:
```
make
./push_swap "your desired numbers devided by spaces"
```
With the correct arguments, the program will show you the number of operations done until the stack was filled again and sorted, for more than five arguemnts, the method used is called the "k-sort" which uses indexing to compare the first element in stack B, with the first element with stack A before using one of the valid operations to make sure that the first stack is fully organized in a very optimized way.

### Operations:
The project relies on key operations that the algorithm is allowed to use, here you may find the list of legal operations found in the project:
* sa: Swap the first two elements of stack A.
* sb: Swap the first two elements of stack B.
* ss: Swap both stacks A and B.
* pa: Push the top element from stack B to stack A.
* pb: Push the top element from stack A to stack B.
* ra: Rotate stack A upwards.
* rb: Rotate stack B upwards.
* rr: Rotate both stacks A and B upwards.
* rra: Reverse rotate stack A downwards.
* rrb: Reverse rotate stack B downwards.
* rrr: Reverse rotate both stacks A and B downwards.


  ### ⚡ Features :
  - Optimized method used for the a very low amount of moves (under 700 moves for 100 numbers, under 5500 moves for 500 numbers)
  - Easy to install and run.
  - two different methods used (5 integers and under/over 5 integers)


  ### 💡 Examples :
  ```
  ./push_swap 5 4 8 2 1
  ./push_swap "3 1 2 4 6 9 4 42 36 43 10"
  ```
  
### Summary
Special thanks to 42 School for providing the curriculum and guidelines for this project, I personally learned a lot about optimizing your algorithm through this project, safe to say it was an enjoyable project to work on!
if you need any additional information about the program or the project feel free to contact me, all my contacts are on my bio using this link [![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)](https://github.com/Rmehadje)
