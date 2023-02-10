/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-he <jdiaz-he@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:03:08 by jdiaz-he          #+#    #+#             */
/*   Updated: 2023/02/10 12:28:27 by jdiaz-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_bzero(void *dst, size_t n)
{
	while (n > 0)
	{
		*(unsigned char *) dst = '\0';
		dst++;
		n--;
	}
}
