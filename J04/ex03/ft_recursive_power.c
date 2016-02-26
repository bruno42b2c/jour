/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 11:29:46 by bmorvan           #+#    #+#             */
/*   Updated: 2016/02/24 16:13:01 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int p;

	if (power < 0)
	{
		p = 0;
		return (0);
	}
	if (power == 0)
	{
		p = 1;
		return (p);
	}
	else
	{
		p = nb * ft_recursive_power(nb, power - 1);
		return (p);
	}
}
