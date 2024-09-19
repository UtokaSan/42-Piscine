/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:29:10 by fboulbes          #+#    #+#             */
/*   Updated: 2024/09/18 14:25:54 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*new_str;

	new_str = malloc(ft_strlen(src) + 1);
	if (new_str == NULL)
		return (0);
	new_str = ft_strcpy(new_str, src);
	return (new_str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*nw_struct;
	int					i;

	i = 0;
	nw_struct = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (nw_struct == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		nw_struct[i].size = ft_strlen(av[i]);
		nw_struct[i].str = av[i];
		nw_struct[i].copy = ft_strdup(av[i]);
		i++;
	}
	nw_struct[i].str = 0;
	return (nw_struct);
}
/**
int main()
{
	struct s_stock_str *str;
	char *stri[] = {"sa" "r"};
	str = ft_strs_to_tab(2, stri);
	printf("%s", str[0].copy);
}
*/
