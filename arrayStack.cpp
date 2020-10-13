class stack
{
    public:
     arr[20];
    int top;
    stack();
    bool stackfull();
    bool stackempty();
    void push(int x);
   int pop();
    void show();
};
stack::stack()
{    top=-1;
}
bool stack::stackfull()
{
    if(top==19)
    return true;
    else
    return false;
}
bool stack::stackempty()
{
    if(top==-1)
    return true;
    else
    return false;
}
void stack::push(int x)
{
    if(!stackfull())
    {
        top++;
        arr[top]=x;
    }
    else
    {
        cout<<"Stack overflow";
    }
}
int stack::pop()
{
    if(!stackempty())
    {
        int y;
        y=arr[top];
        top--;
        return y;
    }
    else
    {
        cout<<"Stack underflow";
    }
}
void stack::show()
{
    int temp;
    temp=top;
    cout<<"\nThe ele are : ";
    while(temp>=0)
    {
        cout<<arr[temp]<<" ";
        temp--;
    }
}
int main()
{
    stack s;
    int op,x,y;
    char ch='yes';
    while(ch=='yes')
    {
        cout<<"1 PUSH";
        cout<<"2 POP";
        cout<<"3 SHOW\n";
        cin>>op;
        if(op==1)
        {
            cout<<"Enter value ";
            cin>>x;
            s.push(x);
        }
        else if(op==2)
        {
            y=s.pop();
            cout<<"Value "<<y<<" has been deleted";
        }
        else if(op==3)
        s.show();
        else
        cout<<"Not a correct option";
        cout<<"Do you want to enter again ";
        cin>>ch;
    }
}
