/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:11:29 by gialexan          #+#    #+#             */
/*   Updated: 2023/09/06 08:05:34 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int	main(void)
{
	char	*temp;
	int		fd;

	fd = open("myfile.txt", O_RDONLY);
	while (1)
	{
		temp = get_next_line(fd);
		if (!temp)
			break ;
		printf("%s", temp);
		free(temp);
	}
	return (0);
}

/*
// Test function read
// Test file descriptor
// Test all value in BUFFER_SIZE -> flag = -D BUFFER_SIZE=2
int	main(int argc, char **argv)
{
	int		fd;
	ssize_t	bytes;
	char	buffer[256];

	fd = 0;
	bytes = 1;
	while (bytes != 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		buffer[bytes] = '\0';
		printf("%s", buffer);
	}
	return (0);
}
*/