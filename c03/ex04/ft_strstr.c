/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:52:04 by fboulbes          #+#    #+#             */
/*   Updated: 2024/09/11 15:24:45 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
			{
				return (str + i - j + 1);
			}
		}
		else
		{
			j = 0;
		}
		i++;
	}
	return (0);
}

/**
int main(void)
{
	char str[] = "Je suisJee nul";
	char haystack[] = "Jee";

	char *res;
	res = ft_strstr(str, haystack);
	printf("%s", res);
}
*/
