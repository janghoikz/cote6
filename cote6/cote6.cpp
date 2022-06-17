#include <iostream>
#include <string>
#include <vector>

int solution(int num) 
{
    int answer = 0;
    bool cos = true;
    while (cos)
    {
        if (num == 1)
        {
            break;
        }
        if (num % 2 == 0)
        {
            num = num / 2;
        }
        else if ( num % 2 != 0 )
        {
            num = (num * 3) + 1; 
        }
        else if (answer == 500)
        {
            return -1;
            break;
        }
        answer++;
    }
    std::cout << answer << std::endl;
    return answer;
}

int main()
{
    int number = 16;
    solution(number);
}