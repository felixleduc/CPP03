/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 20:52:02 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/22 21:35:31 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap {
  protected:
    std::string     _Name;
    int             _HitPoints;
    int             _EnergyPoints;
    int             _AttackDamage;
  public:
    ClapTrap( void );
    ClapTrap( const std::string name );
    ClapTrap( unsigned int hp, unsigned int ep, unsigned int ad, std::string name );
    ClapTrap( const ClapTrap& cp );
    ~ClapTrap();

    ClapTrap&   operator=( const ClapTrap& rhs );

    void    attack( const std::string& target );
    void    takeDamage( unsigned int amount );
    void    beRepaired( unsigned int amount );
    void    setAttackDamage( unsigned int amount );
    void    stats( void ) const;
};
