/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-r <bpires-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:25:59 by bpires-r          #+#    #+#             */
/*   Updated: 2024/11/16 14:49:01 by bpires-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s && s[i] && f)
	{
		f(i, &s[i]);
		i++;
	}
}

// void ft_putstrr(unsigned int i, char *s)
// {
// 	i = 0;
// 		write(1, s, 1);
// }
// int	main(void)
// {
// 	char *s = "america";
// 	ft_striteri(s, ft_putstrr);
// 	return (0);
// }
