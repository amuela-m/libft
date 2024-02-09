#include <string.h>
#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void ft_putnbr_fd(int nb, int fd) 
{
	if (nb < 0)
	{
        ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar_fd('0' + nb, fd);
}

int main(void)
{
    ft_putnbr_fd(-52, 1);
}