/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:43:12 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/10 08:48:53 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * comprueba si un carácter es alfabético.
 */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*int main()
{
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    if (ft_isalpha(c) == 0)
        printf("%c is not an alphabet\n", c);
    else
        printf("%c is an alphabet\n", c);
    
    return (0);
}*/