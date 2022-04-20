#include<iostream>
#include<string>
using namespace std;
class telephone
{
    public:
    int i,size,n,j;
    int probe;
    string name_table[50];
    long int tele[50];
    string name;
    long int key;
    int address;
    int empty_places();
    void search(int flag);

    telephone()
    {
        cout<<"Enter size of hash table(MAX 50) : ";
        cin>>size;
        for(i=0;i<size;i++)
        {
            tele[i]=-1;
            name_table[i]="-";
        }
    }
    void insert(int flag);
    int linear_hashing(int key);
    int qudratic_hashing(int key);
    void show();
};
int telephone::empty_places()
{
    int cnt=0;
    for(int i=0;i<size;i++)
    {
        if(tele[i]==-1)
        {
            cnt++;
        }
    }  
    return cnt;
}
void telephone::insert(int flag)
{
    cout<<"How many records u wants to enter : ";
    cin>>n;
    if(n>size || empty_places()<n)
    {
        cout<<"\nInsufficient size of hash table!!!\n"<<endl;
        show();
        exit(0);
    }
    for(j=0;j<n;j++)
    {
        cout<<"Enter telephone number : ";
        cin>>key;
        cout<<"Enter name : ";
        cin>>name;
        address=key%size;
        if(tele[address]!=-1)
        {
            if(flag==1)
            address=linear_hashing(key);

            else if(flag==2)
            address=qudratic_hashing(key);
        }
        tele[address]=key;
        name_table[address]=name;
    }
}
int telephone::linear_hashing(int kay)
{
    address++;
    if(address>size)
    {
        address=0;
    }
    if(tele[address]!=-1)
    {
        address=linear_hashing(key);
    }
    return address;
}
int telephone::qudratic_hashing(int key)
{
    i=0;
    //address=key%size;
    while(tele[address]!=-1)
    {
        if(i>size)
            i=0;
        address=(key+(i*i))%size;
        i++;
    }
    return address;
}

void telephone::show()
{
    cout<<"Index\tTelephone\tName"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<i<<"\t"<<tele[i]<<"\t\t"<<name_table[i]<<endl;
    }
}

void telephone::search(int flag)
{
    int search_key;
    int c=size,no_of_com=1;
    cout<<"Enter telephone number to be searched : ";
    cin>>search_key;

    if(flag==1)
    {
        int loc;
        cout<<"Searching using Linear Probing..."<<endl;
        loc=search_key%size;
        while(c--)
        {
            if(loc>size)
            {
                loc=0;
            }
            if(tele[loc]==search_key)
            {
                cout<<"Key found!!!"<<endl;
                cout<<"Location\tTelephone No.\tName\tNo.of Comparisons"<<endl;
                cout<<loc<<"\t\t"<<tele[loc]<<"\t\t"<<name_table[loc]<<"\t"<<no_of_com<<endl;
                break;
            }
            loc++;
            no_of_com++;
        }
        if(c==-1)
        {
            cout<<"Key Not Found!!!"<<endl;
        }
    }
    if(flag==2)
    {
        int i=0,loc;
        cout<<"Searching using Qudratic Hashing..."<<endl;
        cout<<"Search_key = "<<search_key<<endl;
        while(c--)
        {   
            loc=(search_key+(i*i))%size;
            if(loc>size)
            {
                loc=0;
            }
            if(tele[loc]==search_key)
            {
                cout<<"Key found!!!"<<endl;
                cout<<"Location\tTelephone No.\tName\tNo.of Comparisons"<<endl;
                cout<<loc<<"\t\t"<<tele[loc]<<"\t\t"<<name_table[loc]<<"\t"<<no_of_com<<endl;
                break;
            }
            i++;
            no_of_com++;
        }
        if(c==-1)
        {
            cout<<"Key Not Found!!!"<<endl;
        }
    }

}
int main()
{
    telephone t;
    int flag;
    int choice;
    int ch;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"Which collision resolution u wants to use : "<<endl;
    cout<<"1.Linear Hashing\n2.Qudratic Hashing"<<endl;
    cout<<"Enter ur choice : ";
    cin>>flag;
    do
    {
        cout<<"-------------------------------------------------"<<endl;
        cout<<"1.Insert\n2.Display\n3.Search"<<endl;
        cout<<"Enter ur choice : ";
        cin>>choice;
        cout<<"-------------------------------------------------"<<endl;
        switch (choice)
        {
            case 1:t.insert(flag);
            break;
            case 2:t.show();
            break;
            case 3:t.search(flag);
            break;
            default:
            cout<<"Invalid choice"<<endl;
            break;
        }
        
        cout<<"\nWould u like to continue?(1/0) : ";
        cin>>ch;
    }while(ch);
    return 0;
}
