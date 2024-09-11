/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:16:07 by fboulbes          #+#    #+#             */
/*   Updated: 2024/09/11 07:46:03 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char str)
{
	if (!(str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
		return (0);
	else
		return (1);
}

int	ft_str_is_alpha_numeric(char str)
{
	if (((str >= 'a' && str <= 'z') || (str >= '0' && str <= '9')))
		return (0);
	else if (str >= 'A' && str <= 'Z')
		return (0);
	else
		return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		return (str);
	}
	ft_strlowcase(str);
	if (ft_str_is_alpha(str[0]) == 1)
		str[0] -= 32;
	while (str[i] != '\0')
	{
		i++;
		if (ft_str_is_alpha_numeric(str[i - 1]) == 1)
		{
			if (str[i] != ' ' && ft_str_is_alpha(str[i]) == 1)
				str[i] -= 32;
		}
		else if (str[i - 1] == ' ')
		{
			if (ft_str_is_alpha_numeric(str[i]) == 0)
				str[i] -= 32;
		}
	}
	return (str);
}
/**
int	main(void)
{
	char	str[] = "sAlut tu+vas+bien 42trop?cool";
	ft_strcapitalize(str);
	printf("%s", str);
}
**/
