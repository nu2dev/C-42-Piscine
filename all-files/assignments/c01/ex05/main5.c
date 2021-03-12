#include <unistd.h>

void ft_putstr(char *str);

int main(void)
{
	ft_putstr("start");
	write(1, "\n\n", 2);
	

	ft_putstr("\0");
	write(1, "\n\n", 2);


	ft_putstr("0123");
	write(1, "\n\n", 2);

	ft_putstr("\n");
	write(1, "\n\n", 2);
	
	ft_putstr("");
	write(1, "\n\n", 2);
	



	return (0);
}

