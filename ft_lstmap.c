/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davigarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 21:07:16 by davigarc          #+#    #+#             */
/*   Updated: 2019/11/19 20:13:26 by davigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *trav;
	t_list *fresh;
	t_list *temp;

	trav = lst;
	if (!lst || !(temp = ft_lstnew(NULL, 0)))
		return (NULL);
	temp = f(trav);
	fresh = temp;
	while (trav->next)
	{
		trav = trav->next;
		temp->next = f(trav);
		temp = temp->next;
	}
	return (fresh);
}
