/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:07:26 by joseoliv          #+#    #+#             */
/*   Updated: 2024/01/24 15:32:46 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			i++;
		}
		while (i > 1)
		{
			while (argv[i - 1][j])
			{
				write (1, &argv[i - 1][j], 1);
				j++;
			}
			write (1, "\n", 1);
			i--;
			j = 0;
		}
		return (0);
	}
}
