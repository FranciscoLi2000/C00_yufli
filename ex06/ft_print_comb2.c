#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_comb2(void)
{
	char	array[7];
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			array[0] = x / 10 + '0';
			array[1] = x % 10 + '0';
			array[2] = ' ';
			array[3] = y / 10 + '0';
			array[4] = y % 10 + '0';
			array[5] = ',';
			array[6] = ' ';
			write(1, array, 7);
			y++;
		}
		x++;
	}
}
int	main()
{
	ft_print_comb2();
	write(1, "\n", 1);
	return (0);
}
