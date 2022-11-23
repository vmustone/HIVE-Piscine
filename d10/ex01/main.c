/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:52:07 by vmustone          #+#    #+#             */
/*   Updated: 2022/07/12 15:03:58 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void		ft_putnbr(int nb);
void		ft_foreach(int *tab, int length, void (*f) (int));

int	main(void)
{
	int tab[100] = {1, 2, 3, 4, 5, 6, 7 ,8 ,9, 10};
	ft_foreach(tab, 7, &ft_putnbr);
	return (0);
}
