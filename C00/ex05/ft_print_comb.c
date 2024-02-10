/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:58:14 by joseoliv          #+#    #+#             */
/*   Updated: 2024/01/13 21:40:48 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_nums(char i, char j, char k);

void	write_nums(char i, char j, char k)
{
	write (1, &i, 1);
	write (1, &j, 1);
	write (1, &k, 1);
	if (i + j + k < 168)
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				write_nums(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
	write (1, &"\n", 1);
}


int	main(void)
{
	ft_print_comb();
}

