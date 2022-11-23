/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:27:00 by vmustone          #+#    #+#             */
/*   Updated: 2022/06/30 19:45:45 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
	{
	char	i;

	i = 'z';
	while (i >= 'a')
	{
		ft_putchar (i);
		i = i - 1;
	}
}
