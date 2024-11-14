//示例代码 cv::Vec类的初始化与基本运算
#include "stdafx.h"
#include "opencv.hpp"

using namespace std;
int main(){
    //定义与初始化
    cv::Vec<int,3> myVec;//定义3维‘int数据类型’向量
    for(int i = 0; i < 3; i++)//给向量赋值
        myVec[i] = i;
    cv::Vec3i v3i(0,1,2);
    //定义了v3i向量<0,1,2>,由于有预定义typedef cv::Vec<int,3> Vec3i;
    //                            cv::Vec3i v3i(0,1,2);
    //                       等价于cv::Vec<int,3> v3i(0,1,2);
    cv::Vec2d v2d(1.2,2.4);//同理，double类型
    cv::Vec2d v2d_1(v2d);//定义了一个cv::Vec2d类型的变量v2d_1变量，并用v2d来初始化它

    //访问下标
    cout << "myVec[0] = " << myVec[0] << endl;
    cout << "myVec[1] = " << myVec[1] << endl;
    cout << "myVec[2] = " << myVec[2] << endl << endl;//跟两个是因为endl不仅有刷新输出区的作用，还有换行的作用。
    
    cout << "v2d_1(0) = " << v2d_1(0) << endl;//[]与()都能访问
    //cout <<...
    //同理还可输出以上其他的向量

    //计算
    cv::Vec3f v1(1,0,0);
    cv::Vec3f v2(1,1,0);
    cv::Vec3f v3;
    cout << "v1 = " << v1 << endl;
    cout << "v2 = " << v2 << endl;
    cout << "v1 点乘 v2 = " << v1.dot(v2) << endl;//点积    1
    cout << "v1 * v2 = " << v1.cross(v2) << endl;//叉积    [0,0,1]
    cout << "v1 + v2 = " << v1 + v2 << endl;//加    [2,1,0]
    cout << "v1 - v2 = " << v1 - v2 << endl;//减    [0,-1,0]
    cout << "v1 * 2 = " << v1 * 2 << endl;//乘标量    [2,0,0]
    cout << "(v1 == v2) = " << (v1 == v2) << endl;//0
    cout << "(v1 != v2) = " << (v1 != v2) << endl;//1
    cout << "(v1 += v2) = " << (v1 += v2) << endl << endl;//[2,1,0]

    system("PAUSE");
    return 0;
}