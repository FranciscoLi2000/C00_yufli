#include <unistd.h>

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = 48;
	while (x <= 55)
	{
		y = x + 1;
		while (y <= 56)
		{
			z = y + 1;
			while (z <= 57)
			{
				write(1, &x, 1);
				write(1, &y, 1);
				write(1, &z, 1);
				if (x != 55 || y != 56 || z != 57)
					write(1, ", ", 2);
				z++;
			}
			y++;
		}
		x++;
	}
}
int	main()
{
	ft_print_comb();
	write(1, "\n", 1);
	return (0);
}
