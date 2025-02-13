/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 11:02:56 by kawaharadar       #+#    #+#             */
/*   Updated: 2025/02/13 11:37:30 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	std::cout << "push(5) -> push(17)" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "\ntop()" << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << "\npop()" << std::endl;
	mstack.pop();
	std::cout << "\nsize()" << std::endl;
	std::cout << mstack.size() << std::endl;

	std::cout << "\npush(3) -> push(5) -> push(737) -> push(0)" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "\nbegin()" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	std::cout << "end()" << std::endl;
	MutantStack<int>::iterator ite = mstack.end();

	std::cout << "\ntest increment and decrement" << std::endl;
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}