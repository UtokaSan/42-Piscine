/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:02:31 by fboulbes          #+#    #+#             */
/*   Updated: 2024/09/11 09:43:18 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0 || n < 0)
	{
		return (0);
	}
	while ((i < n) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/**
int main(void)
{
	char s1[] = "Salut1";
	char s2[] = "Salut1dadadaawdadad";

	int res;

	res = ft_strncmp(s1, s2, 20);
	printf("%i\n", res);
	printf("%d", strncmp(s1, s2, 20));
}
*/
