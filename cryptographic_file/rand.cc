#include <iostream>
#include <cstdlib>

int main()
{

    int retry; // もう一度？
    int Rand_MAX;

    std::cout << "この処理系では0～" << RAND_MAX << "の乱数が生成できます。\n" << std::endl;

    do {
        std::cout << "\n乱数" << rand() << "を生成しました。\n"<< std::endl;

        std::cout << "もう一度？ … (0)いいえ (1)はい：" << std::endl;
        std::cin >> retry;

    } while (retry == 1);

    return (0);
}