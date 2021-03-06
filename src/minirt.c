/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 17:49:02 by vlageard          #+#    #+#             */
/*   Updated: 2020/08/10 15:22:34 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void	check_options(int ac, char **av, t_prog *prog)
{
	if (ac == 3)
	{
		if (!ft_strncmp(av[2], "-save", 4))
			prog->export = 1;
	}
}

int		main(int ac, char **av)
{
	t_prog	*prog;

	if (ac >= 2)
	{
		if (!(prog = init_prog()))
		{
			perror("Error\n");
			return (0);
		}
		check_options(ac, av, prog);
		parse_name(av[1], prog);
		parse_file(av[1], prog);
		if (prog->export != 1)
			init_win(prog->win_width, prog->win_height, prog);
		compute_image(prog);
		if (prog->export != 1)
		{
			mlx_hook(prog->win_ptr, 17, 1L << 17, exit_callback, prog);
			mlx_key_hook(prog->win_ptr, key_callback, prog);
			mlx_expose_hook(prog->win_ptr, expose_callback, prog);
			mlx_loop(prog->mlx_ptr);
		}
		quit(prog);
	}
	return (0);
}
