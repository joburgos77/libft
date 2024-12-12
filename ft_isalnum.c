/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:13:53 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/09 13:43:39 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * comprueba si el carácter es alfanumérico.
 */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*int main()
{
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    if (ft_isalnum(c) == 0)
        printf("%c is not an alphanumeric character\n", c);
    else
        printf("%c is an alphanumeric character\n", c);
    return (0);
}*/