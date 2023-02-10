/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-he <jdiaz-he@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:11:27 by jdiaz-he          #+#    #+#             */
/*   Updated: 2023/02/10 12:50:37 by jdiaz-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;
	int		r;

	r = 0;
	count = 0;
	while ((s1[count] != 0 || s2[count] != 0)
		&& count < n)
	{
		r = (unsigned char) s1[count] - (unsigned char) s2[count];
		if (r != 0)
			break ;
		count++;
	}
	return (r);
}
