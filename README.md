# A project from the first ring of the core - ft_printf

The project is about recoding the printf() function from libc. The key to a successful ft_printf is a well-structured and extensible code.

## The following conversions must be implemented

|  Identifier   |         Description                                       |
| :------------:|-----------------------------------------------------------|
| %c            | Prints a single character.                                |
| %s            | Prints a string.                                          |
| %p            | Prints void *pointer in hexadecimal format.               | 
| %d            | Prints a decimal (base 10) number.                        |
| %i            | Prints an integer (base 10).                              |
| %u            | Prints an unsigned decimal (base 10) number.              |
| %x            | Prints a number in hexadecimal (base 16) lowercase format.|                  
| %X            | Prints a number in hexadecimal (base 16) uppercase format.| 
| %%            | Prints a percent sign.                                    |

# Testernette

Git clone the current repository.

     git clone https://github.com/lspohle/ft_printf.git
       
Replace the content of the directory [printf](https://github.com/lspohle/ft_printf/tree/main/printf) with your work.
  * libft (you may replace the given library by your own library)
  * Makefile
  * ft_printf.h
  * *.c

Enter the following command in order to create an alias for [testernette_printf](https://github.com/lspohle/ft_printf/tree/main/testernette).

     bash testernette_printf.sh
     
Run testernette by using the alias you created.

     testernette_printf
If you prefer not having an alias for testernette, enter directly the following command to run testernette.

     make -s re
