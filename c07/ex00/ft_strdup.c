/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:34:49 by fboulbes          #+#    #+#             */
/*   Updated: 2024/09/17 13:54:59 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

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

char	*ft_strdup(char *src)
{
	char	*new_str;

	new_str = malloc(ft_strlen(src) + 1);
	if (new_str == NULL)
		return (0);
	new_str = ft_strcpy(new_str, src);
	return (new_str);
}
/**
int	main(void)
{
	char *str;
	char *src;

	src = "Salut";
	str = ft_strdup(src);
	printf("%s", str);
	free(str);
}
*/
