/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:08:48 by vmustone          #+#    #+#             */
/*   Updated: 2022/07/10 16:31:08 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_square(char **puzzle, int row, int column, char guess)
{
	int	horizontal_inc;
	int	vertical_inc;
	int	start_row;
	int	start_column;

	if (row >= 1 && row <= 3)
		start_row = 1;
	else if (row >= 4 && row <= 6)
		start_row = 4;
	else if (row >= 7 && row <= 9)
		start_row = 7;
	if (column >= 0 && column <= 2)
		start_column = 0;
	else if (column >= 3 && column <= 5)
		start_column = 3;
	else if (column >= 6 && column <= 8)
		start_column = 6;
	horizontal_inc = 0;
	vertical_inc = 0;
	while (horizontal_inc < 3)
	{
		while (vertical_inc < 3)
		{
			if (puzzle[start_row + horizontal_inc][start_column + vertical_inc] == guess)
				return (1);
			vertical_inc++;
		}
		vertical_inc = 0;
		horizontal_inc++;
	}
	return (0);
}
