/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:11:02 by joseoliv          #+#    #+#             */
/*   Updated: 2024/01/27 16:56:26 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	result = (int *) malloc(sizeof(int) * (max - min));
	if (!result)
	{
		return (0);
	}
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}
/*
int	main(void)
{
	int	min = 20;
	int	max = 50;

	ft_range(min, max);
}*/
