/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 09:41:44 by abe               #+#    #+#             */
/*   Updated: 2020/01/14 10:05:45 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdio.h>

/*
**	Some tests to test the general functionality of the list functions.
*/

void	test_lst_new()
{
	t_list	*node;
	char	*content;

	content = (char *)malloc(5);
	strcpy(content, "test");
	node = lst_new(content);
	assert(node->next == NULL);
	assert(node->prev == NULL);
	assert(node->content == content);
	assert(strcmp((char *)node->content, "test") == 0);
	free(content);
	free(node);
}

void	test_lst_new_back()
{
	t_list	*node;
	t_list	*res;
	char	*content;
	char	*content2;

	content = (char *)malloc(5);
	strcpy(content, "test");
	node = lst_new_back(NULL, content);
	assert(node->next == NULL);
	assert(node->prev == NULL);
	assert(node->content == content);
	assert(strcmp((char *)node->content, "test") == 0);

	content2 = (char *)malloc(5);
	strcpy(content2, "tes2");
	res = lst_new_back(node, content2);
	assert(res == node->next);
	assert(res->prev == node);
	assert(res->content == content2);
	assert(strcmp((char *)res->content, "tes2") == 0);
	free(node);
	free(res);
	free(content);
	free(content2);
}

void	test_lst_new_front()
{
	t_list	*node
}

int		main(void)
{
	test_lst_new();
	test_lst_new_back();
	printf("Everything is fine!\n");
}
