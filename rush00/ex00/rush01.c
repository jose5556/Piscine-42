/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:44:31 by joseoliv          #+#    #+#             */
/*   Updated: 2024/01/18 15:16:35 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_middle_line(int x, int y, char side);

void	print_border_line(int x, char first, char middle, char last);

void	rush(int x, int y)
{
	if (y <= 0 || x <= 0)
		write (1, "ERROR! PLEASE, INSERT A VALID NUMBER\n", 38);
	else if (y == 1)
	{
		print_border_line(x, '/', '*', '\\');
		print_middle_line(x, y, '*');
	}
	else if (y >= 2)
	{
		print_border_line (x, '/', '*', '\\');
		print_middle_line (x, y, '*');
		print_border_line (x, '\\', '*', '/');
	}
}

void	print_middle_line(int x, int y, char side)
{
	int	space;
	space = 0;
	while (y-- > 2)
	{
		if (x > 1)
		{
			ft_putchar(side);
		}
		while (x > space++)
		{
			ft_putchar(' ');
			space = 2;
		}
		ft_putchar(side);
		ft_putchar('\n');
	}
}

void	print_border_line(int x, char first, char middle, char last)
{
	if (x-- >= 1)
	{
		ft_putchar(first);
		while (x-- >= 2)
			ft_putchar(middle);
		if (x == 0)
			ft_putchar(last);
		ft_putchar('\n');
	}
}
