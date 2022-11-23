/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes.place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:19:02 by vmustone          #+#    #+#             */
/*   Updated: 2022/07/07 20:29:33 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_takes_place(int hour)
{
	char	*c;

	c = "THE FOLLOWING TAKES PLACE BETWEEN";
	if (hour == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. AND 1.00  A.M.\n");
	if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 A.M. AND 12.00 P.M.\n");
	if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 P.M. AND 12.00 A.M.\n");
	if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 P.M. AND 1.00 P.M.\n");
	if (hour < 11 && hour > 0)
		printf("%s%d.00 A.M. AND %d.00 A.M.\n", c, hour, hour +1);
	if (hour > 12 && hour < 23)
	{
		hour = hour - 12;
		printf("%s%d.00 P.M. AND %d.00 P.M.\n", c, hour, hour +1);
	}
}
