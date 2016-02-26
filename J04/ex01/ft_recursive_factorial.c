/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 16:21:47 by bmorvan           #+#    #+#             */
/*   Updated: 2016/02/23 16:05:43 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int fact;

	if (nb < 0 || nb > 19)
		return (0);
	if (nb == 0)
	{
		return (1);
	}
	else
	{
		fact = nb * ft_recursive_factorial(nb - 1);
		return (fact);
	}
}
