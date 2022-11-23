/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlomas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:43:35 by dlomas            #+#    #+#             */
/*   Updated: 2022/07/16 12:43:39 by dlomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush_02.h"

#define BUF_SIZE 30000

void rush(char *str, int l, int c)
{
    char **arr;
    arr = split_string(str, l, c);
    if (arr[0][0] == 'o')
    {
        check_rush00(arr, l, c);
    }
    else if (arr[0][0] == '/')
    {
        check_rush01(arr, l, c);
    }
    else if (arr[0][0] == 'A')
    {
        check_rush02(arr, l, c);
        check_rush03(arr, l, c);
        check_rush04(arr, l, c);
    }
	else
	{
		ft_putstr("none");
	}
}

int main()
{
    int ret;
    char    buf[BUF_SIZE + 1];
    int l;
    int c;
    ret = read(0, buf, BUF_SIZE);
    buf[ret] = '\0';
    c = ft_calc_first_line(buf);
    l = ft_calc_line_amount(buf);
    printf("l = %d | c = %d", l, c);
    rush(buf, l, c);
    return (0);
}