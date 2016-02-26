/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 17:34:39 by bmorvan           #+#    #+#             */
/*   Updated: 2016/02/12 14:35:08 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_fibonacci(int index);

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
		int index;
		int result;

		printf("ce que j ai recu :[%s]\n", argv[1]);
		index = ft_atoi(argv[1]);
		printf("a t il ete caste ? %d\n", index);
		result  =  ft_fibonacci(index);
		printf("la suite du terme  (%d) est   %d \n", index, result);
	}
	return (0);
}
