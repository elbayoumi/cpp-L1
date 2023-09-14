#include <iostream>
using namespace std;

void print_menu(string name);

int main (int arg_count,char *args[]){
    if(arg_count>1)
    {
        string name(args[1]);
        print_menu(name);
    }else{
    cout<<"hello world"<<endl;

    }

    return 0;
}
void print_menu(string name){
    int choice;
        cout<<"hello"<<endl;
        cout<<"hello"<<endl;
        cout<<"hello"<<endl;
        cout<<"hello"<<endl;
        cout<<"hello"<<endl;
        cin>>choice;

        if(choice==4)
        exit(0);
        else
        cout<<"sorry choice not implemented yet\n";
}
