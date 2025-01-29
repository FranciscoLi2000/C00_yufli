#include <unistd.h>
void	array_combn(int comb[], int n)
{
	int	i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = comb[i] + '0';
		write(1, &c, 1);
		i++;
	}
}
void	generate_comb(int comb[], int n, int pos, int start)
{
	int	i;

	if (pos == n)
	{
		array_combn(comb, n);
		if (comb[0] != 10 - n)
			write(1, ", ", 2);
		return ;
	}
	i = start;
	while (i <= 9)
	{
		comb[pos] = i;
		generate_comb(comb, n, pos + 1, i + 1);
		i++;
	}
}
void	ft_print_combn(int n)
{
	int	comb[n];

	generate_comb(comb, n, 0, 0);
}
#include <stdio.h>
int	main()
{
	int	n;

	printf("n: ");
	scanf("%d", &n);
	ft_print_combn(n);
	write(1, "\n", 1);
	return (0);
}
