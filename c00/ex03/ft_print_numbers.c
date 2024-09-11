/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:14:36 by fboulbes          #+#    #+#             */
/*   Updated: 2024/09/04 15:37:22 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	first_number;
	char	last_number;

	first_number = 48;
	last_number = 57;
	while (first_number <= last_number)
	{
		write(1, &first_number, 1);
		first_number++;
	}
}
