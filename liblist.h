/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   liblist.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abe <marvin@42.fr>                           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/13 21:08:19 by abe           #+#   #+#                  */
/*   Updated: 2020/04/29 19:35:26 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBLIST_H
# define LIBLIST_H
#include <stddef.h>

typedef struct s_list	t_list;

struct					s_list
{
	void	*content;
	t_list	*next;
	t_list	*prev;
};

size_t	lst_size(t_list *node);
t_list	*lst_find_parent(void *to_find, t_list *list);
t_list	*lst_last(t_list *list);
t_list	*lst_new(void *content);
t_list	*lst_new_back(t_list **node, void *content);
void	lst_destroy(t_list *node, void (*func)(void *));
void	lst_foreach(t_list *node, void (*func)(void *));
void	lst_new_front(t_list **node, void *content);
void	lst_remove(t_list *node, void (*free_func)(void *));
void	lst_reverse(t_list **node);

#endif
