#include <iostream>
#include <cstring>
using namespace std;

// Prototypes
template <typename T>
T search(T *str, T srch);

template <typename T>
T searchAll(T *str, T srch);


int main()
{
	char s_for;  // Search for variable
	char str[100] = "qtwblzknlkfmqugmtrbiqbbfjfukltvxyslrjeqxxozgdwfwcfybxkncdmgkextfhwoyqxmhpdungeblwrhbqfhvoaurhgwwdvi";  // Char string to be searched

	// Ask what to search for
	cout << "Search for: "; cin >> s_for;
	cout << "\nIn: " << str;

	// Run searching function
	searchAll(str, s_for);

	return 0;
}

// Search for one character in string (first one)
template <typename T>
T search(T *str, T srch)
{
	int i = 0;

	while (str[i] != srch)
	{
		i++;
	} cout << "\n\nElement: \'" << str[i] << "\' found at index [" << i << "]";
}

// Search for all characters in a string (Used template so it accepts characters and numbers)
template <typename T>
T searchAll(T *str, T srch)
{
	int count = 0;  // Word counter
	int len = strlen(str);  // Length of "str" variable
	int i;  // Variable for loop

	cout << "\n\nIndexes: ";
	for (i = 0; i < len; i++)
	{
		if (str[i] == srch)
		{
			count++;
			cout << "[" << i << "]\t";  // Output indexes where the element is found (Eg. [4] [2] [20])
		}
	} cout << "\nElement \'" << srch << "\' appears: " << count << " times" << endl;  // Show how many times x element appears

	return 0;
}
