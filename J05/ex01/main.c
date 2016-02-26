/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 16:16:41 by bmorvan           #+#    #+#             */
/*   Updated: 2016/02/26 11:07:24 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char		*ft_strncpy(char *dest ,char *scr,unsigned int n);

int		ft_putchar(char c)
{
	write(1,&c,1);
	return (0);
}

int		main(void)
{
		char source[] = "la belle vie";
		char desti[] =  " ";
		unsigned int n;
		n = 5; 
		 printf("destination avant :%s\n",desti);
		 printf("source avant:%s\n",source);
		 ft_strncpy(desti,source,n);
		 printf("destination apres :%s",desti);
	return (0);
}
