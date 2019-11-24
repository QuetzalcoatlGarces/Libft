/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davigarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 23:18:26 by davigarc          #+#    #+#             */
/*   Updated: 2019/11/10 23:17:34 by davigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t h;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	j = 0;
	h = 0;
	while (haystack[i] && len > i)
	{
		while (haystack[i] && haystack[i] != needle[j] && len > i)
			++i;
		while (needle[j] && (haystack[i] == needle[j] && len > i))
		{
			++i;
			++j;
		}
		if (!needle[j])
			return ((char *)&haystack[i - j]);
		j = 0;
		++h;
		i = h;
	}
	return (NULL);
}
