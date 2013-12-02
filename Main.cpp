/*
 * main.cpp
 *
 *  Created on: 29.11.2013
 *      Author: Elaine Archimedes Fynn
 */

#include <iostream>
#include <cstdlib>

int main(int argc, const char* argv[]) {

	auto pointless = [] () { std::cout << "Hello World!" << std::endl; };
	pointless();

	return EXIT_SUCCESS;
}
