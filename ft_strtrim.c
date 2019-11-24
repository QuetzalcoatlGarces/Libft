/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davigarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:50:35 by davigarc          #+#    #+#             */
/*   Updated: 2019/11/23 20:20:05 by davigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*trimed;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		++i;
	j = ft_strlen(&s[i]) - 1;
	if (s[i])
	{
		while (s[j + i] == ' ' || s[j + i] == '\n' || s[j + i] == '\t')
			--j;
	}
	if (!(trimed = ft_strnew(j + 1)))
		return (NULL);
	ft_strncpy(trimed, (s + i), (j + 1));
	return (trimed);
}
