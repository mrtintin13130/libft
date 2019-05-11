/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 15:46:42 by mathomas          #+#    #+#             */
/*   Updated: 2019/05/03 15:14:47 by mathomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int		*mem;
	size_t	i;

	i = -1;
	mem = malloc(size);
	if (mem == NULL)
		return (NULL);
	while (++i < size)
		mem[i] = 0;
	return (mem);
}
