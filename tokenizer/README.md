Write your tokeniser in this directory.
#Tokenizer Lab

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
Test Cases:
All of the test cases that were given by the description of this assignment were
tested. Each test case was successful.