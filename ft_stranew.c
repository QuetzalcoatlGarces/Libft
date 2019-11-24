/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stranew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davigarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 21:42:53 by davigarc          #+#    #+#             */
/*   Updated: 2019/11/18 23:09:45 by davigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_stranew(size_t size)
{
	char	**anew;

	if (!(anew = (char **)malloc(sizeof(char *) * size + 1)))
		return (NULL);
	anew[size] = NULL;
	while (size--)
		anew[size] = NULL;
	return (anew);
}
