/*Q(1.)
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    char ch='A';
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<ch<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        ch++;
    }   
}   */
/* Q(2.)
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    char ch='A';
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<ch<<" ";
            ch++;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}    */

/*Q(3.)
 Take n=4 to print 
   D
   C D
   B C D
   A B C D  */

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        char ch='G'-i+1;
        while(j<=i)
        {
            cout<<ch<<" ";
            ch++;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}   