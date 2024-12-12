/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:14:12 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/10 08:57:50 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * comprueba si un carácter es imprimible.
 */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int main()
{
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    if (ft_isprint(c) == 0) 
        printf("%c is not printable\n", c);
    else
        printf("%c it is printable\n", c);
    return (0);
}*/
