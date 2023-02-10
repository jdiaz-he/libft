/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-he <jdiaz-he@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:39:07 by jdiaz-he          #+#    #+#             */
/*   Updated: 2023/02/10 12:40:55 by jdiaz-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	*ft_memset(void *dst, int c, size_t n)
{	
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *) dst)[i] = (unsigned char) c;
		i++;
	}
	return (dst);
}
