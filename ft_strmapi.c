/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:07:48 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/18 08:53:47 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			len;
	int				i;

	i = 0;
	len = ft_strlen(s);
	str = malloc(len +1);
	if (str == 0)
		return (0);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[len] = '\0';
	return (str);
}

/*int	main(void)
{
	char	*s;
	char	*result;

	s = "Hello, world!";
	result = ft_strmapi(s, &ft_toupper);
	if (result)
	{
		printf("Mapped string: '%s\n", result);
	}
	else
	{
		printf("Failed to allocate memory for mapped string.\n");
	}
	return (0);
}*/
