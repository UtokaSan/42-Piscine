/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:47:28 by fboulbes          #+#    #+#             */
/*   Updated: 2024/09/07 17:03:09 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display_rush(int line, int col, int x, int y)
{
	if ((col == 1 && line == 1) || (col == y && line == 1))
	{
		ft_putchar('A');
	} else
	{
		ft_putchar('B');
	}
}

void	rush03(int x, int y)
{
	int	line;
	int	col;

	col = 1;
	while (col <= y)
	{
		line = 1;
		while(line <= x)
		{
			display_rush(line, col, x, y);
			x++;
		}
		y++;
	}
}

int main()
{
	rush03(5, 5);
}
