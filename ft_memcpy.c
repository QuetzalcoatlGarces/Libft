/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davigarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 21:14:46 by davigarc          #+#    #+#             */
/*   Updated: 2019/11/10 23:25:40 by davigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *ptr;
	char *ptr2;

	if (n == 0 || dst == src)
		return (dst);
	ptr = (char *)dst;
	ptr2 = (char *)src;
	while (n--)
	{
		*ptr = *ptr2;
		++ptr;
		++ptr2;
	}
	return (dst);
}
