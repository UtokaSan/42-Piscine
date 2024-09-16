/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:45:57 by fboulbes          #+#    #+#             */
/*   Updated: 2024/09/16 18:33:47 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int	ft_strjoin_strlen(char **str, int size)
{
	int	i;
	int j;
	int count;

	i = 0;
	count = 0;
	while(i < size)
	{
		j = 0;
		while(str[i][j] != '\0')
		{
			j++;
			count++;
		}
		i++;
	}
	return (count);
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

char	*ft_concat_all_strs(char *new_str, char **old_str, int size, char *sep)
{
	int i;

	i = 0;
	while(i < size)
	{
		ft_strcat(new_str, old_str[i]);
		if (i != size - 1)
			ft_strcat(new_str, sep);
		i++;
	}
	return new_str;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *new_str;
	int length_strs;
	int length_sep;

	if (size == 0)
	{
		new_str = malloc(1);
		new_str[0] = '\0';
		return (new_str);
	}
	length_strs = ft_strjoin_strlen(strs, size);
	length_sep = ft_strlen(sep);

	new_str = malloc(length_strs + length_sep * (size - 1)  + 1);
	new_str[0] = '\0';
	new_str = ft_concat_all_strs(new_str, strs, size, sep);
	return (new_str);
}

int main(void)
{
	char *str[] = {"Salut", "Tu", "Vas", "A"};
	char *newstr;

	newstr = ft_strjoin(4, str, "..");
	printf("%s", newstr);
	free(newstr);
}
