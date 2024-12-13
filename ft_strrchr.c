/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:15:36 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/13 14:58:43 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

/*int	main(void)
{
	const char	*str = "Hello World!";
	int	c = 'W';

	char	*result = ft_strrchr(str, c);
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
