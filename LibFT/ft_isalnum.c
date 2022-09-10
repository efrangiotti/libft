/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrangio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:22:30 by efrangio          #+#    #+#             */
/*   Updated: 2022/09/09 20:38:06 by efrangio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isalnum(int c);

int	main(void)
{
	int	c;

	c = ' ';
	while (c <= '~')
	{
		printf("Para %c o valor escola é %i\n", c, ft_isalnum(c));
		c++;
	}
}

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
