/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:18:29 by fboulbes          #+#    #+#             */
/*   Updated: 2024/09/23 15:55:56 by fboulbes         ###   ########.fr       */
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

int 	*ft_search_charset(char *charset, char *str)
{
	int i;
	int j;
	int *pos;
	int count;

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

void	ft_cut_string()
{

}

char **ft_split(char *str, char *charset)
{
	int *pos;
	int count;
	char **result;
	int i;
	int start;
	int len;

	count = 0;
	len = 0;
	start = 0;
	i = 0;
	pos = ft_search_charset(charset, str);
	if (pos == NULL)
		return (NULL);
	while(pos[count] != -1)
		count++;
	result = malloc((count + 2) * sizeof(char *));
	if (result == NULL)
	{
		free(pos);
		return (NULL);
	}
	while(i <= count)
	{
		if (pos[i] == -1)
			len = ft_strlen(str + start);
		else
			len = pos[i] - start;
		result[i] = malloc((len + 1) * sizeof(char));
		if (result[i] == NULL)
		{
			free(result);
			free(pos);
			return (NULL);
		}
		ft_strncpy(result[i], str + start, len);
		result[i][len] = '\0';
		if (pos[i] != -1)
			start = pos[i] + ft_strlen(charset);
		i++;
	}
	result[i] = NULL;
	free(pos);
	return result;
}

int main(void)
{
	char **str;
	int i;

	i = 0;
	str = ft_split("Salut-T--u--vas bien-sss", "--");
	while(str[i] != NULL)
	{	
		printf("[%s]\n", str[i]);
		i++;
	}
	free(str);
}


/**
Écrire une fonction qui découpe une chaîne de caractères en fonction d’une autre
chaîne de caractères.
• Il faudra utiliser chaque caractère de la chaine charset comme séparateur.
• La fonction renvoie un tableau où chaque case contient l’adresse d’une chaîne de
caractères comprise entre deux séparateur. Le dernier élement du tableau devra
être égal à 0 pour marquer la fin du tableau.
• Il ne doit pas y avoir de chaîne vide dans votre tableau. Tirez-en les conclusions
qui s’imposent.
• La chaîne qui sera transmise ne sera pas modifiable
*/
