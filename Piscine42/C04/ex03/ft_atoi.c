/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 23:34:21 by joseoliv          #+#    #+#             */
/*   Updated: 2024/01/25 19:12:52 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	minus_plus;
	int	i;
	int	result;

	i = 0;
	minus_plus = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus_plus *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	printf("%d", result * minus_plus);
	return (result * minus_plus);
}

int	main(void)
{
	char	str[] = "  ---++1234kk567";
	char	*ptr;

	ptr = str;
	ft_atoi(ptr);
}
