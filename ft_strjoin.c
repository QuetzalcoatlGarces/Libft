/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davigarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 00:31:25 by davigarc          #+#    #+#             */
/*   Updated: 2019/11/23 20:14:32 by davigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*strcon;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	if (!(strcon = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	while (s1[i])
	{
		strcon[i] = s1[i];
		++i;
	}
	while (s2[j])
	{
		strcon[i] = s2[j];
		++i;
		++j;
	}
	return (strcon);
}
