/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:06:45 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/12/03 15:55:36 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
int	main()
{
	int		fd;
	char	*line;

	fd = open("text", O_RDONLY);
	while (line = get_next_line(fd))
	{
		printf("%s\n", line);
		free(line);
	}
	return (0);
}