/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 17:34:39 by bmorvan           #+#    #+#             */
/*   Updated: 2016/02/10 15:23:16 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_recursive_power(int nb, int power);

int		ft_atoi(char *str)
{
	int	signe;
	int r;

	r = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v' ||
			*str == '\n' || *str == '\r' || *str == '\f')
		str++;
	signe = 1;
	if (*str == '-')
	{
		signe = -1;
		str++;
	}
	if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		r = (r * 10) + (*str - '0');
		str++;
	}
	return (r * signe);
}
		
int		main(int argc, char  **argv)
{
	if (argc > 1)
	{
		int nb;
		int power;
		int result;

		printf("ce que j ai recu :[%s] et [%s]\n", argv[1] , argv[2]);
		nb = ft_atoi(argv[1]);
		power = ft_atoi(argv[2]);
		printf("a t il ete caste ? %d et %d\n", nb,power);
		result  =  ft_recursive_power(nb,power);
		printf(" (%d) a la puissance  %d = %d \n", nb, power, result);
	}
	return (0);
}
