/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:06:10 by vmustone          #+#    #+#             */
/*   Updated: 2022/07/07 18:28:25 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(void)
{ 
	char src[] = "Hello";
	char *my = ft_strdup(src); 
	char *theirs = strdup(src);

	printf("%s%s\n", my, theirs);

	return (0);
}
