/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:15:39 by vmustone          #+#    #+#             */
/*   Updated: 2022/07/21 17:44:33 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main()
{
	char *src;
	//int i;

	src = "1234567890";
	//i = ft_strlen(src);
	printf("%d\n", ft_strlen(src));
	return (0);
}
