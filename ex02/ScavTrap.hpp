/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:03:09 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/23 15:26:35 by fleduc           ###   ########.fr       */
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

    void  guardGate( void );
};

#endif
