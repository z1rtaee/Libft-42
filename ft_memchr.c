/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-r <bpires-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:54:19 by bpires-r          #+#    #+#             */
/*   Updated: 2024/11/08 15:29:51 by bpires-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((unsigned char *)&s[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *s = "ola";
// 	printf("My Func : %s\n", (char *)ft_memchr(s, 'a', sizeof(s)));
// 	printf("My Func : %p\n", ft_memchr(s, 'a', sizeof(s)));
// 	return (0);
// }