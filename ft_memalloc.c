/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davigarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 22:37:23 by davigarc          #+#    #+#             */
/*   Updated: 2019/11/10 22:46:19 by davigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *fresh;

	fresh = NULL;
	if (!size)
		;
	else
	{
		if (!(fresh = (char *)malloc(sizeof(char) * size)))
			return (NULL);
		while (size)
			fresh[--size] = 0;
	}
	return ((void *)fresh);
}
