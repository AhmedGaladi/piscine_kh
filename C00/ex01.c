#include <unistd.h>
void ft_print_alphabet(void)
{
	 char space = ' ';
        char c = 'a';
        while(c <= 'z')
        {
                write(1, &c, 1);
                write(1, &space, 1);
                c++;
        }

}

int main()
{
	ft_print_alphabet();
	return (0);
}
