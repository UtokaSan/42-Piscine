/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:56:52 by fboulbes          #+#    #+#             */
/*   Updated: 2024/09/05 11:32:08 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	first_number;
	char	second_number;
	char	third_number;

	first_number = '0';
	while (first_number <= '7')
	{
		second_number = first_number + 1;
		while (second_number <= '8')
		{
			third_number = second_number + 1;
			while (third_number <= '9')
			{
				write(1, &first_number, 1);
				write(1, &second_number, 1);
				write(1, &third_number, 1);
				if (first_number != '7')
					write(1, ", ", 2);
				third_number++;
			}
			second_number++;
		}
		first_number++;
	}
}
/**
int main() {
	ft_print_comb();
}
*/
