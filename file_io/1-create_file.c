#include "main.h"


int _strlen(char *s)
{
  int a = 0;

  while (*s++)
    a++;
  return (a);
}
int create_file(const char *filename, char *text_content)
{
  int fd;
  ssize_t len;
  
  if (filename == NULL)
  {
    return (-1);
  }

  fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | 0644);

  if (fd == -1)
  {
    return (-1);
  }

  if (text_content != NULL)
  {
    len = write(fd, text_content,_strlen(text_content));
    if (len == -1)
    {
      close(fd);
      return (-1);
    }
  }
  close(fd);
  return (1);
}
