/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:44:34 by fboulbes          #+#    #+#             */
/*   Updated: 2024/09/15 12:23:21 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (power == 0)
		return (1);
	else if (nb == 0 || power < 0)
		return (0);
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
/**
int main()
{
	int res;
	res = ft_iterative_power(2, 3);
	printf("%i", res);
}
*/
