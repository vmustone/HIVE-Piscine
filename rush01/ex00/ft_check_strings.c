/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_strings.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:15:52 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/10 16:28:10 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_strings(char **allstrs)
{
	int	string;
	int	letter;

	string = 1;
	letter = 0;
	while (string < 10)
	{
		while (letter < 9)
		{
			if (allstrs[string][letter] == '.' || (allstrs[string][letter] > '0'
						&& allstrs[string][letter] <= '9'))
				letter++;
			else
				return (1);
		}
		if (allstrs[string][letter] != 0)
			return (1);
		letter = 0;
		string++;
	}
	return (0);
}
