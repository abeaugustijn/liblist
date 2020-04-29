/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lst_find_parent.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/18 15:14:13 by aaugusti      #+#   #+#                  */
/*   Updated: 2020/02/18 15:16:59 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

/*
**	Find the parent of a certain content in a list. This function will return
**	the pointer to the first node which contains the same content pointer as
**	given. Will return NULL if nothing is found.
**
**	@param {void *} to_find
**	@param {t_list *} list
**
**	@return {t_list *}
*/

t_list	*lst_find_parent(void *to_find, t_list *list)
{
	t_list	*current;

	current = list;
	while (current)
	{
		if (current->content == to_find)
			return (current);
		current = current->next;
	}
	return (NULL);
}

