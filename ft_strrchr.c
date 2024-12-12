/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:15:36 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/10 11:56:43 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	len;

	str = (char *)s;
	len = ft_strlen(s);
	while (len > 0)
	{
		if (str[len -1] == (char)c)
			return (&str[len - 1]);
		len--;
	}
	if ((str[len]) == (char)c)
		return (&str[len]);
	return (NULL);
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
