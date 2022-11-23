/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:50:29 by vmustone          #+#    #+#             */
/*   Updated: 2022/07/12 20:39:42 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_any(char **tab, int (*f) (char*));

int	check(char *tab)
{
	if (tab[0] == 'h')
		return (1);
	return (0);
	}
int	main(int argc, char **argv)
{
	int r;
	if (argc >= 2)
	{	
		r = ft_any(argv, &check);
		printf("%d\n", r);
	}
	return (0);
}
