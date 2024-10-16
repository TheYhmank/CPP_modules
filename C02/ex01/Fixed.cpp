/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:53:19 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/16 09:58:22 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _rawBits(0)
{
    std::cout << "\n"; 
}

Fixed::~Fixed(void)
{
    std::cout << "\n";
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "\n";
    *this = src;
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "\n";
    if (this == &src)
        return (*this);
    this->_rawBits = src._rawBits;    
    return (*this);
}