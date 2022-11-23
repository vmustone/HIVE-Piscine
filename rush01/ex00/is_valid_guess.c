/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:19:45 by smorphet          #+#    #+#             */
/*   Updated: 2022/07/10 16:27:11 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		solver(char **puzzle, int row, int column);
void	ft_putpuzzle(char **puzzle);
int		check_square(char **puzzle, int row, int column, char guess);

int	is_valid_guess(char **puzzle, int row, int column, char guess)
{
	int	column_cnt;
	int	row_cnt;

	column_cnt = 0;
	row_cnt = 1;
	while (column_cnt <= 8)
	{
		if (puzzle[row][column_cnt] == guess)
			return (0);
		else
			column_cnt++;
	}
	while (row_cnt <= 9)
	{
		if (puzzle[row_cnt][column] == guess)
			return (0);
		else
			row_cnt++;
	}
	if (check_square(puzzle, row, column, guess))
		return (0);
	return (1);
}
