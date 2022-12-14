/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:59:11 by vmustone          #+#    #+#             */
/*   Updated: 2022/07/11 17:12:31 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int lenght, void (*f) (int))
{
	int	i;

	i = 0;
	while (i < lenght)
	{
		(*f)(tab[i]);
		i++;
	}
}
