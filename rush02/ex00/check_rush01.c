/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rush01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlomas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:22:49 by dlomas            #+#    #+#             */
/*   Updated: 2022/07/17 15:22:53 by dlomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush_02.h"

void	check_rush01(char **arr, int l, int c)
{
	if (check_fr1(arr, c) && check_mr1(arr, l, c) && check_lr1(arr, l, c))
	{
		ft_putstr("[rush01] [");
		ft_putnbr(c);
		ft_putstr("] [");
		ft_putnbr(l);
		ft_putstr("]");
	}
}

int	check_fr1(char **arr, int len)
{
	int	i;

	i = 1;
	while (arr[0][i] < len - 1)
	{
		if (arr[0][i] != '*')
		{
			return (1);
		}
		i++;
	}
	if (arr[0][i] != '\\')
	{
		return (1);
	}
	return (0);
}

int	check_mr1(char **arr, int lines, int len)
{
	int	l;
	int	c;

	l = 1;
	if (lines > 2)
	{
		while (l < lines - 1)
		{
			c = 0;
			if (arr[l][c] != '*')
				return (1);
			c++;
			while (arr[l][c] < len - 1)
			{
				if (arr[l][c] != ' ')
					return (1);
				c++;
			}
			if (arr[l][c] != '*')
				return (1);
			l++;
		}
	}
	return (0);
}

int	check_lr1(char **arr, int lines, int len)
{
	int	i;
	int	c;

	i = 1;
	c = 0;
	if (arr[lines - 1][c] != '*')
	{
		return (1);
	}
	c++;
	while (arr[lines - 1][i] < len - 1)
	{
		if (arr[lines - 1][i] != '*')
		{
			return (1);
		}
		i++;
	}
	if (arr[lines - 1][i] != '/')
	{
		return (1);
	}
	return (0);
}
