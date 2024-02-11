/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 00:36:11 by joseoliv          #+#    #+#             */
/*   Updated: 2024/01/12 00:41:05 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	a_to_b;
	int	b_to_a;

	a_to_b = *a;
	b_to_a = *b;
	*a = b_to_a;
	*b = a_to_b;
}
