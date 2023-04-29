#include "shell.h"


/**

 * _eputs - prints the input str

 * @str: the str to be printed

 *

 * Return: Nothing

 */

void _eputs(char *str)

{

        int d = 0;


        if (!str)

                return;

        while (str[d] != '\0')

        {

                _eputchar(str[d]);

                d++;

        }

}


/**

 * _eputchar - writes the character c to stderr

 * @c: The char to print

 *

 * Return: On success 1.

 * On error, -1 is returned, and errno is set appropriately.

 */

int _eputchar(char c)

{

        static int i;

        static char buf[WRITE_BUF_SIZE];


        if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)

        {

                write(2, buf, i);

                i = 0;

        }

        if (c != BUF_FLUSH)

                buf[i++] = c;

        return (1);

}


/**

 * _putfd - writes the character c to given fd


 * @fd: The filedescriptor to write to

 * @c: The character to print

 *

 * Return: On success 1.

 * On error, -1 is returned, and errno is set appropriately.

 */

int _putfd(char c, int fd)

{

        static int fi;

        static char buf[WRITE_BUF_SIZE];


        if (c == BUF_FLUSH || fi >= WRITE_BUF_SIZE)

        {

                write(fd, buf, fi);

                fi = 0;

        }

        if (c != BUF_FLUSH)

                buf[fi++] = c;

        return (1);

}


/**

 * _putsfd - prints an input string

 * @str: the string to be printed

 * @fd: the filedescriptor to write to

 *

 * Return: the number of chars put

 */

int _putsfd(char *str, int fd)

{

        int qi = 0;


        if (!str)

                return (0);

        while (*str)

        {

                qi += _putfd(*str++, fd);

        }

        return (i);

}
