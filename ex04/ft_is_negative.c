#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

#include <stdio.h>
int	main()
{
	int	n;

	printf("Number: ");
	scanf("%d", &n);
	ft_is_negative(n);
	write(1, "\n", 1);
	return (0);
}
