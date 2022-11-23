/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlomas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:53:16 by dlomas            #+#    #+#             */
/*   Updated: 2022/07/17 22:07:32 by dlomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush_02.h"

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}
