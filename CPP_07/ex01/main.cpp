#include "Iter.hpp"

int main()
{
	{
		int array[] = {1, 2, 3, 4, 5};

		std::cout << "-----INT-----" << std::endl;
		int size = sizeof(array) / sizeof(array[0]);
		iter(array, size, print);

		std::string arr[] = {"cat", "dog", "puppy"};

		std::cout << "-----STRING-----" << std::endl;
		int lenght = sizeof(arr) / sizeof(arr[0]);
		iter(arr, lenght, print);

		float ar[] = {1.09, 2.23, 3.56, 5.34};

		std::cout << "-----FLOAT-----" << std::endl;
		int number = sizeof(ar) / sizeof(ar[0]);
		iter(ar, number, print);
	}

    return (0);
}

