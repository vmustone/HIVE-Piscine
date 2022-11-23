/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:19:45 by smorphet          #+#    #+#             */
/*   Updated: 2022/07/12 10:44:55 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		is_valid_guess(char **puzzle, int row, int column, char guess);
void	ft_putpuzzle(char **puzzle);

int	solver(char **puzzle, int row, int column, char guess)
{
	if (row == 9 && column == 8)
		return (1);
	else if (column == 9)
	{
		row++;
		guess = '1';
		column = 0;
	}
	if (puzzle[row][column] != '.')
	{
		return (solver(puzzle, row, column + 1, guess));
	}
	while (guess <= '9')
	{
		if (is_valid_guess(puzzle, row, column, guess) == 1)
		{
			puzzle[row][column] = guess;
			ft_putpuzzle(puzzle);
			write(1, "\n", 1);
			if (solver(puzzle, row, column + 1, '1') == 1)
				return (1);
			puzzle[row][column] = '.';
			ft_putpuzzle(puzzle);
			write(1, "\n", 1);
		}
		guess++;

	}
	return (0);
}
