#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0 || (power == 0 && nb == 0))
		       return (0);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	printf("%d\n", result);
	return (result);
}

int	main(void)
{
	ft_iterative_power(5, 5);
}
