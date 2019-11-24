/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davigarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 00:16:43 by davigarc          #+#    #+#             */
/*   Updated: 2019/11/23 20:18:40 by davigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		cw;
	char	**array;
	int		wl;
	int		x;
	int		y;

	if (!s)
		return (NULL);
	cw = ft_count_words(s, c);
	if (!(array = ft_stranew(cw)))
		return (NULL);
	x = -1;
	while (cw--)
	{
		while (*s == c)
			++s;
		wl = ft_word_len(s, c);
		if (!(array[++x] = ft_strnew(wl)))
			return (NULL);
		y = 0;
		while (wl--)
			array[x][y++] = *s++;
	}
	return (array);
}
