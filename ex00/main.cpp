/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:41:26 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/12/18 13:47:33 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main(){
	std::cout << "vector" << std::endl;
	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
		easyfind(vec, 5);
	}
	std::cout << std::endl;
	std::cout << "list" << std::endl;
	std::list<int> lst;
	for (int i = 0; i < 10; i++)
	{
		lst.push_back(i);
		easyfind(lst, 5);
	}
	std::cout << std::endl;
	std::cout << "deque" << std::endl;
	std::deque<int> deq;
	for (int i = 0; i < 10; i++)
	{
		deq.push_back(i);
		easyfind(deq, 5);
	}
}
