Formatted Output and the printf() function
One of the common task in every program is the printing of output. We use the output to request input from a user and later display the status/result, computations etc. In C programming there are several functions for printing formatted output.

In C programming language, printf() function is used to print the (“character, string, float, integer, octal and hexadecimal values”) onto the output screen.
We use printf() function with %d format specifier to display the value of an integer variable.
Similarly %c is used to display character, %f for float variable, %s for string variable, %lf for double and %x for hexadecimal variable.
To generate a newline,we use “\n” in C printf() statem

The printf() function is used to format and print a series of characters and values to the standard output.
Parameters:

Name	: Description
format	The format argument is a string containing C language conversion specifications. The conversion specification specifies the notation, alignment, significant digits, field width, and other aspects of the output format. To represent non-printing characters, such as newlines and tabs, the format string may contain escape characters. Below are the details.
argument-list	Depending on the format string, the function may require additional arguments.
Format strings specify notation, alignment, significant digits, field width, and other aspects of output formats. It can contain ordinary alphanumeric characters; along with escape characters, conversion specifiers, and other characters. Format specifications are made up of a the percent sign (%) followed by one of the following conversion operators, which determine what printf does with its arguments.

Conversion Specifiers:

Specifier	Description
%%	Print a single % character
%c	Convert an int to an unsigned character and print the resulting character
%d or %i	Print an int as a signed decimal number
%s  print a string held in %s
