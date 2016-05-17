/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiboitel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/17 16:56:51 by tiboitel          #+#    #+#             */
/*   Updated: 2016/05/17 19:24:37 by tiboitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Wolf3D/wolf3d.h>

int		wolf3d_loader(t_wolf3d *wolf)
{
	char	buffer[1024];

	ft_bzero(buffer, 1024);
	if (readfile("maps/intro.m3d", buffer) == -1)
	{
		ft_putstr_fd("Unable to read intro.m3d. Programme going to quit.\n", 2);
		return (-1);
	}
	if (wolf3d_init_map(wolf->map, buffer) == -1)
	{
		ft_putstr_fd("Unable to load intro.m3d into memory. Programme going to quit\n", 2);
	}
	return (1);
}
