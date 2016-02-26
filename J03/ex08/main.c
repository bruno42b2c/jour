/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 12:06:05 by bmorvan           #+#    #+#             */
/*   Updated: 2016/02/09 17:34:06 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str);

int		main(int argc, char **argv)
{
	
	if (argc > 1)
	{	
	int nb;
	printf("avant fonction = %s\n",argv[1]); 
	nb = ft_atoi(argv[1]);
	printf(" apre fonction  atoi = %d\n",nb);
	}
}
