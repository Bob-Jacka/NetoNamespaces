#include <iostream>

using namespace std;

void counting_function() 
{
    static int funcCount = 1;
    cout <<  "Количество вызовов функции counting_function(): " << funcCount << endl;
    funcCount++;
}

int main(int argc, char** argv)
{
    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }
}
