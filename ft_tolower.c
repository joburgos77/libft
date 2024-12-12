/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:15:41 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/10 11:15:40 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (c + 32);
	else
		return (c);
}

/*int	main(void)
{
	int		i;
	char	c[] = "HELLO WORLD!";

	i = 0;
	while (c[i])
	{
		c[i] = ft_tolower(c[i]);
		i++;
	}
	printf("%s", c);
	return (0);
}*/
