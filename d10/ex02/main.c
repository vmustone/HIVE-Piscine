/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:51:08 by vmustone          #+#    #+#             */
/*   Updated: 2022/07/12 14:58:02 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f) (int));
void	ft_putnbr(int nb);
int		*ft_map(int *tab, int length, int (*f)(int));
int		plus_nbr(int nbr)
{
	return (nbr + 1);
}

int	main()
{
	int *ntab;
	int	tab[100] = {};

	ntab = ft_map(tab, 20, &plus_nbr);
	ft_foreach(ntab, 7, &ft_putnbr);
	return (0);
}
