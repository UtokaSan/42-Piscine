/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:58:02 by fboulbes          #+#    #+#             */
/*   Updated: 2024/09/10 18:38:16 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char str)
{
	if (!(str >= 'a' && str <= 'z'))
		return (0);
	else
		return (1);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_alpha(str[i]) == 1)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/**
int	main(void)
{
	char res[] = "sss ss 0s";
	ft_strupcase(res);
	printf("%s", res);
}
*/
