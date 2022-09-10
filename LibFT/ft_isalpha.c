/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrangio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 19:48:17 by efrangio          #+#    #+#             */
/*   Updated: 2022/09/10 13:04:48 by efrangio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isalpha(int c);

int	main(void)
{
	int	c;

	c = 32;
	while (c <= 126)
	{
		printf("Para %c M = é %i\n", c, ft_isalpha(c));
		printf("Para %c O = é %i\n\n", c, isalpha(c));
		c++;
	}
}

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
