/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 20:52:00 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/22 21:37:16 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _Name( "Default" ), _HitPoints( 100 ),
_EnergyPoints( 50 ), _AttackDamage( 20 ) {
    std::cout << "ClapTrap " << this->_Name << " spawned" << std::endl;
    return ;
}

ClapTrap::ClapTrap( const std::string name ) : _Name( name ), _HitPoints( 100 ),
_EnergyPoints( 50 ), _AttackDamage( 20 ) {
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
    return ;
}

void    ClapTrap::takeDamage( unsigned int amount ) {
    if ( this->_HitPoints > 0 ) {
        std::cout << "ClapTrap " << this->_Name << " was attacked, causing "
            << amount << " points of damage!" << std::endl;
        this->_HitPoints -= amount;
    }
    return ;
}

void    ClapTrap::beRepaired( unsigned int amount ) {
    if ( this->_HitPoints > 0 && this->_EnergyPoints > 0 ) {
        std::cout << "ClapTrap " << this->_Name << " healed himself and gained "
            << amount << " hit points!" << std::endl;
        this->_HitPoints += amount;
        this->_EnergyPoints -= 1;
    }
    return ;
}

void    ClapTrap::setAttackDamage( unsigned int amount ) {
    this->_AttackDamage = amount;
    return ;
}

void    ClapTrap::stats( void ) const {
    std::cout << this->_Name << "'s stats:" << std::endl;
    std::cout << "Hit points: " << this->_HitPoints << std::endl;
    std::cout << "Energy points: " << this->_EnergyPoints << std::endl;
    std::cout << "Attack damage: " << this->_AttackDamage << std::endl;
    return ;
}