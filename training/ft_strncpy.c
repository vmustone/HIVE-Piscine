/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:37:14 by vmustone          #+#    #+#             */
/*   Updated: 2022/07/19 16:47:06 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char ft_strncpy(char *s1, char *s2, int n)
{
	int i;

	i = 0;
	while (s2[i] && i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1[i]);
}

int main()
{
	char	src[] = "moi";
	char	dst[] = "hei";

	printf("%s\n", dst);
	ft_strncpy(dst, src, 3);
	printf("%s\n", dst);
	return (0);
}
