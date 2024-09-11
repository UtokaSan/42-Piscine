/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:59:50 by fboulbes          #+#    #+#             */
/*   Updated: 2024/09/07 14:45:37 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display_all(int x, int y, int line, int col)
{
	if (line == 1 || line == x)
	{
		if (col == 1)
			ft_putchar('A');
		else if (col == y)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	if ((line != 1 && line != x) && (col == 1 || col == y))
		ft_putchar('B');
	else if ((line != 1 && line != x) && (col != 1 || col != y))
		ft_putchar(' ');
}

void	rush02(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			display_all(x, y, j, i);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(void)
{
	rush02(5, 5);
	return (0);
}
