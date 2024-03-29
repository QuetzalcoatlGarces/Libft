/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davigarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 01:39:41 by davigarc          #+#    #+#             */
/*   Updated: 2019/11/17 02:10:19 by davigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_len(char const *str, char e)
{
	int len;

	len = 0;
	while (*str && *str != e)
	{
		++len;
		++str;
	}
	return (len);
}
