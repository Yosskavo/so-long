/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:22:41 by yel-mota          #+#    #+#             */
/*   Updated: 2025/04/08 16:22:42 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_tablen(const char **s)
{
	int	i;

	i = 0;
	while (s[i] != NULL)
		i++;
	return (i);
}
