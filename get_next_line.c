/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:56:43 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/12 19:13:35 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_storage(int fd, char *storage)
{
	int		read_bytes;
	char	*tmp_storage;

	tmp_storage = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!storage)
		return (free(storage));
	read_bytes = 69;
	while (ft_strchr && read_bytes > 0)
	{
		read_bytes = read(fd, tmp_storage, BUFFER_SIZE);
		if (read_bytes < 0)
		{
			free(tmp_storge)
				if(storage)
					free(storage);
			return (NULL);
		}
		tmp_storage[read_bytes] = '\0';
		storage = ft_strjoin(tmp_storage, storage);
	}
	free(tmp_storage);
	tmp_storage = NULL;
	return (storage);
}

static char	*extract_storage(char *storage)
{
	char	*aux;
	char	*line;
	int		len;

	aux = ft_strchr(storage, '\n');
	len = (aux - storage) + 1;
	line = ft_substr(storage, 0, len);
	if (!line)
		return (NULL);
	return (line);
}

static char	*clean_strage(char *storage)
{
	char	*new_storage;
	char	*character;
	int		len;

	character = ft_strchr(storage, '\n');
	if (!character)
	{
		new_storage = NULL;
		return (free_storage(&storage));
	}
	len = (character - storage) + 1;
	if (!storage[len])
		return (free_storage(&storage));
	new_storage = ft_substr(storage, len, ft_strlen(storage) - len);
	free_storage(&storage);
	if (!new_storage)
		return (NULL);
	return (new_storage);
}

static char	*free_storage(char *storage)
{
	free(storage);
	storage = NULL;
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char	*storage[3000];
	char 		line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	storage[fd] = read_storage(fd, storage[fd]);
	if (!storage[fd])
		return (NULL);
	line = extract_storage(storage[fd]);
	if (!line)
		return (free_storage(&storage[fd]));
	storage[fd] = clean_storage(storage[f]);
	return (line);
}
