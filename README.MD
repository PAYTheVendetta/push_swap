# push_swap

A sorting algorithm built with two stacks and a limited set of operations — part of the 42 Madrid curriculum.

The goal: sort a list of integers using the minimum number of moves possible.

---

## Project Structure

```
push_swap/
├── src/           # Source files
├── inc/           # Header files
├── lib/           # libft library
├── makefile
└── README.md
```

---

## The Rules

You have two stacks: **A** and **B**. Stack A starts with a random list of integers. Stack B is empty. The goal is to sort stack A in ascending order using only these operations:

| Operation | Description |
|---|---|
| `sa` | Swap the first two elements of stack A |
| `sb` | Swap the first two elements of stack B |
| `ss` | `sa` and `sb` at the same time |
| `pa` | Push the top of B onto A |
| `pb` | Push the top of A onto B |
| `ra` | Rotate A — first element becomes last |
| `rb` | Rotate B — first element becomes last |
| `rr` | `ra` and `rb` at the same time |
| `rra` | Reverse rotate A — last element becomes first |
| `rrb` | Reverse rotate B — last element becomes first |
| `rrr` | `rra` and `rrb` at the same time |

---

## Algorithm

- **Small sets (≤ 5):** hardcoded optimal sorting
- **Large sets:** chunk-based algorithm — numbers are divided into chunks and pushed to B in order, then reassembled into A

---

## Usage

### Compilation

```bash
make        # compile push_swap
make clean  # remove object files
make fclean # remove object files and binary
make re     # full rebuild
```

### Running

```bash
./push_swap 3 1 4 1 5 9 2 6
```

### Checking the result

```bash
ARG="3 1 4 1 5 9 2 6"
./push_swap $ARG | ./checker_linux $ARG
```

Output will be `OK` if sorted correctly, `KO` if not.

---

## What I Learned

- Algorithm design and optimization
- Stack data structure in C
- Thinking about complexity and move efficiency
- Parsing and input validation

---

## Author

**Aitor Alonso Jusdado** — [42 Madrid](https://www.42madrid.com/) — [LinkedIn](https://www.linkedin.com/in/aitor-alonso-jusdado-0ba015153)