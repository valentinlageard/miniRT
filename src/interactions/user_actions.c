/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user_actions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 19:00:32 by vlageard          #+#    #+#             */
/*   Updated: 2020/07/22 15:55:00 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void	change_camera(t_prog *prog)
{
	if (!prog->current_cam->next)
		prog->current_cam = prog->cams;
	else
		prog->current_cam = prog->current_cam->next;
	compute_image(prog);
}
