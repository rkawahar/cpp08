/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkawahar <rkawahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:50:54 by kawaharadar       #+#    #+#             */
/*   Updated: 2025/10/25 18:44:18 by rkawahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _max_size(0) {}

Span::Span(long n) : _max_size(n) {
	if (n < 0) 
		throw std::out_of_range("Int must be unsigned int");
}

Span::Span(const Span &other) : _max_size(other._max_size) {
	unsigned int size = other._vec.size();
	for (unsigned int i = 0; i < size; i++)
		_vec.push_back(other._vec[i]);
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        _max_size = other._max_size;
		_vec.clear();
		unsigned int size = other._vec.size();
		for (unsigned int i = 0; i < size; i++)
			_vec.push_back(other._vec[i]);
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int num)
{
	if (_vec.size() >= _max_size)
		throw std::out_of_range("Span is full");
	unsigned int i = 0;
	while (i < _vec.size() && _vec[i] < num)
		i++;
	_vec.insert(_vec.begin() + i, num);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_vec.size() + std::distance(begin, end) > _max_size)
		throw std::out_of_range("Span is full");
	unsigned int i = 0;
	while (i < std::distance(begin, end))
	{
		addNumber(*(begin + i));
		i++;
	}
}

unsigned long Span::shortestSpan() const
{
	if (_vec.size() < 2)
		throw std::out_of_range("No span");

	unsigned long min = static_cast<unsigned long>(_vec[1]) - static_cast<unsigned long>(_vec[0]);
	for (unsigned int i = 1; i < _vec.size(); i++)
		if (static_cast<unsigned long>(_vec[i]) - static_cast<unsigned long>(_vec[i - 1]) < min)
			min = static_cast<unsigned long>(_vec[i]) - static_cast<unsigned long>(_vec[i - 1]);
	return min;
}

unsigned long Span::longestSpan() const
{
	if (_vec.size() < 2)
		throw std::out_of_range("No span");

	unsigned long max = static_cast<unsigned long>(_vec[_vec.size() - 1]) - static_cast<unsigned long>(_vec[0]);
	return max;
}


