/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrangio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:49:07 by efrangio          #+#    #+#             */
/*   Updated: 2022/09/09 20:54:14 by efrangio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isascii(int c);

int	main(void)
{
	int	c;

	c = 0;
	while (c <= '~')
	{
		printf("Para %c o valor escola é %i\n", c, ft_isascii(c));
		c++;
	}
}

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
