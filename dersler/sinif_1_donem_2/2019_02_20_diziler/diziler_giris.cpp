#include <iostream>

//Main
int main(int argc, char* argv[])
{
    int ma1 = 3;
    int ma2 = 3;
	int ornek_matris[ma1][ma2];

    for(int i = 0; i < ma1; ++i)
    {
        for(int j = 0; j < ma2; ++j)
        {
            std::cout << "[" << i << "]" << "[" << j << "]: ";
            std::cin >> ornek_matris[i][j];
        }
    }

    std::cout << "\nMatris:\n       ";
    for(int i = 0; i < ma1; ++i)
    {
        for(int j = 0; j < ma2; ++j)
        {
            std::cout << ornek_matris[i][j] << " ";
        }
        std::cout << "\n       ";
    }
    std::cout << "\n";
    return 0;
}
