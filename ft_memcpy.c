/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-he <jdiaz-he@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:03:42 by jdiaz-he          #+#    #+#             */
/*   Updated: 2023/02/10 12:40:31 by jdiaz-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;

	count = n;
	if (dest || src)
	{
		while (count > 0)
		{
			*(unsigned char *) dest = *(const unsigned char *) src;
			dest++;
			src++;
			count--;
		}
	}
	return (dest - n);
}
