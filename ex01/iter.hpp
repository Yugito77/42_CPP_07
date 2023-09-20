/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:08:59 by hcherpre          #+#    #+#             */
/*   Updated: 2022/12/02 16:49:30 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <string>
#include <iostream>

template <typename T>

void    iter(T tab[], int size, void (*do_something)(T const &))
{
    for(int i = 0; i < size; i++)
    {
        do_something(tab[i]);
    }
}

template <typename T>

void    putstr(T const& elem)
{
    std::cout<<elem<<std::endl;
}

#endif