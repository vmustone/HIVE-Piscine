/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:15:13 by vmustone          #+#    #+#             */
/*   Updated: 2022/07/11 19:47:50 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f) (int))
{
	int	i;
	int	*r;

	i = 0;
	r = (malloc(sizeof(int) * length));
	while (i < length)
	{
		r[i] = (*f)(tab[i]);
		i++;
	}
	return (r);
}
