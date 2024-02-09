#include <string.h>
#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
    write(fd, s, strlen(s));
    write(fd, "\n", 1);
}

int main(void)
{
    ft_putstr_fd("HOLA", 1);
}