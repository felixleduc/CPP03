/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:31:59 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/23 15:43:39 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
  public:
    FragTrap( void );
    FragTrap( const std::string name );
    FragTrap( const FragTrap& cp );
    ~FragTrap();

    FragTrap& operator=( const FragTrap& rhs );

    void  highFivesGuys( void );
};

#endif
