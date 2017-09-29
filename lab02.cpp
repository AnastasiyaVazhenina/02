#include <iostream>

int main()
{ // каждое из чисел X и Y нечетное
    std::cout << "Enter the numbers x and y" << std::endl;
    int x = 0;
    std::cin >> x;
    int y = 0;
    std::cin >> y;
    if (x % 2 != 0 && y % 2 != 0)
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
    // только одно из чисел X и Y меньше 20
    if (x < 20 || y < 20)
    {
        std::cout << "One of the numbers is less than 20" << std::endl;
    }
    else
    {
        std::cout << "Condition not met" << std::endl;
    }
    // хотя бы одно из чисел X и Y равно нулю
    if (x == 0 || y == 0)
    {
        std::cout << "One of the numbers is 0" << std::endl;
    }
    else
    {
        std::cout << "Both numbers are not 0" << std::endl;
    }
    // каждое из чисел X, Y, Z отрицательное
    std::cout << "Enter the number z" << std::endl;
    int z = 0;
    std::cin >> z;
    if (x < 0 && y < 0 && z < 0)
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
    // только одно из чисел X, Y и Z кратно пяти
    int s = x % 5;
    int g = y % 5;
    int j = z % 5;
    if ((s == 0 && g != 0 && j !=0) || (s != 0 && g == 0 && j != 0) || (s != 0 && g != 0 && j == 0))
    {
        std::cout << "Done" << std::endl;
    }
    else
    {
        std::cout << "Not done" << std::endl;
    }
    // хотя бы одно из чисел X, Y, Z больше 100
    if (x > 100 || y > 100 || z > 100)
    {
        std::cout << "Done" << std::endl;
    }
    else
    {
        std::cout << "Not done" << std::endl;
    }
    std::cout << "Enter nambers <8" << std::endl;
    std::pair<int, int> p;
    std::cin >> p.first;
    std::cin >> p.second;
    std::cout << "Enter numbers <8" << std::endl;
    std::pair <int, int> v;
    std::cin >> v.first;
    std::cin >> v.second;
    // ладья
    if (p.first == v.first || p.second == v.second)
    {
        std::cout << "Threatens" << std::endl;
    }
    else
    {
        std::cout << "Does not threaten" << std::endl;
    }
    // слон
    if (std::abs(p.first - v.first) == std::abs(p.second - v.second))
    {
        std::cout << "Threatens" << std::endl;
    }
    else
    {
        std::cout << "Does not threaten" << std::endl;
    }
    // король
    if (std::abs(p.first - v.first) == 1 && std::abs(p.second - v.second) == 1)
    {
        std::cout << "Can get" << std::endl;
    }
    else
    {
         std::cout << "Can not get" << std::endl;
        
    }
    // ферзь
    if (std::abs(p.first - v.first) == std::abs(p.second - v.second) || p.first == v.first || p.second == v.second)
    {
        std::cout << "Threatens" << std::endl;
    }
    else
    {
        std::cout << "Does not threaten" << std::endl;
    }
    // пешка
    if (std::abs(p.first - v.first) == 1 && std::abs(p.second - v.second) == 0)
    {
        std::cout << "Can get" << std::endl;
    }
    else if (std::abs(p.first - v.first) == 1 && std::abs(p.second - v.second) == 1)
         {
            std::cout << "Beats the opponent's piece or pawn" << std::endl;
         }
         else
         {
            std::cout << "Can not get" << std::endl;
         }
    // таблица умножения на 7
    for (unsigned int i = 1; i <= 9; ++i)
    {
        std::cout << i << " x " << 7 << " = " << i * 7 << std::endl;
    }
    // произведение от 8 до 15
    int c = 1;
    for (unsigned int i = 8; i <= 15; ++i)
    {
        c = c * i;
    }
    std::cout << "Composition=" << c << std::endl;
    // произведение всех целых чисел от a до 20
    std::cout << "Enter a (1 < a < 20)" << std::endl;
    int a = 0;
    std::cin >> a;
    int u = 1;
    for (unsigned int i = a; i <= 20; ++i)
    {
        u = u * i;
    }
    std::cout << "Composition=" << u << std::endl;
    // произведение всех целых чисел от 1 до b
    std::cout << "Enter b (1 < b < 20)" << std::endl;
    int b = 0;
    std::cin >> b;
    int t = 1;
    for (unsigned int i = 1; i <= b; ++i)
    {
        t = t * i;
    }
    std::cout << "Composition=" << t << std::endl;
    // произведение всех целых чисел от a до b
    std::cout << "Enter a,b (b >= a)" << std::endl;
    int a1 = 0;
    std::cin >> a1;
    int b1 = 0;
    std::cin >> b1;
    int n = 1;
    for (unsigned int i = a1; i <= b1; ++i)
    {
        n = n * i;
    }
    std::cout << "Composition=" << n << std::endl;
    return 0;
} 
