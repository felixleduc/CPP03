/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 20:51:57 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/24 14:08:10 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
    ClapTrap    player1( "Jules" );
    
    player1.attack( "Guy" );
    player1.takeDamage( 8 );
    player1.beRepaired( 2 );
    player1.attack( "Phillipo" );
    player1.takeDamage( 5 );
    return (0);
}