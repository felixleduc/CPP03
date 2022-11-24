/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:03:09 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/24 13:46:26 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
  public:
    ScavTrap( void );
    ScavTrap( const std::string name );
    ScavTrap( const ScavTrap& cp );
    ~ScavTrap();

    ScavTrap&   operator=( const ScavTrap& rhs );

    void  attack( const std::string& target );
    void  guardGate( void );
};

#endif
