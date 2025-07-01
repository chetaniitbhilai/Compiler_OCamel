This is a readme file for a lexical analyzer created by Chetan(12240470) and Ayush Patel(12240350).

The language chosen by us is OCamel.

The following commands are in required to compile the lex file:

i. lex Assignment_ILP_1.l
ii. gcc lex.yy.c
iii. (./a.out < ocamel_file) > output_file

The output_file has the complete list of tokens.

***IMPORTANT***
Please ensure there is proper spacing given in the file so that each token can be identified.



Basic information about the code:

Line No: 8-14 shows the tokens for various data-types.
Line No: 17-28 shows the tokens for various operators_1.
Line No: 31-37 shows the tokens for if-else, while loop, for loop keywords.
Line No: 40-43 shows the tokens for various other keywords in OCamel.
Line No: 46-51 shows the tokens for various referncing operators in OCamel.(As OCamel is not a mutable language therefore these operators are used for creating mutability in the language.)
Line No: 54-55 shows the tokens for various exception-handlers.
Line No: 58-60 shows the tokens for various operations related to functions.
Line No: 63-66 shows the tokens for various ways of printing in OCamel.
Line No: 69 shows the tokens for fetching data from user.
Line No: 72-77 shows the tokens for the regex for the different data-types and identifiers.
Line No: 79-80 shows the tokens for regex for comments.
Line No: 82-105 shows the tokens for various math operators.
Line No: 107-110 shows the tokens for various list operatiions in OCamel.
Line No: 112-119 shows the tokens for various braces and other symbols.
Line No: 121 shows the tokens for space.
Line No: 123 shows the tokens for all other left symbols.


**CITATION**
For knowing the operators, keywords and all other stuff related to OCamel we referred to the official website of ocamel https://ocaml.org/
