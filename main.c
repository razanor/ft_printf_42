/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrepak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 19:04:54 by nrepak            #+#    #+#             */
/*   Updated: 2018/01/16 19:05:41 by nrepak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// #include <locale.h>

#define MACRO "%d\n", 200

int main(void)
{
	int a;
	int *d;

	a = ft_printf("{%10R}");
	printf("%d\n", a);
	a = printf("{%10R}");
	printf("%d\n", a);
	
	// wchar_t c = L'暖';
	// wchar_t b = L'ح';
	// setlocale(LC_ALL, " ");
	return (0);
}
