/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:29:28 by vmustone          #+#    #+#             */
/*   Updated: 2022/07/16 12:56:21 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void  (*applyf) (void*));
void	add(void *item)
{
	int i;
	i = *((int*)item);
	i++;
	*((int*)item) = i;
}
void	print(void *item)
{
	printf("%i\n", *((int*)item));
}

int main (void)
{
	t_btree *root = malloc(sizeof(t_btree));
	t_btree *left = malloc(sizeof(t_btree));
	t_btree *right = malloc(sizeof(t_btree));	

	int root_item = 2;
	int left_item = 4;
	int right_item = 6;

	int *proot_item = &root_item;
	int *pleft_item = &left_item;
	int *pright_item = &right_item;

	root->item = proot_item;
	root->left = left;
	root->right = right;

	left->item = pleft_item;
	left->left = NULL;
	left->right = NULL;

	right->item = pright_item;
	right->left = NULL;
	right->right = NULL;

	btree_apply_prefix(root, add);
	btree_apply_prefix(root, print);
	return (0);
}
