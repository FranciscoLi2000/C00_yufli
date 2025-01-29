#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	char	letter;

	letter = 'e';
	ft_putchar(letter);
	ft_putchar('\n');
	return (0);
}
