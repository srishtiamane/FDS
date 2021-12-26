#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<char> s;
    string str ;
cout<< "enter the string:";
getline(cin,str);
cout<<endl<<"your entered string is : ";
cout<< str<<endl;

    int len = str.size();
cout<< "length of string:"<<len<<endl;
    int i=0;
    char ch;
cout<<"\n\n\n";
    while(len--)
    {
        if((str[i]>='a' && str[i]<='z')|| (str[i]>='A' && str[i]<='Z'))
        {
ch=str[i];
                if(str[i]>='A'&&str[i]<='Z')
                {
ch=char((int(str[i])+32));
                }


s.push_back(ch);
        }
i++;
    }
    int k=0;
    while(s.size()>1)
    {
cout<<s.front()<<"-"<<s.back()<<endl;
        if(!(s.front()==s.back()))
        {
            k=1;
            break;
        }
s.pop_back();
s.erase(s.begin());
    }

    if(k==1)
    {
cout<<"string is not palindrome";
    }
    else
    {
cout<<"string is palindrome";
    }


}
