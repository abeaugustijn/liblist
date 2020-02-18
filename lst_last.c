/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_last.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:27:02 by aaugusti          #+#    #+#             */
/*   Updated: 2020/02/18 15:27:57 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "liblist.h"


/*
**	Get the last element in a list.
**
**	@param {t_list *} list
**
**	@return {t_list *}
*/

t_list	*lst_last(t_list *list)
{
	while (list)
		list = list->next;
	return (list);
}