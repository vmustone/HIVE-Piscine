/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 10:25:29 by vmustone          #+#    #+#             */
/*   Updated: 2022/07/04 11:52:40 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str);

int	main(void)
{
	char	*str;

	str = "Hello world";
	ft_putstr(str);
	ft_putchar('\n');
	return (0);
}
