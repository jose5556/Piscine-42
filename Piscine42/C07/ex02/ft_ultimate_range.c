/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:43:49 by joseoliv          #+#    #+#             */
/*   Updated: 2024/01/27 17:51:02 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *) malloc(sizeof(int) * (max - min));
	if (!*range)
	{
		return (-1);
	}
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int	*arr;

	ft_ultimate_range(&arr, 48, 57);
	while (*arr)
	{
		printf("%i", *arr);
		printf("%c", ' ');
		arr += 1;
	}
}*/
