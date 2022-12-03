/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:51:20 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/12/03 18:00:59 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
One reason is you want to change the value of the pointer passed to a function as the function argument, to do this you require pointer to a pointer.

In simple words, Use ** when you want to preserve (OR retain change in) the Memory-Allocation or Assignment even outside of a function call. (So, Pass such function with double pointer arg.)

This may not be a very good example, but will show you the basic use:

#include <stdio.h>
#include <stdlib.h>

void allocate(int **p)
{
    *p = (int *)malloc(sizeof(int));
}

int main()
{
    int *p = NULL;
    allocate(&p);
    *p = 42;
    printf("%d\n", *p);
    free(p);
}
*/
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*buff;
	static char	*string;
	char		*line;
	int			ret;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	if (!string)
		string = ft_strdup("");
	//ret = read (fd, buff, BUFFER_SIZE); //read BUFFER_SIZE from fd, save to buffer
	//buff[ret] = '\0';
	//if (ret == -1)
}

int	read_line(int fd, char **buff, char **string, char **line)
{
	int		ret;
	char	*temp;

	ret = 1;
	while (ft_strchr(*string, '\n') == 0 && ret > 0)
	{
		ret = read (fd, buff, BUFFER_SIZE);
		buff[ret] = '\0';
		temp = *string;
		*string = ft_strjoin(*string, *buff);
		free(temp);
	}
	free(*buff);
	if (ft_strchr(*string, '\n') != 0)
	{

	}
}