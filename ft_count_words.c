/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davigarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 21:22:02 by davigarc          #+#    #+#             */
/*   Updated: 2019/11/10 21:28:51 by davigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *str, char d)
{
	int t;
	int words;

	words = 0;
	while (*str == d)
		++str;
	while (*str)
	{
		t = 1;
		while (*str && *str != d)
		{
			(t) ? ++words : 0;
			t = 0;
			++str;
		}
		while (*str == d)
			++str;
	}
	return (words);
}
