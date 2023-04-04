# push_swap

The Push Swap project is a very simple and highly straightforward algorithm project where data must be sorted. 

You have at your disposal a set of integer values, 2 stacks, and a set of instructions to manipulate both stacks. 

## Operations

You have 2 stacks named a and b.

At the beginning:

The stack a contains a random amount of negative and/or positive numbers which cannot be duplicated.
The stack b is empty.
The goal is to sort in ascending order numbers into stack a. To do so you have the following operations at your disposal:

- sa (swap a): Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
- sb (swap b): Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
- ss : sa and sb at the same time.
- pa (push a): Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
- pb (push b): Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
- ra (rotate a): Shift up all elements of stack a by 1. The first element becomes the last one.
- rb (rotate b): Shift up all elements of stack b by 1. The first element becomes the last one.
- rr : ra and rb at the same time.
- rra (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first one.
- rrb (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one.
- rrr : rra and rrb at the same time.

## Installation and Usage

1. Clone the repository

```bash
➜  ~ git clone https://github.com/QCHR1581/push_swap.git
```

2. Build the executable using the provided Makefile.

```bash
➜  ~ make
```

3. Run the program with a list of integers to sort as arguments. The first argument should be at the top of the stack.

```bash
➜  ~ ./push_swap 4 2 1 3
```

4.The program will display the smallest list of instructions possible to sort the stack a, with instructions separated by a newline character.
