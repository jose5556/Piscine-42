/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:24:24 by joseoliv          #+#    #+#             */
/*   Updated: 2024/01/28 22:18:21 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long long	ft_strlen(char *str)
{
	long long	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, int size)
{
	int	i;

	i = ft_strlen(dest);
	while (*src && i < size)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*free_str(char *src)
{
	src = (char *) malloc(sizeof(char) * 1);
	src[0] = '\0';
	return (src);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int			i;
	long long	lensep;
	long long	len;
	char		*result;

	i = 0;
	len = 0;
	result = NULL;
	if (size == 0)
		return (free_str(result));
	lensep = ft_strlen(sep);
	len = -lensep;
	while (i < size)
		len += ft_strlen(strs[i++]) + lensep;
	result = (char *) malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strncat(result, strs[i], len);
		ft_strncat(result, sep, len);
		i++;
	}
	return (result);
}
/*
int	main(int argc, char *argv[])
{
	char	*sep;
	char	*result;
	sep = "-----";
	if (argc == 1)
		return (1);
	result = ft_strjoin(argc - 1, &argv[1], sep);
	free(result);
	return (0);
}*/
