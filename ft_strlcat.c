/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-he <jdiaz-he@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:29:13 by jdiaz-he          #+#    #+#             */
/*   Updated: 2023/02/10 12:48:12 by jdiaz-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_count;
	size_t	d_len;
	size_t	s_len;

	s_len = ft_strlen(src);
	if (size == 0)
		return (s_len + size);
	d_len = ft_strlen(dst);
	d_count = d_len;
	if (size <= d_len)
		return (s_len + size);
	while (*src != '\0' && size - d_count - 1 > 0)
	{
		dst[d_count] = *src++;
		d_count++;
	}
	dst[d_count] = '\0';
	return (d_len + s_len);
}
