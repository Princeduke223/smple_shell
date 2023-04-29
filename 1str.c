#include "shell.h"


/**

 * _strcpy - copies a string

 * @dest:  destination

 * @src:  source

 *

 * Return: pointer to destination

 */

char *_strcpy(char *dest, char *src)

{

        int ii = 0;


        if (dest == src || src == 0)

                return (dest);

        while (src[ii])

        {

                dest[ii] = src[ii];

                ii++;

        }

        dest[ii] = 0;

        return (dest);

}


/**

 * _strdup - duplicates a string

 * @str: the str to be duplicated

 * Return: pointer to the duplicated str

 */

char *_strdup(const char *str)

{

        int len = 0;

        char *ret;


        if (str == NULL)

                return (NULL);

        while (*str++)

                len++;

        ret = malloc(sizeof(char) * (len+ 1));

        if (!ret)

                return (NULL);

        for (len++; len--;)

                ret[len] = *--str;

        return (ret);

}


/**

 * _puts - prints an input string

 * @str: the str that will  be printed

 *

 * Return: Nothing

 */

void _puts(char *str)

{

        int ij = 0;


        if (!str)

                return;

        while (str[ij] != '\0')

        {

                _putchar(str[ij]);

                i++;

        }

}


/**

 * _putchar - writes the char c to stdout

 * @c: The char to print

 *

 * Return: On success 1.

 * On error, -1 is returned, and errno is set appropriately.

 */

int _putchar(char c)

{

        static int i;

        static char buf[WRITE_BUF_SIZE];


        if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)

        {

                write(1, buf, i);

                i = 0;

        }

        if (c != BUF_FLUSH)

                buf[i++] = c;

        return (1);

}
