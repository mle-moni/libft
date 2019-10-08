/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:22:38 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/07 17:32:13 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		word_count(const char *str, char c)
{
	int i;
	int word;
	int num_word;

	i = 0;
	word = 0;
	num_word = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			if (word)
			{
				num_word++;
				word = 0;
			}
		}
		else
		{
			word++;
		}
		i++;
	}
	return (word ? num_word + 1 : num_word);
}

char	*dupn(const char *str, int n)
{
	int		i;
	char	*new;

	new = malloc((n + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (str[i] && i < n)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

void	process(char **final, const char *str, char c, int *index)
{
	int i;
	int is_word;

	i = 0;
	is_word = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			if (is_word)
			{
				final[*index] = dupn(str + i - is_word, is_word);
				(*index)++;
				is_word = 0;
			}
		}
		else
			is_word++;
		i++;
	}
	if (is_word)
		final[(*index)++] = dupn(str + i - is_word, is_word);
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	int		words;
	int		index;

	words = word_count(s, c);
	index = 0;
	final = malloc((words + 1) * sizeof(char*));
	if (!final)
		return (NULL);
	process(final, s, c, &index);
	final[index] = 0;
	return (final);
}
