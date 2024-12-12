/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:14:06 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/10 08:53:56 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * comprueba si un carácter es un dígito decimal.
 */

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	else
		return (1);
}

/*int main()
{
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    if (ft_isdigit(c) == 0) 
        printf("%c is not a digit", c);
    else
        printf("%c is a digit", c);
    return (0);
}*/