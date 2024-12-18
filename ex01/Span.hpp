/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:50:52 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/12/18 17:32:42 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>

class Span
{
private:
    std::vector<int> _vec;
    unsigned int _max_size;
	Span();

public:
    Span(unsigned int n);
    ~Span();
	Span(const Span &other);
	Span &operator=(const Span &other);

	void addNumber(int num);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	unsigned long shortestSpan() const;
	unsigned long longestSpan() const;
};
