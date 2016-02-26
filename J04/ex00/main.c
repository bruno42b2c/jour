/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 17:34:39 by bmorvan           #+#    #+#             */
/*   Updated: 2016/02/23 15:53:06 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_iterative_factorial(int nb);

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
		int fact;

		printf("ce que j ai recu :[%s]\n", argv[1]);
		nb = ft_atoi(argv[1]);
		printf("a t il ete caste ? %d\n", nb);
		fact =  ft_iterative_factorial(nb);
		printf("factoriel (%d) = %d\n", nb, fact);
	}
	return (0);
}
