//
//  main.cpp
//  stack
//
//  Created by wang on 2022/4/10.
//
#include "stack.h"
#include<iostream>
using namespace std;
int main(int argc, const char * argv[]) {

    stack s1;
    s1.getLength();
    int flag_=1;
    while(1)
    {
        int s;
        cout<<"输入1压入元素，输入2返回元素，输入3停止操作"<<endl;
        cin>>s;
        switch(s)
        {
            case 1:
                int d;
                cout<<"请输入你想要压入的元素的值"<<endl;
                cin>>d;
                s1.push(d);
                cout<<"当前栈为:"<<endl;
                s1.print();
                break;
            case 2:
                s1.pop();
                cout<<"当前栈为:"<<endl;
                s1.print();
                break;
            case 3:
                flag_=0;
                break;
        }
        if(flag_==0)
            break;
    }
    return 0;
}
