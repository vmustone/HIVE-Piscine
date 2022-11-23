/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:54:03 by vmustone          #+#    #+#             */
/*   Updated: 2022/07/16 12:56:14 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf) (void *))
{
	if (root)
	{
		applyf(root->item);
		if (root->left)
			btree_apply_prefix(root->left, (*applyf));
		if (root->right)
			btree_apply_prefix(root->right, (*applyf));
	}
}
