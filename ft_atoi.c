/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:38:26 by prerfil           #+#    #+#             */
/*   Updated: 2024/12/12 13:53:21 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	sum;
	int	sign;
	int	found;

	sum = 0;
	sign = 1;
	found = 1;
	while (*str == ' ' || *str == '\t'
		|| *str == '\n' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str = '-' || *str = '+')
		str++;
	while (*str && found)
	{
		if (*str >= '0' && *str <= '9')
			sum = sum * 10 + *str - '0';
		else	found = 0;
		str++;
	}
}

/*int main(void)
{
    char    str1[] = "123";
    char    str2[] = "-123";
    char    str3[] = "  +123";
    char    str4[] = "  -123 with text";
    char    str5[] = "  123 with text";

    printf("String:'%s' -> Integer: %d\n", str1, ft_atoi(str1));
    printf("String:'%s' -> Integer: %d\n", str2, ft_atoi(str2)); 
    printf("String:'%s' -> Integer: %d\n", str3, ft_atoi(str3)); 
    printf("String:'%s' -> Integer: %d\n", str4, ft_atoi(str4)); 
    printf("String:'%s' -> Integer: %d\n", str5, ft_atoi(str5));

    return(0);
}*/