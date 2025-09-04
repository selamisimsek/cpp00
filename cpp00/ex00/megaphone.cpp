#include <iostream>

char my_toupper(char value)
{
	if((value >= 'a' && value <= 'z'))
		value -= 32;
	return value;
}

int main(int ac , char **av)
{
    int i = 1, j = 0;
	char value;
	
	if(ac > 1)
	{		
		while(av[i])
		{
			j = 0;
			while (av[i][j])
			{
				value = my_toupper(av[i][j]);
				std::cout << value;
				j++;
			}
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << "\n";
	return(0);
}

