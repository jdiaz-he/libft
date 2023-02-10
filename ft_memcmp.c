/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-he <jdiaz-he@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:40:53 by jdiaz-he          #+#    #+#             */
/*   Updated: 2023/02/10 12:40:23 by jdiaz-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{	
	while (n > 0)
	{
		if (*(unsigned char *) str1 != \
			*(unsigned char *) str2)
			return (*(unsigned char *) str1 - \
				*(unsigned char *) str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
