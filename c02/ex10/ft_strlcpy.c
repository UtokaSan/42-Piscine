/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:21:20 by fboulbes          #+#    #+#             */
/*   Updated: 2024/09/10 15:18:39 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strcpy_length(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[size] = '\0';
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	if (ft_strlen(dest) > size - 1)
	{
		i = ft_strcpy_length(dest, src, size);
	}
	else
	{
		while (src[i] != '\0' && i < ft_strlen(dest))
		{
			dest[i] = src[i];
			i++;
		}
		dest[ft_strlen(dest)] = '\0';
	}
	return (i);
}
/**
int	main(void)
{
	char *turing = "To be or not to be";

	int dest[3];
	ft_strlcpy(dest, turing, 4);
	printf("%i\n", dest);
	return (0);
}
*/
