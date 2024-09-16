/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 09:11:20 by fboulbes          #+#    #+#             */
/*   Updated: 2024/09/16 11:28:51 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	size = max - min;
	tab = malloc(sizeof(tab) * size);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/**
int	main(void)
{
	int i;
	int *tab;

	i = 0;
	tab = ft_range(5, 10);
	while(i < 5)
	{
		printf("%i\n", tab[i]);
		i++;
	}
	free(tab);
}
*/
