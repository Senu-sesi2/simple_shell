##README.md - simple shell
* This file contain some useful information about the simple shell project.

###General Requirements

1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
3. All files should end with a new line
4. The code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
5. The shell should not have any memory leaks
6. Not more than 5 functions per file is allowed
7. All header files should be include guarded
8. Use system calls only when you need to
9. An AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository.

###Task descriptions

1. a beautiful code that passes the Betty checks
2. a UNIX command line interpreter.
	1. Display a prompt and wait for the user to type a command. A command line always ends with a new line.
	2. The prompt is displayed again each time a command has been executed.
	3. The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
	4. The command lines are made only of one word. No arguments will be passed to programs.
	5. If an executable cannot be found, print an error message and display the prompt again.
	6. Handle errors.
	7. You have to handle the “end of file” condition (Ctrl+D)
3. Handle command lines with arguments
4. Simple shell 0.2 +
	1. Handle the PATH
	2. fork must not be called if the command doesn’t exist
5. Simple shell 0.3 +
	1. Implement the exit built-in, that exits the shell
	2. Usage: exit
	3. You don’t have to handle any argument to the built-in exit
6. Simple shell 0.4 +
	1. Implement the env built-in, that prints the current environment
7. Simple shell 0.1 +
	1. Write your own getline function
	2. Use a buffer to read many chars at once and call the least possible the read system call
	3. You will need to use static variables
	4. You are not allowed to use getline
8. Simple shell 0.2 +
9. Simple shell 0.4 +
	1. handle arguments for the built-in exit
	2. Usage: exit status, where status is an integer used to exit the shell
10. Implement the setenv and unsetenv builtin commands
11. Implement the builtin command cd:
	1. Changes the current directory of the process.
	2. Command syntax: cd [DIRECTORY]
	3. If no argument is given to cd the command must be interpreted like cd $HOME
	4. You have to handle the command cd -
	5. You have to update the environment variable PWD when you change directory
12. Handle the commands separator ;
13. Handle the && and || shell logical operators
14. Implement the alias builtin command. Usage: alias [name[='value'] ...]
	1. alias: Prints a list of all aliases, one per line, in the form name='value'
	2. alias name [name2 ...]: Prints the aliases name, name2, etc 1 per line, in the form name='value'
	3. alias name='value' [...]: Defines an alias for each name whose value is given. If name is already an alias, replaces its value with value
15. Handle variables replacement, Handle the $? variable, Handle the $$ variable
16. Handle comments (#)
17. Usage: simple_shell [filename]
	1. Your shell can take a file as a command line argument
	2. The file contains all the commands that your shell should run before exiting
	3. The file should contain one command per line
	4. In this mode, the shell should not print a prompt and should not read from stdin 

###How the Shell works

1. Displaying the prompt
2. Reading user input (fgets)
3. Parsing the command (tokenization)
	1. Tokenization is the process of breaking down a string into smaller components called tokens. It is used to split a user-input command into individual parts
4. Searching for commands
5. Creating a child process (fork)
6. Executing the command (EXECVE)
7. Wait for command completion (wait or waitpid)
8. Displaying output (write)
9. Returning to the prompt
10. Exiting the shell

###What I need

1. A header file that will contain functions prototypes
2. A function that displays the prompt
3. A function that read user input
4. A function that will execute commands
5. A main source code file that will be the entry paint
