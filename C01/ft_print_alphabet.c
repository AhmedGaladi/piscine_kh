#include<unistd.h>

void ft_print_alphabets()
{
	char letter = 'a';

	while(letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}

int main()
{
	ft_print_alphabets();

	return (0);
}
