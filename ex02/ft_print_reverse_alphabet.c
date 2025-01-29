#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 122;
	while (letter >= 97)
	{
		write(1, &letter, 1);
		letter--;
	}
}
int	main()
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	return (0);
}
