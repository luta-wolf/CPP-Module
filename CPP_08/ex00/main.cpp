#include "Easyfind.hpp"

int main()
{
	std::cout << std::boolalpha;
	int to_find = 3;
	int not_find = 100;
	int neg_find = -15;

	std::vector<int> cont;
	std::cout << "---------------VECTOR------------" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		cont.push_back(i);
		std::cout << i << " ";
	}
	std::cout << std::endl;

	std::cout << "Find int(vector) " << to_find << " : " << easyfind(cont, to_find) << std::endl;
	std::cout << "Find int(vector) " << not_find << " : " << easyfind(cont, not_find) << std::endl;
	std::cout << "Find int(vector) " << neg_find << " : " << easyfind(cont, neg_find) << std::endl;

	std::list<int> l;
	std::cout << "---------------LIST------------" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		l.push_back(i);
		std::cout << i << " ";
	}
	std::cout << std::endl;

	std::cout << "Find int(list) " << to_find << " : " << easyfind(l, to_find) << std::endl;
	std::cout << "Find int(list) " << not_find << " : " << easyfind(l, not_find) << std::endl;
	std::cout << "Find int(list) " << neg_find << " : " << easyfind(l, neg_find) << std::endl;

	std::array<int, 5> arr;
	std::cout << "---------------ARRAY------------" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		arr[i] = i;
		std::cout << i << " ";
	}
	std::cout << std::endl;

	std::cout << "Find int(array) " << to_find << " : " << easyfind(arr, to_find) << std::endl;
	std::cout << "Find int(array) " << not_find << " : " << easyfind(arr, not_find) << std::endl;
	std::cout << "Find int(array) " << neg_find << " : " << easyfind(arr, neg_find) << std::endl;

	return (0);
}
