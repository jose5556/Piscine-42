/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 04:10:26 by joseoliv          #+#    #+#             */
/*   Updated: 2024/01/15 17:00:46 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	l;
	int	r;
	int	var;

	l = 0;
	r = size - 1;
	while (l <= r)
	{
		var = tab[l];
		tab[l] = tab[r];
		tab[r] = var;
		l++;
		r--;
	}
}
