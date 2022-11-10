#include<iostream>
using namespace std;
class stack{
    //properties
    public:
    int *arr;
    int top;
    int size;

    //behavior

    stack(int size)
    {
        this -> size = size;
        arr = new int[size];
        top=-1;
    }
    void push(int element)
    {
        if(size - top>1)
        {
                top++;
                arr[top]=element;
            }
            else{
                cout<<"stack overflow..";
            }
        
    }

    void pop()
    {
        if(top>=0)
        {

            top--;
        }
        else{
            cout<<"stack underflow, no element present:"<<endl;

        }
    }
    
    int peek()
    {
        if(top>=0)
        {
            return arr[top];
        }
        else{
             cout<<"stack is empty:("<<endl;
             return -1;
        }
    }
    bool isEmpty()
    {
        if(top>=1)
        {
            cout<<"stack is empty!!:("<<endl;
        }
        else{
            cout<<"stack is not empty!!"<<endl;
        }
    }
};
    int main()
    {
        stack st(5);
        st.push(34);
        st.push(89);

        cout<<st.peek()<<endl;
        st.pop();
        cout<<st.peek()<<endl;
        st.pop();
        cout<<st.peek()<<endl;
        st.pop();

        if(st.isEmpty())
        {
            cout<<"stack is empty"<<endl;
        }
        else
        {
            cout<<"stack is not empty"<<endl;
        }
        return 0;

    }
