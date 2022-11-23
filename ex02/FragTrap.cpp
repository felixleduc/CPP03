/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:32:01 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/23 16:03:45 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap( 100, 100, 30, "Default" ) {
    std::cout << "ScavTrap " << this->_Name <<  " spawned" << std::endl; 
}

FragTrap::FragTrap( const std::string name ) : ClapTrap( 100, 100, 30, name ) {
    std::cout << "ScavTrap " << this->_Name <<  " spawned" << std::endl; 
}

FragTrap::FragTrap( const FragTrap& cp ) {
    *this = cp;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->_Name << " disappeared" << std::endl;
}

FragTrap&   FragTrap::operator=( const FragTrap& rhs ) {
    this->_Name = rhs._Name;
    this->_HitPoints = rhs._HitPoints;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDamage = rhs._AttackDamage;
    return ( *this );
}

void    FragTrap::highFivesGuys( void ) {
    std::cout << "ScavTrap " << this->_Name << " is asking for a high five!" << std::endl;
}
