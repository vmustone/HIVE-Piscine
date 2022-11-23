/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjunttil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:36:49 by jjunttil          #+#    #+#             */
/*   Updated: 2022/07/03 16:45:09 by jjunttil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

// Function print takes four variables of type int as arguments,
// It prints the correct character in the correct location.
// It decides the correct character by the location given to as input
// and by the size of the whole rectangle (width and height)
// In our case the character 'A' should be printed in the upper corners,
// the character 'C' in the lower corners, the character 'B' in the sides,
// and the space inside the rectangle.
void	print(int x, int y, int c_width, int c_height)
{
	if (c_height == 0 && (c_width == 0 || c_width == (x - 1)))
	{
		ft_putchar('A');
	}
	else if (c_height == (y - 1) && (c_width == 0 || c_width == (x - 1)))
	{
		ft_putchar('C');
	}
	else if (c_height == 0 || c_height == (y - 1)
		|| c_width == 0 || c_width == (x - 1))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

// function rush takes two variables of type int as arguments,
// named respectively x and y.
// It displays a rectangle of x  characters for width,
// and y characters for length.
void	rush(int x, int y)
{
	int	count_width;
	int	count_height;

	count_width = 0;
	count_height = 0;
	while (y > count_height)
	{
		while (x > count_width)
		{
			print(x, y, count_width, count_height);
			count_width++;
		}
		count_width = 0;
		count_height++;
		ft_putchar('\n');
	}
}
