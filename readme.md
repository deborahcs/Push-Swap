*This project has been created as part of the 42 curriculum by decabral.*

# **Description:**
The `push_swap` project is an algorithm-based project at 42 that requires sorting a set of integers using two stacks (Stack A and Stack B) and a limited set of instructions. The main objective is to sort the numbers in Stack A in ascending order with the minimum number of operations possible.

This implementation uses the Turk Algorithm, that calculates the most efficient move for each node by analyzing the cost of rotation for both stacks simultaneously. The project covers:

Rigorous input validation (handling non-integers, duplicates, and integer overflows).

Efficient sorting for small sets (2 and 3 numbers).

High-performance sorting for large sets (100 and 500 numbers) using cost-calculation logic.

# **Instructions:**
## For Compilation this project has a Makefile.
To compile the project and generate the push_swap executable, run the following command in the root of the repository:

> In terminal, from the project root, run:
```
make
```
- This will generate the executable push_swap.
- Execution
The program accepts a list of integers as arguments. You can pass them as separate arguments or as a single string:

```
./push_swap 2 1 3 6 5 8
```
> or
```
./push_swap "2 1 3 6 5 8"
```
- Testing and Expected Results
The program outputs the sequence of instructions to the standard output. You can verify the efficiency and correctness using the following examples:

> 3 Numbers: Must be sorted in 3 moves or less. -> Expected output: sa, rra.
```
./push_swap 3 2 1
```
- 100 Numbers: For a top grade, the move count should be below 700.
- 500 Numbers: For a top grade, the move count should be below 5500.

>Run with a checker to verify the sorting: -> Expected output: OK
```
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_linux $ARG
```
> Cleaning (to remove the object files and clean the directory):
```
make fclean
```
## Error Handling -> Expected Outcome: "Error".
> Letters in Arguments
```
./push_swap 3 a 1
```
> Numbers mixed with letters:
```
./push_swap 3 2a 1
```
> Signs in the wrong place:
```
./push_swap 3 2- 1
```
> No numbers:
```
./push_swap -
```
> Duplicates
```
./push_swap 3 3 2 1
```
> Empty String or contaning only a space
```
./push_swap "" or ./push_swap " "
```
> Above INT_MAX; Below INT_MIN; Long Overflow
```
./push_swap "2147483648" or ./push_swap "-2147483649" or ./push_swap "9223372036854775808"
```
# **Resources:**
## Tutorial Videos
For this project I watched some videos on youtube that helped me understand turk algorithm and linked lists.
- Here are some links:
> - [push_swap : a performant sorting algorithm using 2 stacks](https://youtu.be/OaG81sDEpVk?si=4e9ml2wGZcGxHQI6)
> - [push_swap TUTORIAL!](https://youtu.be/wRvipSG4Mmk?si=4jCdxFWOwpIO3wJm)
> - [Learn Linked Lists in 13 minutes](https://youtu.be/N6dOwBde7-M?si=i4kAzFLwIegufjN2)

## Links
> - [Push_Swap Turk algorithm explained in 6 steps](https://pure-forest.medium.com/push-swap-turk-algorithm-explained-in-6-steps-4c6650a458c0)
> - [Linked List Data Structure](https://www.geeksforgeeks.org/dsa/linked-list-data-structure/)

# **AI**
- Algorithm Logic: Explaining the complex flow of the Turk Algorithm through simplified analogies to ensure conceptual understanding.

- It helped clarify how to handle edge cases, such as empty strings, duplicate values, and integer overflows, ensuring the program correctly outputs "Error" through the appropriate channel.
