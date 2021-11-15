#include <iostream>

using namespace std;

int main()
{
    std::cout << "Merhaba, Sayi tahmin oyununa hosgeldin." << endl;

    int a;
    int number = 43;
    int upNumber;
    int doneNumber;

    while (true)
    {
        std::cout << "Tahmin et cikmak icin 101 yaz :";
        std::cin >> a;
        if (a == 43)
        {
            std::cout << "Kazandin.";
            break;
        }
        if (a == 101)
        {
            std::cout << "Tekrar gorusmek uzere!!";
            break;
        }
        if (a < number)
        {
            std::cout << "Tahmin et cikmak icin 101 yaz :";
            std::cin >> upNumber;
            if (upNumber == 101)
            {
                std::cout << "Tekrar gorusmek uzere!!";
                break;
            }
            if (upNumber == 43)
            {
                std::cout << "Kazandin.";
                break;
            }
        }
        else if (a > number)
        {
            std::cout << "Tahmin et cikmak icin 101 yaz :";
            std::cin >> doneNumber;
            if (doneNumber == 101)
            {
                std::cout << "Tekrar gorusmek uzere!!";
                break;
            }
            if (doneNumber == 43)
            {
                std::cout << "Kazandin.";
                break;
            }
        }
    }
}
