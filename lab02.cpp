#include <iostream>

int main()
{
    std::cout << "Enter the numbers x and y" << std::endl;
    int x = 0;
    std::cin >> x;
    int y = 0;
    std::cin >> y;
    if (x % 2 == 0 && y % 2 == 0)
    {
        std::cout << "Even numbers" << std::endl;
    }
    else
    {
        std::cout << "Condition not met" << std::endl;
    }
    if (x < 20 || y < 20)
    {
        std::cout << "One of the numbers is less than 20" << std::endl;
    }
    else
    {
        std::cout << "Condition not met" << std::endl;
    }
    if (x == 0 || y == 0)
    {
        std::cout << "One of the numbers is 0" << std::endl;
    }
    else
    {
        std::cout << "Both numbers are not 0" << std::endl;
    }
    std::cout << "Enter the number z" << std::endl;
    int z = 0;
    std::cin >> z;
    if (x < 0 && y < 0 && z < 0)
    {
        std::cout << "The numbers are negative" << std::endl;
    }
    else
    {
        std::cout << "The number are positive" << std::endl;
    }
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
    if (p.first == v.first || p.second == v.second)
    {
        std::cout << "Threatens" << std::endl;
    }
    else
    {
        std::cout << "Does not threaten" << std::endl;
    }
    return 0;
}

