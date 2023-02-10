/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-he <jdiaz-he@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:21:56 by jdiaz-he          #+#    #+#             */
/*   Updated: 2023/02/10 12:54:09 by jdiaz-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len_s1;
	int		i;
	int		j;

	if (!s1 || !set)
		return (0);
	len_s1 = ft_strlen(s1);
	len_s1--;
	while (len_s1 >= 0 && ft_strchr((char *) set, s1[len_s1]))
		len_s1--;
	i = 0;
	while (ft_strchr((char *) set, s1[i]) && len_s1 > 0)
		i++;
	j = 0;
	if (len_s1 >= i)
		str = malloc((len_s1 - i + 2) * sizeof(char));
	else
		str = malloc(1 * sizeof(char));
	if (!str)
		return (0);
	while (i <= len_s1)
		str[j++] = s1[i++];
	str[j] = 0;
	return (str);
}
