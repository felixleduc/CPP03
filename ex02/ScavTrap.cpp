/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:03:06 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/23 15:28:24 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap( 100, 50, 20, "Default" ) {
    std::cout << "ScavTrap " << this->_Name <<  " spawned" << std::endl; 
}

ScavTrap::ScavTrap( const std::string name ) : ClapTrap( 100, 50, 20, name ) {
    std::cout << "ScavTrap " << this->_Name <<  " spawned" << std::endl; 
}

ScavTrap::ScavTrap( const ScavTrap& cp ) {
    *this = cp;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->_Name << " disappeared" << std::endl;
}

ScavTrap&   ScavTrap::operator=( const ScavTrap& rhs ) {
    this->_Name = rhs._Name;
    this->_HitPoints = rhs._HitPoints;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDamage = rhs._AttackDamage;
    return ( *this );
}

void    ScavTrap::guardGate( void ) {
    std::cout << "ScavTrap " << this->_Name << " has entered Gate keeper mode" << std::endl;
}
