/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 08:33:11 by joseoliv          #+#    #+#             */
/*   Updated: 2024/01/16 08:39:57 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str >= ' ' && *str <= '~')
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
