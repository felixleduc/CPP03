/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 20:52:02 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/24 14:08:14 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
  private:
    std::string     _Name;
    int             _HitPoints;
    int             _EnergyPoints;
    int             _AttackDamage;
  public:
    ClapTrap( void );
    ClapTrap( std::string name );
    ClapTrap( const ClapTrap& cp );
    ~ClapTrap();

    ClapTrap&   operator=( const ClapTrap& rhs );

    void    attack( const std::string& target );
    void    takeDamage( unsigned int amount );
    void    beRepaired( unsigned int amount );
};

#endif
