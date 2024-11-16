/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-r <bpires-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:16:57 by bpires-r          #+#    #+#             */
/*   Updated: 2024/11/16 15:18:16 by bpires-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

// int	main(void)
// {
// 	t_list *struct1 = ft_lstnew("capybara");
// 	t_list	*struct2 = ft_lstnew("batman");
// 	ft_lstadd_front(&struct1, struct2);
// 	printf("%s\n", (char *)struct1->content);
// 	printf("%s\n", (char *)struct1->next->content);
// 	return (0);
// }