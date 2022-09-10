/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrangio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:22:56 by efrangio          #+#    #+#             */
/*   Updated: 2022/09/09 20:35:14 by efrangio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isdigit(int c);

int	main(void)
{
	int	c;

	c = 40;
	while (c <= 72)
	{
		printf("Para %c o valor escola é %i\n", c, ft_isdigit(c));
		c++;
	}
}

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	else
		return (1);
}
