/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:22:11 by yel-mota          #+#    #+#             */
/*   Updated: 2025/04/09 17:15:06 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_error_close(char *str, char *mess, int fd)
{
	free(str);
	ft_putstr_fd(mess, 2);
	if (fd > 0)
		close(fd);
	exit(1);
}

void	ft_error_0(char *mess)
{
	ft_putstr_fd(mess, 2);
	exit(1);
}

void	ft_free_all(char *str, char *str2, char *mess, int fd)
{
	free(str);
	free(str2);
	ft_putstr_fd(mess, 2);
	if (fd > 0)
		close(fd);
	exit(1);
}

char	*ft_free_map(char **map)
{
	int	i;

	i = 0;
	while (map[i] != NULL)
	{
		free(map[i]);
		i++;
	}
	free(map);
	return (NULL);
}
