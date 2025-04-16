/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:21:29 by rmakoni           #+#    #+#             */
/*   Updated: 2025/04/16 16:00:40 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iomanip>
# include <iostream>
# include <string>
class Weapon
{
  private:
	std::string type;

  public:
	Weapon();

	~Weapon();
	std::string getType(void);
	void setTpye(std::string type);
};

#endif