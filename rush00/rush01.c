/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:08:22 by fboulbes          #+#    #+#             */
/*   Updated: 2024/09/07 16:42:58 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display_rush(int line, int col, int x, int y)
{
	if ((line == x && col == 1) || (line == 1 && col == y))
	{
		ft_putchar('\\');
	}
	else if ((line == 1 && col == 1) || (line == x && col == y))
	{
		ft_putchar('/');
	}
	else if ((line == 1 || line == x) && (col != 1 && col != y))
	{
		ft_putchar('*');
	}
	else if ((line != 1 && col == y) || (line != 1 && col == 1))
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush01(int x, int y)
{
	int	line;
	int	col;

	col = 1;
	while (col <= y)
	{
		line = 1;
		while (line <= x)
		{
			display_rush(line, col, x, y);
			line++;
		}
		ft_putchar('\n');
		col++;
	}
}

int	main(void)
{
	rush01(5, 5);
}
