// Secant Method.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#define WUCHA 0.00005
using namespace std;
double xiaohanshu(double x) {
    return (x * x * x - 3.00000 * x - 1.00000);
}
double hanshu(double x1, double x0) {
    return x1 - (xiaohanshu(x1) / (xiaohanshu(x1) - xiaohanshu(x0))) * (x1 - x0);
}

int main()
{
    int count = 0;
    double x1 = 1.8;
    double x0 = 2.0;
    while (abs(x1 - x0) > WUCHA) {
        double temp = x0;
        x0 = hanshu(x1, x0);
        x1 = temp;
        count++;
        cout <<"Xn第"<<count+1<< "次结果:" << x0 << endl;
    }
    
    cout << "迭代次数:" << count;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
