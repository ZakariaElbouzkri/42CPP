/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:36:52 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/05 04:02:23 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Character_HPP_
#define _Character_HPP_

#include <iostream>
#include "ICharacter.hpp"
#define N 4

class	Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria*	_inventory[4];
	public:
		Character( std::string name );
		~Character( void );
		Character( Character const& rhs );
		Character&	operator=( const Character& rhs );

		std::string const& getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif
