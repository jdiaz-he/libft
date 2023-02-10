/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-he <jdiaz-he@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 02:17:10 by jdiaz-he          #+#    #+#             */
/*   Updated: 2023/02/10 12:43:31 by jdiaz-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_mem;
	char	*s_mem_r;

	s_mem = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	s_mem_r = s_mem;
	if (!s_mem)
		return (0);
	while (*s)
	{
		*s_mem++ = *s++;
	}
	*s_mem = '\0';
	return (s_mem_r);
}
