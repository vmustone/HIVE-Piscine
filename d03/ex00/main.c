/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 21:07:49 by vmustone          #+#    #+#             */
/*   Updated: 2022/07/02 10:08:16 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_ft(int *nbr);

int	main()
{
	int	i;
    i = 1;
    printf("%d\n", i );
	ft_ft(&i);
	printf("%d", i);
	return (0);
}
