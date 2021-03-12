curl https://gitlab.com/Beh_____/scripts/-/raw/master/test_c.sh --output test_c.sh
cd ex00
sh ../test_c.sh "void ft_putchar(char c);" "ft_putchar('A'); ft_putchar('\\\\n');"
cd ../ex01
sh ../test_c.sh "void ft_print_alphabet(void);" "ft_print_alphabet();"
cd ../ex02
sh ../test_c.sh "void ft_print_reverse_alphabet(void);" "ft_print_reverse_alphabet();"
cd ../ex03
sh ../test_c.sh "void ft_print_numbers(void);" "ft_print_numbers();"
cd ../ex04
sh ../test_c.sh "void ft_is_negative(int n);" "ft_is_negative(-1); ft_is_negative(0);"
cd ../ex05
sh ../test_c.sh "void ft_print_comb(void);" "ft_print_comb();"
cd ../ex06
echo "Generate template for ex06 to not flood output"
sh ../test_c.sh "void ft_print_comb2(void);" "ft_print_comb2();" "keep"
gcc -Wall -Werror -Wextra main.c ft_print_comb2.c
cd ../ex07
sh ../test_c.sh "void ft_putnbr(int n);" "ft_putnbr(-2147483648); ft_putnbr(-12345671); ft_putnbr(-4); ft_putnbr(0); ft_putnbr(9); ft_putnbr(10); ft_putnbr(12345678); ft_putnbr(214743647);"
cd ../ex08
sh ../test_c.sh "void ft_print_combn(int n);" 'ft_print_combn(5); printf("\\n"); ft_print_combn(9);'
echo "Finished running tests for c00..."
echo "DISCLAIMER: Tests may not cover all possible cases, evaluators still need to discuss logical structure of program"
rm ../test_c.sh
