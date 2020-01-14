/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_reverse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 09:22:32 by abe               #+#    #+#             */
/*   Updated: 2020/01/14 09:31:10 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

/*
**	Reverse a linked list.
**
**	@param {t_list **} node - a pointer to the start of the list. The pointer
**		to the new beginning of the list will be stored here.
*/

void	lst_reverse(t_list **node)
{
	t_list	*node_cpy;
	t_list	*tmp_next;

	if (!node)
		return ;
	if (!*node)
		return ;
	node_cpy = *node;
	while (node_cpy)
	{
		tmp_next = node_cpy->next;
		node_cpy->next = node_cpy->prev;
		node_cpy->prev = tmp_next;
		node_cpy = tmp_next;
		if (!node_cpy->next)
			*node = node_cpy;
	}
}
