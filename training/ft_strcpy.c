/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:03:04 by vmustone          #+#    #+#             */
/*   Updated: 2022/07/21 17:48:31 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
		while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1[i]);
}

int main()
{
	char src[] = "HELLO";
	char dst[] = "";

	printf("%s\n", dst);
	ft_strcpy(dst, src);
	printf("%s\n", dst);
	return (0);
}
