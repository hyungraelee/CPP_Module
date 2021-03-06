/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:57:29 by hyunlee           #+#    #+#             */
/*   Updated: 2021/08/21 17:58:06 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n) {
	this->vec.reserve(n);
}

Span::~Span() {
}

Span::Span(const Span& other) {
	this->vec = other.getVector();
}

Span& Span::operator=(const Span& other) {
	if (this != &other) {
		this->vec = other.getVector();
	}
	return (*this);
}

void Span::addNumber(int num) {
	if (this->vec.size() < this->vec.capacity())
		this->vec.push_back(num);
	else
		throw std::overflow_error("Error: Vector Overflow!");
}

void Span::addNumber(std::vector<int>::iterator const & begin, std::vector<int>::iterator const & end) {
	std::vector<int>::iterator it = begin;

	for (; it != end; it++) {
		if (this->vec.size() < this->vec.capacity())
			this->vec.push_back(*it);
		else
			throw std::overflow_error("Error: Vector Overflow!");
	}
}

int Span::shortestSpan() {
	if (this->vec.size() <= 1)
		throw std::runtime_error("Error: There is no span to find!");
	std::vector<int> copy = this->vec;
	sort(copy.begin(), copy.end());

	std::vector<int>::iterator prev_it = copy.begin();
	std::vector<int>::iterator next_it = ++copy.begin();
	int minSpan = *next_it - *prev_it;

	for ( ; next_it != copy.end(); prev_it++, next_it++) {
		if ((*next_it - *prev_it) < minSpan)
			minSpan = (*next_it - *prev_it);
	}

	return (minSpan);
}

int Span::longestSpan() {
	if (this->vec.size() <= 1)
		throw std::runtime_error("Error: There is no span to find!");
	std::vector<int> copy = this->vec;
	sort(copy.begin(), copy.end());

	return (copy.back() - copy.front());
}

std::vector<int> Span::getVector() const {
	return (this->vec);
}
