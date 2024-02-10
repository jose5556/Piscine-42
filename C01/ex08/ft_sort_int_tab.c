/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:54:48 by joseoliv          #+#    #+#             */
/*   Updated: 2024/01/14 15:07:41 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	change_me;

	count = 0;
	while (count < size - 1)
	{
		if (tab[count] > tab[count + 1])
		{
			change_me = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = change_me;
			count = -1;
		}
		count++;
	}
}
/*
int	main(void)
{
	int	nums[6] = {1,5,3,4,2,5};
	int	size = 6;
	int	*ptr;

	ptr = nums;
	ft_sort_int_tab(ptr, size);
}
for (int i = 0; i < size - 1; i++)
        {
                printf("%d", tab[i]);
        }
*/
