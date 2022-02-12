/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defines.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:20:42 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 15:18:50 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINES_H
# define DEFINES_H

# ifndef COLORS
#  define CLOROS
#  define YELLOW "\033[0;33m"
#  define WHITE "\033[0;37m"
# endif

# ifndef ERROR_MESSAGE
#  define ERROR_MESAGE
#  define EVP "validation error\n"
#  define ERS "please remove repeats symbols\n"
#  define ESN "your numbers is sorted\n"
# endif

# ifndef VALUE
#  define VALUE
#  define TRUE 1
#  define FALSE 0
# endif

#endif