/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:14:01 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/10 11:41:29 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * comprueba si un carácter pertenece al ASCII.
 */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int main()
{
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    if (ft_isascii(c) == 0)
        printf("%c is not an ASCII character\n", c);
    else
        printf("%c is an ASCII character\n", c);
    
    return (0);
}*/