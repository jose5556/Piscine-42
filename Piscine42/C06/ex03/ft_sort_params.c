/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:02:16 by joseoliv          #+#    #+#             */
/*   Updated: 2024/01/24 00:39:37 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue ;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

void	swap(char **s1, char **s2)
{
	char	*new_str;

	new_str = *s2;
	*s2 = *s1;
	*s1 = new_str;
}

void	ft_putchar(char **c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (c[i])
	{
		while (c[i][j])
		{
			write(1, &c[i][j], 1);
			j++;
		}
		j = 0;
		i++;
		write(1, "\n", 1);
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	result;

	i = 1;
	j = 0;
	if (argc > 1)
	{
		while (argv[i + 1])
		{
			result = ft_strcmp(argv[i], argv[i + 1]);
			if (result > 0)
			{
				swap(&argv[i], &argv[i + 1]);
				i = 1;
				continue ;
			}
			i++;
		}
		i = 1;
	}
	ft_putchar(&argv[i]);
}
