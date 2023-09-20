/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:07:34 by hcherpre          #+#    #+#             */
/*   Updated: 2022/12/02 16:53:52 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) {

	int 	a[5] = {2, 4, 5, 6, 7};
	char	b[5] = {'a', 'b', 'c', 'd', 'e'};

	for (int i = 0; i < 5; i++)
	{
		std::cout << "a[i] = " << a[i] << std::endl;
	}
	for (int i = 0; i < 5; i++)
	{
		std::cout << "b[i] = " << b[i] << std::endl;
	}
	::iter(a, 5, &putstr);
	std::cout <<"**\n";
	::iter(b, 5, &putstr);
	return 0;
}