/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:02:25 by joseoliv          #+#    #+#             */
/*   Updated: 2024/01/24 20:08:40 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*new_src;

	i = 0;
	new_src = malloc(sizeof(char) * (ft_strlen(src) + 1));
	while (src[i])
	{
		new_src[i] = src[i];
		i++;
	}
	new_src[i] = '\0';
	return (new_src);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_strdup(argv[1]);
		return (0);
	}
	return (1);
}*/
