/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:35:43 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/26 16:35:44 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(BRAIN_HPP)
# define BRAIN_HPP
# include <iostream>

class Brain {

private:
	std::string ideas[100];

public:
	Brain();
	Brain(Brain const &other);
	Brain &operator=(Brain const &other);
	~Brain();
	std::string const &getIdea(int index) const;
};

#endif // BRAIN_HPP

