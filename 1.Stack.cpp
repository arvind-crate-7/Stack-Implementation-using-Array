#include<iostream>
#include<string>
using namespace std;
class stack{
    private:
        int top;
        int arr[5];
    public:
        stack(){
            top=-1;
            for(int i=0;i<5;i++)
                arr[i]=0;
        }
        bool isEmpty(){
            if(top==-1)
                return true;
            else
            return false;
        }
        bool isFull(){
            if(top==4)
                return true;
            else
                return false;
        }
        void push(int val){
            if(isFull()){
                cout<<"Stack Over flow."<<endl;
            }
            else{
                top++;
                arr[top]=val;
            }
        }
        int pop(){
            if(isEmpty()){
                cout<<"Stack Under flow."<<endl;
                return 0;
            }
            else{
                int popval=arr[top];
                arr[top]=0;
                top--;
                return popval;
            }
        }
        int count(){
            return (top+1);
        }
        int peek(int pos){
            if(isEmpty()){
            cout<<"Stack is Empty(Underflow)"<<endl;
            return 0;
            }
            else{
                return arr[pos];
            }
        }
        void change(int pos,int val){
            arr[pos]=val;
            cout<<"Value change at position:"<<pos<<endl;
        }
        void display(){
            cout<<"Element present in Stack:"<<endl;
            for(int i=4;i>=0;--i)
            cout<<arr[i]<<endl;
        }

};
int main()
{
    stack s1;
    int option,value,pos;
    cout<<"What Operation do you want to performe.Select option Number.Enter'0'for Exit."<<endl;
    do{
        cout<<"1.Push()"<<endl;
        cout<<"2.Pop()"<<endl;
        cout<<"3.isEmpty()"<<endl;
        cout<<"4.isFull()"<<endl;
        cout<<"5.Peek()"<<endl;
        cout<<"6.Count()"<<endl;
        cout<<"7.Change()"<<endl;
        cout<<"8.Display()"<<endl;
        cout<<"9.Clear Screen"<<endl<<endl;
        cout<<"Enter:-";
        cin>>option;
        switch(option){
            case 0:
                break;
            case 1:
                cout<<"Enter number do you want insert:-"<<endl;
                cin>>value;
                s1.push(value);
                break;
            case 2:
                cout<<"pop function called-poped value:"<<s1.pop()<<endl;
                break;
            case 3:
                if(s1.isEmpty())
                    cout<<"Stack is Empty."<<endl;
                else
                    cout<<"Stack is not Empty."<<endl;
                break;
            case 4:
                if(s1.isFull())
                    cout<<"Stack is Full."<<endl;
                else
                    cout<<"Stack is not Full."<<endl;
                break;
            case 5:
                cout<<"Enter position do you want to see value:";
                cin>>pos;
                cout<<"The value is : "<<s1.peek(pos)<<endl;
                break;
            case 6:
                cout<<"Total Number of values in Stack is :"<<s1.count()<<endl;
                break;
            case 7:
                cout<<"Enter Position do you want to change value:";
                cin>>pos;
                cout<<"Enter Value :";
                cin>>value;
                s1.change(pos,value);
                break;
            case 8:
                s1.display();
                break;
            case 9:
                system("cls");
            default:
                cout<<"Enter proper option Number"<<endl;
                
        }
    }while(option!=0);
    return 0;
}