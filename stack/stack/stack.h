//
//  stack.h
//  stack
//
//  Created by wang on 2022/4/10.
//

#ifndef stack_h
#define stack_h
#include<iostream>
using namespace std;
class stack
{
public:
    void getLength();//用户定义栈的长度
    int pop();//返回栈顶元素
    void push(int);//将参数压入栈中
    void print();//打印当前栈
    ~stack();
private:
    int *flag;
    int *ps;//指向栈底
    int max;//栈的空间长度
    int top;//指向栈顶的下标
};

#endif /* stack_h */
