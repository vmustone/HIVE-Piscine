/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:26:37 by smorphet          #+#    #+#             */
/*   Updated: 2022/07/10 16:26:10 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		solver(char **puzzle, int row, int column, char guess);
int		ft_check_strings(char **allstrs);
void	ft_putpuzzle(char **puzzle);

int	main(int argc, char **argv)
{
	if (argc != 10)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (ft_check_strings(argv))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (solver(argv, 1, 0, '1'))
		ft_putpuzzle(argv);
	ft_putpuzzle(argv);
	return (0);
}
