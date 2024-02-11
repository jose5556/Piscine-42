/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:02:46 by joseoliv          #+#    #+#             */
/*   Updated: 2024/01/21 05:57:26 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (*str)
	{
		while (str[i] == to_find[j])
		{
			if (!to_find[j + 1])
			{
				return (str);
			}
			i++;
			j++;
		}
		i = 0;
		j = 0;
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	char	_str[] = "um dois tres quatra cinco";
	char	_needle[] = "quatra";
	char	*str;
	char	*needle;

	str = _str;
	needle = _needle;

	ft_strstr(str, needle);	
}
*/
