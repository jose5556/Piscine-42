/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 01:36:03 by joseoliv          #+#    #+#             */
/*   Updated: 2024/01/12 01:59:54 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a;
	int b;
	int result_div;
	int result_mod;

	a = 3;
	b = 7;

	ft_div_mod(a, b, &result_div, &result_mod);

	write(1, &result_div, sizeof(int));
	write(1, "\n", 1);
	write(1, &result_mod, sizeof(int));
	write(1, "\n", 1);
	return (0);
}*/
