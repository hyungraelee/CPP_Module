/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:57:34 by hyunlee           #+#    #+#             */
/*   Updated: 2021/08/21 15:57:35 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>

class Span
{
private:
	std::vector<int> vec;
	Span() {}

public:
	Span(unsigned int n);
	~Span();
	Span(const Span&);
	Span& operator=(const Span&);

	void addNumber(int);
	void addNumber(std::vector<int>::iterator const &, std::vector<int>::iterator const &);

	int shortestSpan();
	int longestSpan();

	std::vector<int> getVector() const;
};

#endif
