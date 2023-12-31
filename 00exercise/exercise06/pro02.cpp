#include <iostream>
#include <vector>

class Rect {
    int width, height;
public:
    Rect() : width{ 0 }, height{ 0 } {}
    Rect(int w, int h) : width{ w }, height{ h } {}
    void setW(int w) { width = w; }
    void setH(int h) { height = h; }
    int getW() const { return width; }
    int getH() const { return height; }
};

int main()
{
    int num;
    while (true)
    {
        std::cout << "몇 개의 사각형을 저장할까요?(1 ~ 10) ";
        std::cin >> num;

        if (num >= 1 && num <= 10)
        {
            std::vector<Rect> rectArray;
            for (int i = 1; i <= num; i++)
            {
                int width, height;
                std::cout << i << "번 사각형의 폭은 ? ";
                std::cin >> width;
                std::cout << i << "번 사각형의  넓이는 ? ";
                std::cin >> height;
                rectArray.push_back(Rect(width, height));
            }

            std::cout << std::endl << "저장된 사각형은 다음과 같습니다." << std::endl;
            for (int i = 0; i < num; i++) // 인덱스는 0부터 시작
            {
                std::cout << i + 1 << "번 사각형 : 폭 " << rectArray[i].getW() << ", 넓이 : " << rectArray[i].getH() << std::endl;
            }

            break;
        }
        else
        {
            std::cout << "다시 입력하세요 : " << std::endl;
        }
    }

    return 0;
}