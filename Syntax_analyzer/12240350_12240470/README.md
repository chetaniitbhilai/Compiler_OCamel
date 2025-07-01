# Execution Instructions and Notes

## How to Run the File

Execute the following commands:

```bash
flex Assignment.l && bison -d Assignment.y && gcc Assignment.tab.c
```

To run any file and generate output:

```bash
./a.out "Filename"
```

**Example:**

```bash
./a.out Valid_FOR.txt
```

---

## Notes

1. The **precedence**, **associativity**, and **block control flow** are implemented according to the **C language**.
2. For **invalid input files**, the corresponding **semantic errors** (such as `if` without `else`, double declarations, etc.) are commented in the code.
3. The `Symbol.c` file is used for the **implementation of the symbol table**.
