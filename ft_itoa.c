/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:16:20 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/17 14:05:26 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_lenght(int n)
{
	size_t	lenght;

	lenght = 0;
	if (n <= 0)
		lenght = 1;
	while (n)
	{
		n /= 10;
		lenght++;
	}
	return (lenght);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	lenght;
	long	num;
	int		sign;

	num = n;
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		num = -num;
	}
	lenght = get_lenght(n);
	result = (char *)malloc(sizeof(char) * (lenght + 1));
	if (!result)
		return (NULL);
	result[lenght] = '\0';
	while (lenght > 0)
	{
		result[--lenght] = num % 10 + '0';
		num /= 10;
	}
	if (sign == -1)
		result[0] = '-';
	return (result);
}

/*int	main(void)
{
	int	n;

	n = 123456;
	printf("%s\n", ft_itoa(n));
	n = -123456;
	printf("%s\n", ft_itoa(n));
	n = 0;
	printf("%s\n", ft_itoa(n));
	return (0);
}*/
