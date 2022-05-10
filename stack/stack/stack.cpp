//
//  stack.cpp
//  stack
//
//  Created by wang on 2022/4/10.
//

#include "stack.h"
#include<iostream>
using namespace std;
void stack::getLength()
{
    int a;
    cout<<"请输入栈的长度"<<endl;
    cin>>a;
    ps=new int[a];
    flag=new int[a];
    max=a;
    top=0;
}
void stack::push(int a)
{
    for(int n=0;n<1;n++)
    {
        if(top==max)
        {
            cout<<"栈已满，请返回一个元素之后再压入新的元素"<<endl;
            break;
        }
                if(top==0&&(flag[top]==0))
                {
                    ps[top]=a;
                    flag[top]=1;
                }
                else if(flag[top-1]==1)
                {
                    ps[top]=a;
                    flag[top]=1;
                }
                top++;
    }
}
int stack::pop()
{
    int j=0;
    for(int n=0;n<1;n++)
    {
        if(top==0)
        {
            cout<<"错误的操作，请先向栈中压入元素"<<endl;
            break;
        }
        else
        {
            if(top==0)
            {
                flag[top]=0;
                cout<<"栈内无元素，若想继续操作请压入元素"<<endl;
            }
            else
            {
                j=ps[top-1];
                flag[top-1]=0;
                top--;
            }
        }
    }
    return j;
}
void stack::print()
{
    for(int n=max-1;n>=0;n--)
    {
        if(flag[n]==1)
        {
            cout<<ps[n]<<endl;
        }
        else
            cout<<"~~"<<endl;
    }
}
stack::~stack()
{
    delete []flag;
    delete []ps;
}
