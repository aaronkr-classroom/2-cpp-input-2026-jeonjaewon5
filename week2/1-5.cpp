#include <iostream>
#include <string>

int main()
{
    {
        std::string s = "a string";
        {
            std::string x = s + ", really";
            std::cout << s << std::endl;
            // 출력문을 x가 선언된 안으로 옮김
            std::cout << x << std::endl; 
        }
    }
    return 0;
}