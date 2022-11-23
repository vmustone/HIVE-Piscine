/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rush00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlomas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:22:49 by dlomas            #+#    #+#             */
/*   Updated: 2022/07/17 15:22:53 by dlomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

void	check_rush00(char **arr, int l, int c)
{
	printf("\nl = %d\n", l);
	if (check_fr0(arr, c) && check_mr0(arr, l, c) && check_lr0(arr, l, c))
	{
		ft_putstr("[rush-00] [");
		ft_putnbr(c);
		ft_putstr("] [");
		ft_putnbr(l);
		ft_putstr("]");
	}
}

int	check_fr0(char **arr, int len)
{
	int	i;

	i = 1;
	if (len == 1)
	{
		return (0);
	}
	while (i < len - 1)
	{
		if (arr[0][i] != '-')
			return (1);
		i++;
	}
	if (arr[0][i] != 'o')
		return (1);
	return (0);
}

int	check_mr0(char **arr, int lines, int len)
{
	int	l;
	int	c;

	l = 1;
	if (lines < 3)
	{
		return (0);
	}
	if (lines > 2)
	{
		while (l < lines - 1)
		{
			c = 0;
			if (arr[l][c] != '|')
				return (1);
			c++;
			while (arr[l][c] < len - 1)
			{
				if (arr[l][c] != ' ')
					return (1);
				c++;
			}
			if (arr[l][c] != '|')
				return (1);
			l++;
		}
	}
	return (0);
}

int	check_lr0(char **arr, int lines, int len)
{
	int	i;

	i = 0;
	if (lines < 2)
	{
		return (0);
	}
	if (arr[lines - 1][i] != 'o')
	{
		return 1;
	}
	i++;
	while (i < len - 1)
	{
		if (arr[lines - 1][i] != '-')
		{
			return (1);
		}
		i++;
	}
	if (arr[lines - 1][i] != 'o')
	{
		return (1);
	}
	return (0);
}
