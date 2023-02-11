/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-he <jdiaz-he@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:44:49 by jdiaz-he          #+#    #+#             */
/*   Updated: 2023/02/11 08:22:05 by jdiaz-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordc(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] && i <= ft_strlen(s)-1)
	{
		if (s[i] != c)
		{	
			count++;
			while (s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static void	*ft_free(char **split, int i)
{
	i--;
	if (!split)
		return (NULL);
	while (split[i] && i >= 0)
	{
		free(split[i]);
		i--;
	}
	free(split);
	return (NULL);
}

static char	*ft_splitword(char *s, char c, size_t *j)
{
	int		len;
	char	*word;
	int		i;

	i = *j;
	len = 0;
	while (s[*j] != c && s[*j])
	{
		len++;
		(*j)++;
		i++;
	}
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	word[len] = 0;
	len--;
	i--;
	while (len >= 0)
	{
		word[len--] = s[i--];
	}
	return (word);
}

static	char	**ft_splitgen(char **split, char *s, char c, size_t wordc)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < wordc)
	{
		if (s[j] != c && s[j])
		{
			split[i] = ft_splitword(s, c, &j);
			if (!split[i])
				return (ft_free(split, i));
		}
		else
		{
			j++;
			i--;
		}
		i++;
	}
	split[i] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	wordc;

	if (!s)
		return (0);
	wordc = ft_wordc(s, c);
	split = malloc((wordc + 1) * sizeof(char *));
	if (!split)
		return (0);
	split = ft_splitgen(split, (char *) s, c, wordc);
	return (split);
}
