/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 17:34:39 by bmorvan           #+#    #+#             */
/*   Updated: 2016/02/22 14:01:46 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_sqrt(int nb);

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
		int result;

		printf("ce que j ai recu :[%s]\n", argv[1]);
		nb = ft_atoi(argv[1]);
		printf("a t il ete caste ? %d\n", nb);
		result  =  ft_sqrt(nb);
		printf("le  carre  du nombre  (%d) est   %d \n", nb, result);
	}
	return (0);
}
