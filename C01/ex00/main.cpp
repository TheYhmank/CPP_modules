/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:30:56 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/10 13:00:17 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z;

    z = newZombie("John");
    z->announce();

    randomChump("Steve");
    randomChump("Bob");

    delete z;
    return 0;
}
