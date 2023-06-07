// We are gonna make a stack object using arrays. For this we will ask the user itself for the size of the array.
# include <bits/stdc++.h>

using namespace std;

class Stack
{
private :
 int index;
 int* stack_array;
 int Len;

public :

Stack(int size)
{
    index = -1;
    stack_array = new int[size];
    Len = size;
}

void push(int element)
{
  if (index < Len - 1 ) stack_array[++ index] = element;
  else cout<<"The stack is completely full!"<<endl; 
}

void pop()
{
    if (index  >= 0) index--;
    else cout<<"The stack is completely empty!"<<endl;
}

void top()
{
    if (index >= 0) cout<<"The Topmost element of the stack is : "<<stack_array[index]<<endl;
    else cout<<"The stack is completely empty!"<<endl;
}
};


int main()
{
    Stack mystack(2);
    mystack.push(8);
    mystack.push(4);
    mystack.push(6);
    mystack.top();
    mystack.pop();
    mystack.top();
    mystack.pop();
    mystack.top();
    mystack.pop();
}