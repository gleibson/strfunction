#include<iostream>
#include<string>

int main()
{
	char charr1[20];
	char charr2[20] = "jaguar";
	std::string str1;
	std::string str2 = "panther";


	//assignment for string objects and character arrays
	str1 = str2;
	strcpy(charr1, charr2); //copy charr1 to charr 2

							//appending for string objects and character arrays
	str1 += " paste";
	strcat(charr1, "juice");  // add juice to end of charr1

							  //finding the length of a string object and a C-style string
	int len1 = str1.size();
	int len2 = strlen(charr1); //obtain lenght of charr1

	std::cout << "The string " << str1 << " contains "
		<< len1 << " characters. " << std::endl;
	std::cout << "The string " << charr1 << " contains "
		<< len2 << " characters" << std::endl;

	return 0;

}