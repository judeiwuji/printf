% MS(1) 1
% Jude Iwuji and Ifiok Ekott
# NAME
C - printf

#SYNOPOSIS

#DESCRIPTION
    An alternative to the famous `printf` function from `#include <stdio.h>` 
    Handles a lot of specifier
    `%c`    prints character
    `%s`    prints string
    `%d`    prints an integer
    `%b`    prints binary form of intger
    `%i`    prints integer
    `%S`    prints custom conversion specifier
    `%r`    prints the reversed string 
    `%R`    prints the rot13'ed string
    `%x`
    `%p`
    `%X`
    `%o`
    `%u`

#OPTIONS

#EXAMPLES
    `_printf("Unsigned octal:[%o]\n", ui);` -> Unsigned octal:[20000001777], 
    `_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);` -> Unsigned hexadecimal:[800003ff, 800003FF],
    `_printf("Negative:[%d]\n", -762534);` -> Negative:[-762534],
#EXIT VALUES
    The 
#BUGS
#AUTHOR
    Jude Iwuji <judeiwuji@gmail.com> and Ifiok Ekott <ekottifiok@gmail.com>
#COPYRIGHT