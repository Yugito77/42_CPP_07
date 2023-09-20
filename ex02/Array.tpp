/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:37:34 by hcherpre          #+#    #+#             */
/*   Updated: 2022/12/02 16:44:04 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>

Array<T>::Array() : _rawArray(NULL), _size(0)
{
}

template <typename T>

Array<T>::~Array()
{
	if (this->_rawArray != NULL)
		delete [] this->_rawArray;
}

template <typename T>

Array<T>::Array(unsigned int n) : _rawArray(new T[n]), _size(n)
{
	for(unsigned int i = 0; i < n; i++)
	{
		_rawArray[i] = T();
	}
}

template <typename T>

Array<T>::Array(Array<T> const& cpy) : _rawArray(new T[cpy.size()])
{
	this->_size = cpy._size;
	for(size_t i = 0; i < cpy.size(); i++)
	{
		this->_rawArray[i] = cpy._rawArray[i];
	}
}

 /*****************************************************************************************************/

template <typename T>

Array<T>&	Array<T>::operator=(Array<T> const& cpy)
{
	if (this == &cpy)
		return (*this);
	delete [] this->_rawArray;
    this->_size = cpy._size;
	this->_rawArray = new T[cpy.size()];
	for(size_t i = 0; i < cpy.size(); i++)
	{
		this->_rawArray[i] = cpy._rawArray[i];
	}
	return (*this);
}

template <typename T>

T&	Array<T>::operator[](size_t position)
{
	if (position >= this->size())
		throw Array<T>::OutofRange();
	return (this->_rawArray[position]);
}

 /*****************************************************************************************************/

template <typename T>

unsigned int	Array<T>::size() const
{
	return (this->_size);
}

 /*****************************************************************************************************/

template <typename T>

const char *Array<T>::OutofRange::what() const throw()
{
	return ("Array::OutofRangeException\n");
}