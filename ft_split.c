/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:37:52 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/18 10:42:45 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_all(char **array, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static size_t	count_words(const char *str, char delimiter)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != delimiter && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*str == delimiter)
		{
			in_word = 0;
		}
		str++;
	}
	return (count);
}

static char	*get_next_word(const char **str, char delimiter)
{
	const char	*start;
	size_t		length;
	char		*word;

	while (**str && **str == delimiter)
	{
		(*str)++;
	}
	start = *str;
	while (**str && **str != delimiter)
	{
		(*str)++;
	}
	length = *str - start;
	word = (char *)malloc(length + 1);
	if (word)
	{
		ft_strlcpy(word, start, length + 1);
	}
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	word_count;
	size_t	i;
	char	*word;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		word = get_next_word(&s, c);
		if (!word)
		{
			ft_free_all(result, i);
			return (NULL);
		}
		result[i] = word;
		i++;
	}
	result[i] = NULL;
	return (result);
}

/*int	main(void)
{
	const char	*str = "Hello world this is ft_split";
	char		delimiter;

	delimiter = ' ';
	printf("Input string: \"%s\"\n", str);
	printf("Delimiter: '%c'\n", delimiter);
	char **result = ft_split(str, delimiter);
	if (!result)
	{
		printf("Memory allocation failed or invalid input.\n");
		return (1);
	}
	printf("Split  result: \n");
	size_t	i = 0;
	while (result[i])
	{
		printf("Word %zu: \"%s\"\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
