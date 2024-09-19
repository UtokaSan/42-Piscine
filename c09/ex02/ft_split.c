/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:18:29 by fboulbes          #+#    #+#             */
/*   Updated: 2024/09/19 17:42:49 by fboulbes         ###   ########.fr       */
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

void	ft_cut_string(char *charset, char *str)
{
	int i;
	int j;
	int *pos;
	int *nw_string;
	int **nw_tab;
	int start;
	int count;
	char **result;

	i = 0;
	j = 0;
	start = 0;
	count = 0;
	pos = ft_search_charset(charset, str);
	while(pos[count] != -1)
		count++;
	result = malloc((count + 1) * sizeof(char *))
	while(pos[i] != -1)
	{
		int len = pos[i] - start
		nw_string = malloc((pos[i]) * sizeof(char));
		if (nw_string == NULL)
			return (NULL);
		while(str[j] != '\0')
		{
			if (j == pos[i])
				nw_string = str[start + j];
			j++;
		}
		start = pos[i] + ft_strlen(charset);
		i++;
	}
}

/**
char **ft_split(char *str, char *charset)
{
	int i;
	int *pos;
	i = 0;

	while(str[i] != '\0')
	{
		if (searchCharset(charset, str) > 0)
			j++;
	}
}
*/
int main(void)
{
	int *res;
	res = ft_search_charset("--", "Salut--Tu--");
	printf("%i", res[2]);
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
