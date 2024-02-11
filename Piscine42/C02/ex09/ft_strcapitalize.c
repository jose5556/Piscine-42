/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 01:13:08 by joseoliv          #+#    #+#             */
/*   Updated: 2024/01/18 22:40:38 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	upper_case(char *str, int i);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	if (str[j] >= 'a' && str[j] <= 'z')
		str[j] -= 32;
	j++;
	while (str[j])
	{
		while (str[j] == ' ')
		{
			j++;
		}
		upper_case(str, j);
		j++;
	}
	return (str);
}

char	upper_case(char *str, int j)
{
	if (str[j] >= 'a' && str[j] <= 'z')
	{
		if ((str[j - 1] <= '/') || 
			(str[j - 1] >= ':') && 
			(str[j - 1] < 'A') || 
			(str[j - 1] > 'Z' && str[j - 1] < 'a') || 
			(str[j - 1] > 'z'))
			return (str[j] -= 32);
		else
			return (str[j]);
	}
	else
		return (str[j]);
}
/*
int	main(void)
{
	char	str[] = "={}-+umavPEz  ?  o";
	ft_strcapitalize(str);
	return (0);
}*/
