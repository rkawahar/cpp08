/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 09:13:03 by kawaharadar       #+#    #+#             */
/*   Updated: 2025/02/13 11:31:10 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >

class MutantStack : public std::stack<T, Container> {
	public:
		MutantStack(void) {};
		~MutantStack(void) {};
		MutantStack(const MutantStack &other) {
			*this = other;
		};
		MutantStack& operator=(const MutantStack &other) {
			if (this != &other)
				*this = other;
			return *this;
		};

		typedef typename Container::iterator iterator;
		
		iterator begin(void) {
			return (this->c.begin());
		}
		
		iterator end(void) {
			return (this->c.end());
		}
};