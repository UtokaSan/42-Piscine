/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:01:06 by fboulbes          #+#    #+#             */
/*   Updated: 2024/09/12 17:09:19 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
/**
int main()
{
	int res;
	res = ft_iterative_factorial(10);
	printf("%i", res);
}
*/
