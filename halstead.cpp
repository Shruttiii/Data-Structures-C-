#include<fstream>
#include<iostream>
#include<set>
using namespace std;
set<string> opT; //operator
opT.insert("++");
opT.insert("--");
opT.insert("==");
opT.insert("+=");
opT.insert("!=");
opT.insert("-=");
opT.insert("*=");
opT.insert("/=");
opT.insert("||");
opT.insert("<");
opT.insert(">");
opT.insert("<<");
opT.insert(">>");
opT.insert("<=");
opT.insert(">=");
opT.insert("&&");
opT.insert("!");
opT.insert("(");
opT.insert("");
opT.insert("{");
opT.insert("->");
opT.insert("[");
opT.insert(".");
opT.insert('"');
opT.insert("+");
opT.insert("-");
opT.insert("*");
opT.insert("/");
opT.insert("%");
opT.insert("=");
opT.insert("%=");
opT.insert("?:");
int opCount(string ele)
{
    //cout<<"ele is"<<ele<<endl;
    set<string>::iterator it;
    for(it=opT.begin();it!=opT.end();++it)
    {
        string c= *it;
        //cout<< c<<"\t";
        if( c.compare(ele)==0)
            return 1;
        else
            continue;
    }
    return 0;
}
int main()
{


    fstream fin;
    int Count=0;
    string ch;
    fin.open("operators.txt");
    while(fin>>ch)
    {
        Count+=opCount(ch);
    }
    //ch="++";

    cout<<Count;
fin.close();
}
