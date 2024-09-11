/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:38:35 by fboulbes          #+#    #+#             */
/*   Updated: 2024/09/07 09:30:05 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	last;
	int	i;

	last = size - 1;
	i = 0;
	while (i != size / 2)
	{
		ft_swap(&tab[i], &tab[last]);
		i++;
		last--;
	}
}

/**
int main(void)
{
	int tableau[4];
	int i;
	tableau[0] = 50;
	tableau[1] = 100;
	tableau[2] = 20;
	tableau[3] = 0;

	ft_rev_int_tab(tableau, 4);
	for (i = 0 ; i < 4 ; i++)
	{
        	printf("%d\n", tableau[i]);
	}
}
*/
