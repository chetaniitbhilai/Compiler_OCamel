# Lexical Analyzer for OCaml

Created by:  
**Chetan (12240470)**  
**Ayush Patel (12240350)**

---

## Language Chosen

**OCaml**

---

## Compilation Instructions

To compile and run the lexer, use the following commands:

```bash
lex Assignment_ILP_1.l
gcc lex.yy.c
./a.out < ocamel_file > output_file
```

- `ocamel_file`: Your source code written in OCaml.
- `output_file`: Output file containing the list of tokens.

> ⚠️ **IMPORTANT**:  
> Ensure **proper spacing** in the input file. Incorrect spacing may lead to unrecognized or misidentified tokens.

---

## Code Structure Breakdown

| Line No.    | Description                                                                                     |
|-------------|-------------------------------------------------------------------------------------------------|
| 8–14        | Tokens for various **data types**                                                               |
| 17–28       | Tokens for **operators (set 1)**                                                                |
| 31–37       | Tokens for **control structures**: `if`, `else`, `while`, `for`, etc.                           |
| 40–43       | Tokens for **miscellaneous OCaml keywords**                                                     |
| 46–51       | Tokens for **referencing/mutability operators** (since OCaml is not mutable by default)        |
| 54–55       | Tokens for **exception handling** keywords                                                      |
| 58–60       | Tokens for **function-related operations**                                                      |
| 63–66       | Tokens for **printing statements** in OCaml                                                     |
| 69          | Token for **input (fetching data from user)**                                                  |
| 72–77       | Regex for **data types and identifiers**                                                        |
| 79–80       | Regex for **comments**                                                                          |
| 82–105      | Tokens for various **mathematical operators**                                                   |
| 107–110     | Tokens for **list operations**                                                                  |
| 112–119     | Tokens for **braces and symbols**                                                               |
| 121         | Token for **whitespace**                                                                        |
| 123         | Catch-all token for **other symbols**                                                           |

---

## Citation

All OCaml keywords, operators, and language details were referenced from the official OCaml website:

➡️ [https://ocaml.org/](https://ocaml.org/)
