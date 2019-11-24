/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davigarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 21:44:28 by davigarc          #+#    #+#             */
/*   Updated: 2019/11/23 20:15:50 by davigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		j;
	size_t	len;
	int		trun;

	i = 0;
	j = 0;
	trun = 0;
	while (dst[i])
		++i;
	len = i;
	if (i < dstsize)
	{
		while (dstsize - i - 1 && src[j])
		{
			dst[i] = src[j];
			++i;
			++j;
		}
		dst[i] = '\0';
	}
	(dstsize < len) ? (trun = len - dstsize) : 0;
	return (len + ft_strlen(src) - trun);
}
