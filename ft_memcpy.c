/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gegrigor <gegrigor@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 21:45:56 by gegrigor          #+#    #+#             */
/*   Updated: 2026/01/28 21:51:56 by gegrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*s;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	dest = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n > 0)
	{
		*(dest++) = *(s++);
		n--;
	}
	return (dst);
}
