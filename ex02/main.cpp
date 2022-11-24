/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 20:51:57 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/24 14:13:28 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void ) {
    ScavTrap    player1( "Jules" );
    
    player1.attack( "Guy" );
    player1.guardGate();
    player1.takeDamage( 50 );
    player1.beRepaired( 5 );
    player1.takeDamage( 100 );
    player1.beRepaired( 10 );
    return (0);
}