/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 12:24:18 by bmorvan           #+#    #+#             */
/*   Updated: 2016/02/25 17:05:33 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char		*ft_strcpy(char *dest ,char *scr);

int		main(void)
{
		char source[] = "la belle vie";
		char desti[] =  " ";
		 printf("destination avant :%s",desti);
		 printf("source avant:%s",source);
		 ft_strcpy(desti,source);
		 printf("destination apres :%s",desti);
	return (0);
}
