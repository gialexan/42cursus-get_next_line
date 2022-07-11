/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:22:33 by gialexan          #+#    #+#             */
/*   Updated: 2022/07/07 16:26:52 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "get_next_line.h"

// test function read
// test file descriptor
// test all value in BUFFER_SIZE -> flag = -D BUFFER_SIZE=2
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
