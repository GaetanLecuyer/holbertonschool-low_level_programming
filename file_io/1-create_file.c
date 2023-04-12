#include "main.h"
#include <string.h>

int create_file(const char *filename, char *text_content)
{
  int fd;
  char *buf;
  size_t count;

  if (text_content != NULL)
  {
    buf = text_content;
    count = strlen(buf);
  }

  fd = creat(filename, S_IRUSR | S_IWUSR);
  if (fd == -1)
    return (-1);
  write(fd, buf, count);

  return (1);
}
