/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lst_destroy.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/29 19:32:25 by aaugusti      #+#   #+#                  */
/*   Updated: 2020/04/29 19:35:11 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"
#include <stdlib.h>

/*
**	Free the whole list. This frees all of the nodes, and the content using
**	the given function.
**
**	@param {t_list *} node - the start of the list
**	@param {void (*)(void *)} func - a pointer to the function to call with
**		every nodes content as argument
*/

void	lst_destroy(t_list *node, void (*func)(void *))
{
	t_list	*tmp;

	while (node)
	{
		func(node->content);
		tmp = node->next;
		free(node);
		node = tmp;
	}
}
