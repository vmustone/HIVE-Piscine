/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlomas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:49:14 by dlomas            #+#    #+#             */
/*   Updated: 2022/07/17 23:20:24 by dlomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush_02.h"

char **split_string(char *str, int lines, int len)
{
    int l = 0;
    int c = 0;
    int i = 0;

    char **new_str = (char **)malloc(lines * sizeof(char *) + 1);
    while (i < lines * len)
    {
        new_str[i] = (char *)malloc(len * sizeof(char));
        i++;
    }
    free(new_str);

    i = 0;
    while(str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            new_str[l][c] = '\0';
            i++;
            l++;
            c = 0;
        }
        new_str[l][c] = str[i];
        c++;
        i++;
    }
    return (new_str);
}
