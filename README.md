<div align="center">

# Simple Shell
The simple shell is a command language interpreter that takes commands from the STDIN and executes them. 
Its code is written in C language.


---

## RESOURCES


* [Everything you need to know to start coding your own shell](https://intranet.hbtn.io/concepts/64)

* [Introduction to Linux Shell and Shell Scripting](https://www.geeksforgeeks.org/introduction-linux-shell-shell-scripting/)

* [Tutorial - Write a Shell in C](https://brennan.io/2015/01/16/write-a-shell-in-c/)

* [Building a Linux Shell in C](https://medium.com/@josefgoodyear/building-a-linux-shell-in-c-8be5e109458b)

* [Making your own Linux Shell in C](https://www.geeksforgeeks.org/making-linux-shell-c/)

---


## Let's start

Clone this repo:

```
$ git clone https://github.com/lperezcas16/simple_shell.git
```

Compile with

```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o simple_shell
```

Execute it:
```
$ ./simple_shell
```

---

## USAGE:


### INTERACTIVE MODE:

```
$ <command> <flags> <argument>
```
EXAMPLE:

* INPUT:
```
$ echo Hello World!
```
* OUTPUT:
```
 Hello World!
```

### NON-INTERACTIVE MODE:

```
$ echo <commands and arguments> | ./simple_shell
```
EXAMPLE:

* INPUT:
```
$ echo "ls -l" | ./simple_shell
```

* OUTPUT
```
total 140
-rw-rw-r-- 1 vagrant vagrant 639 Aug 13 19:14 0_principal_header.h
(...)
```

---

## BUILT-IN COMMANDS 



| Command | Description  |
| ------- | --- |
| exit | Exit simple shell|	
| env | Display environment variables |
| setenv | Set environment variable value or create a new one |
| unsetenv | Delete environment variable |


---

## USAGE:



* SETENV:
```
$ setenv <MYVAR> <myvalue>
```

* UNSETENV
```
$ unsetenv <MYVAR>
```

* env
```
$ env 
```

---

### AUTHORS
* **Jose Muñoz** - [jose120918](https://github.com/jose120918) :sunglasses: