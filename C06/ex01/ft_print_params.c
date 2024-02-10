/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:21:31 by joseoliv          #+#    #+#             */
/*   Updated: 2024/01/24 18:47:21 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	if (argc == 1)
		return (1);
	while (argv[i])
	{
		while (argv[i][j])
		{
			write (1, &argv[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		j = 0;
		i++;
	}
	return (0);
}
