#include <iostream>

using namespace std;

int main()
{

    int n;
    while(cin>>n)
    {
        if(n<7) cout<<0<<endl;
        else if(n>= 7 && n<=13)
                cout<<1<<endl;
        else{
            int k =10, m=0;
            
            int cnt = 1;
            while(7*(cnt+1)<n)
            {
                cnt++;
            } 
            cout<<"cnt= "<<cnt<<endl;

           for(int i=13; i<=n; ++i)
           {
               cout<<"i= "<<i<<endl;
            while(i%10 >=1)
            { 
                cout<<"i= "<<i<<endl;
                int x = i-i%10;
                cout<<"x= "<<x<<endl;
                if(i/x == 7)
                {
                   m++;
                }
                i = i%10;
                 cout<<"i= "<<i<<endl;
                if(i==7) 
                {
                    m++;
                    break;
                }
               
            }
            
            
           }
           cout<<"m= "<<m<<endl;
           cout << m+cnt<<endl;

        }
        
    }

    return 0;
}