/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-he <jdiaz-he@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:14:24 by jdiaz-he          #+#    #+#             */
/*   Updated: 2023/02/10 12:40:47 by jdiaz-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	count;

	if ((long int *) dest > (long int *) src)
	{
		count = n;
		while (count-- > 0)
			*(unsigned char *)(dest + count) = *(unsigned char *)(src + count);
	}
	if ((long int *) dest < (long int *) src)
	{
		count = 0;
		while (count < n)
		{
			*(unsigned char *)(dest + count) = *(unsigned char *)(src + count);
			count++;
		}
	}
	return (dest);
}
