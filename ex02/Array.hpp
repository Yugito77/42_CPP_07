/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:10:13 by hcherpre          #+#    #+#             */
/*   Updated: 2022/12/02 16:43:24 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>
#include <exception>

template <typename T>

class	Array
{

	public :

		Array();	
		Array(unsigned int n);
		Array(Array<T> const& cpy);
		~Array();

		Array<T>&	operator=(Array<T> const& cpy);
		T&	operator[](size_t position);
		unsigned int	size() const;
		
		class OutofRange : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		
	private :

		T	*_rawArray;
		unsigned int	_size;
};

#endif