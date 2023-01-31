/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liperman <liperman@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:27:40 by liperman          #+#    #+#             */
/*   Updated: 2022/07/20 15:37:25 by liperman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"

int main (void)
{
	int		file;
	char	*line;

	file = open("fileDescriptor.txt", O_RDONLY);
	line = get_next_line(file);
	printf("%s\n", line);
	return (0);
}
