/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 18:29:07 by vmustone          #+#    #+#             */
/*   Updated: 2022/07/02 20:35:41 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 13 && nb > 0)
	{
		nb = ft_recursive_factorial(nb - 1) * nb;
		return (nb);
	}
	else if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	else
		return (1);
}
