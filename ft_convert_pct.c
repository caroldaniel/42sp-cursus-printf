/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_pct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 22:06:35 by cado-car          #+#    #+#             */
/*   Updated: 2021/08/12 22:11:35 by cado-car         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert_pct(t_format *fmt, t_holder *h)
{
	h->argument = ft_strdup("%");
	h->len += 1;
}
