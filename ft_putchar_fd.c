#include <unistd.h>

void ft_putchar_fd(int c, int fd)
{
    write(fd, &c, 1);
}

int main(void)
{
    ft_putchar_fd('h', 1);
}