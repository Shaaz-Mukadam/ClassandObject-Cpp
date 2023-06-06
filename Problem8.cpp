#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

class phone
{
        long int std, ex, phno;
    public:
        void accept();
        void change();
        void display();
};
void phone::accept()
{
        cout<<"\n Enter STD Code        : ";
        cin>>std;
        cout<<"\n Enter Exchange Code   : ";
        cin>>ex;
        cout<<"\n Enter Phone Number    : ";
        cin>>phno;
}
void phone::display()
{
        cout<<" ";
        cout<<std<<"-"<<ex<<"-"<<phno;
}
void phone::change()
{
        long int s, ph, rev, fact;
        int cnt;
        s = std;
        ph = phno;
        while(s!=0)
        {
                s=s/10;
                cnt++;
        }
        fact=pow(10,(cnt-1));
        std=std+fact;
        while(ph!=0)
        {
                ph=ph/10;
                cnt++;
        }
        fact=pow(10,(cnt-2));
        rev=phno/fact;
        rev=(rev%10)*10+rev/10;
        phno=((rev*fact)+(phno%fact));
}
int main()
{
        phone p1[10];
        int cnt, i;
        cout<<"\n Enter No. of Elements : ";
        cin>>cnt;
        if(cnt<1 || cnt>10)
        {
                cout<<"\n Out of size";
                exit(0);
        }
        for(i=0; i<cnt; i++)
                p1[i].accept();
        cout<<"\n ------------------------------------------";
        cout<<"\n Original Phone Number : ";
        for(i=0; i<cnt; i++)
                p1[i].display();
        for(i=0; i<cnt; i++)
                p1[i].change();
        cout<<"\n Changed Phone Number  : ";
        for(i=0; i<cnt; i++)
                p1[i].display();
        return 0;
}

