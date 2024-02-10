/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 01:22:55 by joseoliv          #+#    #+#             */
/*   Updated: 2024/01/18 17:57:45 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	max;

	max = n;
	i = 0;
	while (*src && i < max)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	while (i < max)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char src[] = "Hello, World!";
	char dest[30];

	ft_strncpy(dest, src, 30);
	return (0);
}
*/
