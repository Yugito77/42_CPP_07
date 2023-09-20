/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:53:11 by hcherpre          #+#    #+#             */
/*   Updated: 2022/11/24 17:03:46 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <string>
#include <iostream>

template <typename T>

void	swap(T& a, T& b)
{
	T	temp;
	
	temp = a;
	a = b;
	b = temp;
}

template <typename T>

T	min(const T& a, const T& b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>

T	max(const T& a, const T& b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif