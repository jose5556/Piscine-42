/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:10:23 by joseoliv          #+#    #+#             */
/*   Updated: 2024/01/16 07:25:00 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*first;

	first = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (first);
}
/*
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	printf ("%s", dest);
	return (dest);
}

int main()
{
    char src[] = "Hello, World!";
    char dest[30];

    ft_strcpy(dest, src);

    return (0);
}
//printf ("%s", dest);
//dicionar dest[i] != '\0';
*/
