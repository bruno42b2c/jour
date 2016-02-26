/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 16:23:46 by bmorvan           #+#    #+#             */
/*   Updated: 2016/02/22 14:11:47 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int r;

	if (index < 0)
	{
		r = -1;
		return (r);
	}
	if (index == 0)
		return (0);
	if (index < 3)
		return (1);
	r = (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	return (r);
}
