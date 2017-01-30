/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatime <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 15:29:17 by mmatime           #+#    #+#             */
/*   Updated: 2017/01/30 18:30:57 by mmatime          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int fd;
	char *line = NULL;

	fd = open(argv[1], O_RDONLY);
	printf("%d\n", get_next_line(fd, &line));
	printf("%s", line);
	return (0);
}
