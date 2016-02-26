/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 10:11:33 by bmorvan           #+#    #+#             */
/*   Updated: 2016/02/26 11:07:20 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	ft_strncpy(char *dest, char *scr,unsigned int n)
{
	unsigned int  index;

	index = n;
	printf("index%d\n",index);
	while (scr[index] != '\0')
	{
		dest[index] = scr[index];
		index++;
		if (scr[index] == '\0')
		{
			dest[index] = '\0';
			return (0);
		}
	}
	return (0);
}
