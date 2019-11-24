/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davigarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 17:28:53 by davigarc          #+#    #+#             */
/*   Updated: 2019/11/23 20:17:09 by davigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int		i;
	int		len;
	char	*freshi;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	if (!(freshi = ft_strnew(len)))
		return (0);
	while (len--)
	{
		freshi[i] = f(i, s[i]);
		++i;
	}
	return (freshi);
}
