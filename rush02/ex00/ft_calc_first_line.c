/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_first_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlomas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:50:47 by dlomas            #+#    #+#             */
/*   Updated: 2022/07/17 21:58:04 by dlomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush_02.h"

int	ft_calc_first_line(char *str)
{
	int	index;
	int	count;

	count = 0;
	index = 0;
	while (str[index] != '\n')
	{
		index++;
		count++;
	}
	return (count);
}
