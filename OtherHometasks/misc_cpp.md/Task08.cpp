/* 
Задача 8. Вывести числа от 1 до 100 по следующему правилу:

если число делится на 3, вывести вместо него слово Foo;
если число делится на 5, вывести вместо него слово Bar;
если число делится и на 3 и на 5, вывести слово FooBar;
иначе вывести само число.
*/

#include <iostream>

int main()
{
    char Foo[] = "Foo";
    char Bar[] = "Bar";
    char FooBar[] = "FooBar";

    for (int i = 1; i <= 100; ++i)
    {
        if (i % 3 == 0)
            std::cout << Foo << std::endl;
        else if (i % 5 == 0)
        {
            std::cout << Bar << std::endl;
        }
        else
            std::cout << i << std::endl;
    }
}
