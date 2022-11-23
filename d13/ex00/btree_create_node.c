/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:55:53 by vmustone          #+#    #+#             */
/*   Updated: 2022/07/15 21:19:41 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void	*item)
{
	t_btree	*result;

	result = malloc(sizeof(t_btree));
	if (result != 0)
	{
		result->left = 0;
		result->right = 0;
		result->item = item;
	}
	return (result);
}
