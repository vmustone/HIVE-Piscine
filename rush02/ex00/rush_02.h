/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlomas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:57:49 by dlomas            #+#    #+#             */
/*   Updated: 2022/07/17 23:14:45 by dlomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H
# define RUSH_02_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
char	**split_string(char *str, int lines, int c);
int		ft_calc_first_line(char *str);
int		ft_calc_line_amount(char *str);
void	check_rush00(char **arr, int l, int c);
void	check_rush01(char **arr, int l, int c);
void	check_rush02(char **arr, int l, int c);
void	check_rush03(char **arr, int l, int c);
void	check_rush04(char **arr, int l, int c);
int		check_fr0(char **arr, int len);
int		check_mr0(char **arr, int lines, int len);
int		check_lr0(char **arr, int lines, int len);
int		check_fr1(char **arr, int len);
int		check_mr1(char **arr, int lines, int len);
int		check_lr1(char **arr, int lines, int len);
int		check_fr2(char **arr, int len);
int		check_mr2(char **arr, int lines, int len);
int		check_lr2(char **arr, int lines, int len);
int		check_fr3(char **arr, int len);
int		check_mr3(char **arr, int lines, int len);
int		check_lr3(char **arr, int lines, int len);
int		check_fr4(char **arr, int len);
int		check_mr4(char **arr, int lines, int len);
int		check_lr4(char **arr, int lines, int len);

#endif
