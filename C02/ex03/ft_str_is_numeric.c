/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 06:04:44 by joseoliv          #+#    #+#             */
/*   Updated: 2024/01/18 17:58:28 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			str++;
			continue ;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "12212122";

	ft_str_is_numeric(str);
}
*/
