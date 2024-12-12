/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:14:50 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/10 11:34:11 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	if ((char)c == 0)
		return (str);
	return (NULL);
}

/*int	main(void)
{
	const char	*str = "Hello World!";
	int	c = 'W';

	char	*result = ft_strchr(str, c);
	if (result != NULL)
	{
		printf("Found '%c' at position: %ld\n", c, result -str);
	}
	else
	{
		printf("Character '%c' not found in the string.\n", c);
	}
	return (0);
}*/