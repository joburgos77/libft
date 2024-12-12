/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:15:16 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/10 09:00:42 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * devuelve la longitud de una cadena de texto.
 */

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*int main()
{
    char str[] = "Hello Campus 42!";
    int result = ft_strlen(str);
    printf("The lenght of the string is %d.\n", result);
    return (0);
}*/