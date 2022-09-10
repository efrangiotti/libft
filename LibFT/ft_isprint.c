/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrangio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:51:49 by efrangio          #+#    #+#             */
/*   Updated: 2022/09/09 20:53:38 by efrangio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isprint(int c);

int	main(void)
{
	int	c;

	c = 0;
	while (c <= '~')
	{
		printf("Para %c o valor escola é %i\n", c, ft_isprint(c));
		c++;
	}
}

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}
