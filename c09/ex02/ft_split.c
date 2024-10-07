/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <fboulbes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:18:29 by fboulbes          #+#    #+#             */
/*   Updated: 2024/09/23 16:13:19 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

int	*ft_search_charset(char *charset, char *str)
{
	int	i;
	int	j;
	int	*pos;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	pos = malloc((ft_strlen(str) + 1) * sizeof(int));
	while (str[i] != '\0')
	{
		if (str[i] == charset[j])
		{
			j++;
			if (charset[j] == '\0')
			{
				pos[count++] = (i - j + 1);
				j = 0;
			}
		}
		else
			j = 0;
		i++;
	}
	pos[count] = -1;
	return (pos);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

void	ft_cut_string(char **result, char *str, int *pos, char *charset)
{
	int	i;
	int	start;
	int	len;

	i = 0;
	start = 0;
	while (pos[i] != -1)
	{
		len = pos[i] - start;
		result[i] = malloc((len + 1) * sizeof(char));
		if (result[i] == NULL)
			return ;
		ft_strncpy(result[i], str + start, len);
		result[i][len] = '\0';
		start = pos[i] + ft_strlen(charset);
		i++;
	}
	len = ft_strlen(str + start);
	result[i] = malloc((len + 1) * sizeof(char));
	if (result[i] == NULL)
		return ;
	ft_strncpy(result[i], str + start, len);
	result[i][len] = '\0';
	result[i + 1] = NULL;
}

char	**ft_split(char *str, char *charset)
{
	int		*pos;
	int		count;
	char	**result;

	count = 0;
	pos = ft_search_charset(charset, str);
	if (pos == NULL)
		return (NULL);
	while (pos[count] != -1)
		count++;
	result = malloc((count + 2) * sizeof(char *));
	if (result == NULL)
	{
		free(pos);
		return (NULL);
	}
	ft_cut_string(result, str, pos, charset);
	free(pos);
	return (result);
}
/**
int	main(void)
{
	char	**str;
	int		i;

	i = 0;
	str = ft_split("Salut-T--u--vas bien-sss", "--");
	while (str[i] != NULL)
	{	
		printf("[%s]\n", str[i]);
		i++;
	}
	free(str);
}
*/
