/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:27:08 by vmustone          #+#    #+#             */
/*   Updated: 2022/07/05 19:00:54 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	int	a;
	int	str;

	a = atoi("123456789");
	str = ft_atoi("123456789");
	printf("%d\n", a);
	printf("%d\n", str);
	return (0);
}
