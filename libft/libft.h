/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:50:16 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/22 21:05:51 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *str);
char	*strnstr(const char *haystack, const char *needle, size_t len);

#endif
