#include<iostream>
#include<fstream>
#include<cstdlib>

//using std::cout;
//using std::cin;
//using std::endl;
using namespace std;

class account
{
private:
    char accno[20];
    char firstname[10];
    char lastname[10];
    float totbal;
public:
void getData();
void showData();
void searchRec();
};
void getData()
{
    cout<<"enter account Number:\n";
    cin>>accno;
    cout<<"enter first name:\n";
    cin>>firstname;
    cout<<"enter last name:\n";
    cin>>lastname;
    cout<<"enter balance:\n";
    cin>>totbal;
}

void showData()
{
    cout<<"account number:"<<accno<<endl;
    cout<<"first name:"<<firstname<<endl;
    cout<<"last name:"<<lastname<<endl;
    cout<<"current balance:"<<totbal<<endl;
}
void searchRec()
{
    int n;
{
 cout<<"account no \t ac holder name \t account type \t balance \t";
 cout<<endl<<accno<<"\t\t "<<name<<"\t\t\t"<<acc_type<<"\t\t"<<amt<<endl;
 fstream ob;
 char ch;
 ob.open("details.txt",ios::app);
 ob<<accno<<"\t\t"<<name<<"\t\t"<<acc_type<<"\t\t"<<amt<<endl;
 ob.close();
}
}


void main()
{
account a;
a.getData();
a.showData();
a.searchRec();
}
