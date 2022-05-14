#include <iostream>
using namespace std;


//Polygon - багатокутник
//Triangle - трикутник
//rectangle - прямокутник
//Area - площа



class Polygon
{
public:
    Polygon(){
        int N, sum;
        cout << "Введите количество вершин: " << endl;
        cout << "N = ";
        cin >> N;
        struct Square
        {
            int x;
            int y;
        }
        A[N];
        cout << "Введите координаты:" << endl;
        for (int i = 0; i < N; i++)
        {
            cout << "x" << i + 1 << ": ";
            cin >> A[i].x;
            cout << "y" << i + 1 << ": ";
            cin >> A[i].y;
        }
        A[N].x = A[0].x;
        A[N].y = A[0].y;
        sum = 0;
        for (int i = 1; i < N + 1; i++)
        {
            sum += (A[i - 1].x * A[i].y - A[i - 1].y * A[i].x);
        }
        cout << "Площадь данного многоугольника: ";
        cout.precision(2);
        cout << fixed << abs((double)sum / 2) << endl;
        cin.get();
        return ;
    }
    ~Polygon(){}
};


class Rectangle : public Polygon
{
public:
    Rectangle() {
        
        double a, b, square, perimeter;
        std::cout << "Enter a: ";
        std::cin >> a;
        std::cout << "Enter b: ";
        std::cin >> b;
        square = a * b;
        perimeter = 2 * (a + b);
        std::cout << "Area: " << square << std::endl;
        std::cout << "Perimeter: " << perimeter << std::endl;

        return ;
    }

    virtual ~Rectangle() = 0;

    
};


class Triangle : public Polygon
{
public:
    Triangle() {
        double x1, x2, x3, y1, y2, y3, p, a, b, c, s;
        scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
        a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
        c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
        p = (a + b + c) / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("P = %lf\nS = %lf", p * 2, s);
        return ;
    }
    ~Triangle() {}
};


int main()
{
    


}