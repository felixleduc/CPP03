/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 20:52:00 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/24 14:15:00 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _Name( "Default" ), _HitPoints( 10 ),
_EnergyPoints( 10 ), _AttackDamage( 0 ) {
    std::cout << "ClapTrap " << this->_Name << " spawned" << std::endl;
    return ;
}

ClapTrap::ClapTrap( const std::string name ) : _Name( name ), _HitPoints( 10 ),
_EnergyPoints( 10 ), _AttackDamage( 0 ) {
    std::cout << "ClapTrap " << this->_Name << " spawned" << std::endl;
    return ;
}

ClapTrap::ClapTrap( unsigned int hp, unsigned int ep, unsigned int ad, std::string name ) :
_Name( name ), _HitPoints( hp ), _EnergyPoints( ep ), _AttackDamage( ad ) {
    std::cout << "ClapTrap " << this->_Name << " spawned" << std::endl; 
    return ;
}

ClapTrap::ClapTrap( const ClapTrap &cp ) {
    *this = cp;
    return ;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->_Name << " disappeared";
    return ;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap &rhs ) {
    this->_Name = rhs._Name;
    this->_HitPoints = rhs._HitPoints;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDamage = rhs._AttackDamage;
    return ( *this );
}

void    ClapTrap::attack( const std::string& target ) {
    if ( this->_HitPoints > 0 && this->_EnergyPoints > 0 ) {
        std::cout << "ClapTrap " << this->_Name << " attacks "
            << target << ", causing " << this->_AttackDamage
            << " points of damage!" << std::endl;
        this->_EnergyPoints -= 1;
    }
    if ( this->_HitPoints == 0 )
        std::cout << "ClapTrap " << this->_Name << " is dead :(" << std::endl;
    else if ( this->_EnergyPoints == 0 )
        std::cout << "ClapTrap " << this->_Name << " has no energy left :(" << std::endl;
    return ;
}

void    ClapTrap::takeDamage( unsigned int amount ) {
    if ( this->_HitPoints > 0 ) {
        std::cout << "ClapTrap " << this->_Name << " was attacked, causing "
            << amount << " points of damage!" << std::endl;
        if ( ( this->_HitPoints -= amount ) < 0 )
            this->_HitPoints = 0;
    }
    if ( this->_HitPoints == 0 )
        std::cout << "ClapTrap " << this->_Name << " is dead :(" << std::endl;
    else if ( this->_EnergyPoints == 0 )
        std::cout << "ClapTrap " << this->_Name << " has no energy left :(" << std::endl;
    return ;
}

void    ClapTrap::beRepaired( unsigned int amount ) {
    if ( this->_HitPoints > 0 && this->_EnergyPoints > 0 ) {
        std::cout << "ClapTrap " << this->_Name << " healed himself and gained "
            << amount << " hit points!" << std::endl;
        this->_HitPoints += amount;
        this->_EnergyPoints -= 1;
    }
    if ( this->_HitPoints == 0 )
        std::cout << "ClapTrap " << this->_Name << " is dead :(" << std::endl;
    else if ( this->_EnergyPoints == 0 )
        std::cout << "ClapTrap " << this->_Name << " has no energy left :(" << std::endl;
    return ;
}
