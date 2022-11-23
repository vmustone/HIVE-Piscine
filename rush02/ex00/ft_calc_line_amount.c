/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_line_amount.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlomas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:51:10 by dlomas            #+#    #+#             */
/*   Updated: 2022/07/17 22:00:39 by dlomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush_02.h"

int	ft_calc_line_amount(char *str)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (str[index] != '\0')
	{
		if (str[index] == '\n')
		{
			count++;
		}
		index++;
	}
	return (count);
}
