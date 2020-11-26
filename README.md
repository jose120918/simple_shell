<div align="center">

# Simple Shell
The simple shell is a command language interpreter that takes commands from the STDIN and executes them. 
Its code is written in C language.

</div>
---

## RESOURCES


* [Everything you need to know to start coding your own shell](https://intranet.hbtn.io/concepts/64)

* [Introduction to Linux Shell and Shell Scripting](https://www.geeksforgeeks.org/introduction-linux-shell-shell-scripting/)

* [Tutorial - Write a Shell in C](https://brennan.io/2015/01/16/write-a-shell-in-c/)

* [Building a Linux Shell in C](https://medium.com/@josefgoodyear/building-a-linux-shell-in-c-8be5e109458b)

* [Making your own Linux Shell in C](https://www.geeksforgeeks.org/making-linux-shell-c/)

---

## List of allowed functions and system calls

* access (man 2 access)
* chdir (man 2 chdir)
* close (man 2 close)
* closedir (man 3 closedir)
* execve (man 2 execve)
* exit (man 3 exit)
* _exit (man 2 _exit)
* fflush (man 3 fflush)
* fork (man 2 fork)
* free (man 3 free)
* getcwd (man 3 getcwd)
* getline (man 3 getline)
* isatty (man 3 isatty)
* kill (man 2 kill)
* malloc (man 3 malloc)
* open (man 2 open)
* opendir (man 3 opendir)
* perror (man 3 perror)
* read (man 2 read)
* readdir (man 3 readdir)
* signal (man 2 signal)
* stat (__xstat) (man 2 stat)
* lstat (__lxstat) (man 2 lstat)
* fstat (__fxstat) (man 2 fstat)
* strtok (man 3 strtok)
* wait (man 2 wait)
* waitpid (man 2 waitpid)
* wait3 (man 2 wait3)
* wait4 (man 2 wait4)
* write (man 2 write)

## Code Style

Our Shell will follow Betty guidelines. Betty is a Holberton Style C code checker written in Perl.
You can find the documentation [here](https://github.com/holbertonschool/Betty).

---


## Let's start

Clone this repo:

```
$ git clone https://github.com/jose120918/simple_shell.git
```

Compile with

```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

Execute it:
```
$ ./hsh
```

---


## BUILT-IN COMMANDS 



| Command | Description  |
| ------- | --- |
| exit | Exit simple shell|	
| env | Display environment variables |

---

### AUTHORS
* **Jose Muñoz** - [jose120918](https://github.com/jose120918) :sunglasses: