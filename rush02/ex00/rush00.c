/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:14:17 by jbagger           #+#    #+#             */
/*   Updated: 2022/07/02 16:02:38 by jbagger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_o_dash(index2, columns)
{
	while (index2 <= columns)
	{
		if (index2 == 1 || index2 == columns)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		index2++;
	}
	index2 = 1;
	ft_putchar('\n');
	return (0);
}

int	ft_pipe_space(index2, columns)
{
	while (index2 <= columns)
	{
		if (index2 == 1 || index2 == columns)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		index2++;
	}
	index2 = 1;
	ft_putchar('\n');
	return (0);
}

int	rush(columns, lines)
{
	int		index1;
	int		index2;

	index1 = 1;
	index2 = 1;
	while (index1 <= lines)
	{
		if (index1 == 1 || index1 == lines)
		{
			ft_o_dash(index2, columns);
		}
		else
		{
			ft_pipe_space(index2, columns);
		}
		index1++;
	}
	return (0);
}

// int	main(int ac, char **av)
// {
// 	int a = (*av[1] - '0');
// 	int b = (*av[2] - '0');
// 	rush(a, b);
// 	return (0);
// }

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}	
	return (result * sign);
}

int	main(int ac, char **av)
{
	char *a;
	char *b;
	int x;
	int y;

	a = av[1];
	b = av[2];
	x = ft_atoi(a);
	y = ft_atoi(b);
	
	rush(x, y);
	return (0);
}