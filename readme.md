This project has been created as part of the 42 curriculum by decabral.

push_swap
Description
The push_swap project is an algorithm-based project at 42 that requires sorting a set of integers using two stacks (Stack A and Stack B) and a limited set of instructions. The main objective is to sort the numbers in Stack A in ascending order with the minimum number of operations possible.

This implementation uses the Turk Algorithm, a greedy approach that calculates the most efficient move for each node by analyzing the cost of rotation for both stacks simultaneously. The project covers:

Rigorous input validation (handling non-integers, duplicates, and integer overflows).

Efficient sorting for small sets (2 and 3 numbers).

High-performance sorting for large sets (100 and 500 numbers) using cost-calculation logic.

Instructions
Compilation
To compile the project and generate the push_swap executable, run the following command in the root of the repository:

Bash
make
Execution
The program accepts a list of integers as arguments. You can pass them as separate arguments or as a single string:

Bash
./push_swap 2 1 3 6 5 8
# or
./push_swap "2 1 3 6 5 8"
Testing and Expected Results
The program outputs the sequence of instructions to the standard output. You can verify the efficiency and correctness using the following examples:

3 Numbers: Must be sorted in 3 moves or less.

./push_swap 3 2 1 -> Expected output: sa, rra.

100 Numbers: For a top grade, the move count should be below 700.

500 Numbers: For a top grade, the move count should be below 5500.

To verify correctness using the provided checker_linux:

Bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_linux $ARG
# Expected output: OK
Resources
The Turk Algorithm: Concepts regarding greedy cost analysis between two stacks.

42 Norminette: Coding standard rules for the 42 curriculum.

Linked Lists in C: Documentation on double linked list manipulation.

AI Usage
Artificial Intelligence was utilized as a technical collaborator during the development of this project:

Algorithm Logic: Explaining the complex flow of the Turk Algorithm through simplified analogies to ensure conceptual understanding.

Refactoring: Assistance in modularizing functions like set_cheapest and check_syntax to comply with the 25-line limit per function required by the Norminette.

Debugging: Identifying logic issues such as redundant moves (e.g., ra followed by rra) and ensuring data type safety (e.g., using long to detect int overflows).

Documentation: Structuring and formatting this README file based on previous project templates.