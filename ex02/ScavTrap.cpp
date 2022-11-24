/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:03:06 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/24 14:19:15 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap( 100, 50, 20, "Default" ) {
    std::cout << "ScavTrap " << this->_Name <<  " spawned" << std::endl; 
}

ScavTrap::ScavTrap( const std::string name ) : ClapTrap( 100, 50, 20, name ) {
    std::cout << "ScavTrap " << this->_Name <<  " spawned" << std::endl; 
}

ScavTrap::ScavTrap( const ScavTrap& cp ) : ClapTrap( cp ) {
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

void    ScavTrap::attack( const std::string& target ) {
    if ( this->_HitPoints > 0 && this->_EnergyPoints > 0 ) {
        std::cout << "ScavTrap " << this->_Name << " attacks "
            << target << ", causing " << this->_AttackDamage
            << " points of damage!" << std::endl;
        this->_EnergyPoints -= 1;
    }
    if ( this->_HitPoints == 0 )
        std::cout << "ScavTrap " << this->_Name << " is dead :( (can't attack)" << std::endl;
    else if ( this->_EnergyPoints == 0 )
        std::cout << "ScavTrap " << this->_Name << " has no energy left :( (can't attack)" << std::endl;
}
