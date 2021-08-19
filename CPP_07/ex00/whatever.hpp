/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:33:03 by hyunlee           #+#    #+#             */
/*   Updated: 2021/08/19 15:33:04 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <class T>
void swap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <class T>
T min(T& a, T& b) {
	if (a < b)
		return (a);
	else
		return (b);
}

template <class T>
T max(T& a, T& b) {
	if (a > b)
		return (a);
	else
		return (b);
}

#endif
