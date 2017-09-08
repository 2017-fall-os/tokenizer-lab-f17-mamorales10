# Tokenizer Lab

The purpose of this lab is to write a tokenizer function mytoc() which should
return a freshly allocted null-terminated array of pointers to freshly allocated
strings containing each token from the input string.

When the program runs, it runs one of the test given by the assignment description
and then it prompts the user with "$". The user can type a string into the prompt,
and the program will print each token from that string on a different line.

To compile:
~~~
$ make test
~~~
To run:
~~~
$ ./test
~~~
To delete binaries:
~~~
$ make clean
~~~
## Test Cases:
All of the test cases that were given by the description of this assignment were
tested. Each test case was successful.

## Help I Recieved:
For my isExit() function, I received help from the strcmp() function example in
page 106 of the K&R textbook, but I modified it so that it only compares to check
if "exit" is the input.
For my getString() function, I used most of the code from the gets_n() function
that I put in my Arch1 binary search tree lab from Fall 2016.
For the write() system call, I received help and I used the same if-statement
format from the following URL: codewiki.wikidot.com/c:system-calls:write