/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 12:34:59 by bmorvan           #+#    #+#             */
/*   Updated: 2016/02/25 17:05:18 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strcpy(char *dest, char *scr)
{
	int index;

	index = 0;
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
