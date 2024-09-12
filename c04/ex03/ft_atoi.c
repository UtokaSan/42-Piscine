/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 07:49:35 by fboulbes          #+#    #+#             */
/*   Updated: 2024/09/12 15:31:48 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isspace(char c)
{
	if ((c == ' ' || c == '\t' || c == '\n' || c == '\v')
		|| (c == '\f' || c == '\r'))
		return (1);
	return (0);
}

int	ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	ft_escape_character(int *i, int *j, char *str)
{
	while (ft_isspace(str[*i]) == 1)
	{
		(*i)++;
	}
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			(*j)++;
		(*i)++;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	sign;
	int	res;

	i = 0;
	j = 0;
	sign = 1;
	res = 0;
	ft_escape_character(&i, &j, str);
	if (!(j % 2 == 0))
		sign = -1;
	while (str[i] != '\0' && ft_is_numeric(str[i]) == 1)
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * sign);
}

/**
int main(void)
{
	int res;
	int res1;

	res = ft_atoi("   ---+--+514565aeb5");
	res1 = ft_atoi("---+--+1234");

	printf("%d\n", res);
	printf("%d", res1);
}
*/
