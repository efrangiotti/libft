/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrangio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 19:48:17 by efrangio          #+#    #+#             */
/*   Updated: 2022/09/09 20:35:07 by efrangio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isalpha(char *str);

int	main(void)
{
	char	c;

	c = 32;
	while (c <= 126)
	{
		printf("Para %c o valor escola é %i\n", c, ft_isalpha(&c));
		c++;
	}
}

int	ft_isalpha(char *str)
{
	if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		return (1);
	else
		return (0);
}
