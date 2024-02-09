#include <unistd.h>
#include <string.h>

void ft_putendl_fd(char *s, int fd)
{
    write(fd, s, strlen(s));
    write(fd, "\n", 1);
}

int main(void)
{
    ft_putendl_fd("ANA", 1);
}