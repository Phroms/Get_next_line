/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:58:10 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/06 17:54:42 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>

/* PROTOTIPO DEL GET_NEXT_LINE */

char	*get_next_line(int fd);

/* FUNCIONES ADICIONALES */

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);

/* FUNCIONES QUE UTILIZARE */

#endif
