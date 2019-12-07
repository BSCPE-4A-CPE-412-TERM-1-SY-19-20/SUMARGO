/*128269*/
#include <iostream>
using namespace std;

int main() 
    {
        int count;
        string str;
        cin>>str;
        count=0;
        for(int i=0;i<str.size();i++)
            {
                if(str[i]=='b')
                    {
                        count++;
                    }
            }
        if(count>0)
            {
                if(count<6)
                    {
                        cout<<str<<" is acceptable!";
                    }
                else
                    {
                        cout<<str<<" is not acceptable!";
                    }
            }
        else
            {
                cout<<str<<" is not acceptable!";
            }     
    return 0;
}
