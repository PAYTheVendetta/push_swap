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

## Algorithm — KSort (chunk-based)

This implementation uses a **chunk-based algorithm (KSort)** that divides the numbers into ranges and pushes them to stack B in chunks:

- Numbers are divided into ranges (chunks)
- **Default chunk size: 15** for small sets
- **Chunk size increases to 30** for sets larger than 100 elements
- Once all elements are in B sorted by range, they are reassembled back into A in order

This approach minimizes the total number of operations by working on groups of numbers rather than individual elements.

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

### Quick performance test

```bash
make test X=500 | wc -c
```

> Generates `X` random numbers, runs push_swap, and counts the total characters of output (proportional to number of operations). Lower is better.

### Checking correctness

```bash
ARG="3 1 4 1 5 9 2 6"
./push_swap $ARG | ./checker_linux $ARG
```

Output will be `OK` if sorted correctly, `KO` if not.

### Visualizer

You can see the algorithm in action using the [push_swap visualizer](https://push-swap42-visualizer.vercel.app/) — paste your output and watch the stacks move.

---

## Performance

| Elements | Max operations (to pass) |
|---|---|
| 3 | ≤ 3 |
| 5 | ≤ 12 |
| 100 | ≤ 700 |
| 500 | ≤ 5500 |

---

## What I Learned

- Algorithm design and optimization
- Stack data structure in C
- Chunk-based sorting strategy
- Complexity analysis and move efficiency
- Input parsing and validation

---

## Author

**Aitor Alonso Jusdado** — [42 Madrid](https://www.42madrid.com/) — [LinkedIn](https://www.linkedin.com/in/aitor-alonso-jusdado-0ba015153)