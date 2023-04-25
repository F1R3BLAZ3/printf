#include <unistd.h>

/**
 *write_char - Writes a char.
 *@s: Character to be written.
 *Return: 1 on success and -1 on error.
 */

int _write(char s)
{
  return (write(1, &s, 1));
}
