#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    string movie;
    string day;
    string chat;
    int numid;
    int GEAR;
        
     cout<<"Fahsai: Sawadee ka...Can you tell me your name?\n";
     cout<<"?????:";
  
     getline(cin,name);
     cout<<"\nFahsai: Wow!!! "<< name <<" is a really cool name.";
     
     cout<<"\n";
     cout<<"Fahsai: I think you are an Engineering student. What is your student ID?\n";
     cout<<name<<": ";
     cin>>numid;
         GEAR = (numid/10000000)-12;
         cin.ignore();
       
     cout<<"Fahsai: I think you may be GEAR "<< GEAR <<"."<<" I have a free movie ticket for you.";
     cout<<"\n";
   cout<<"Fahsai: Let's go to the cinema together!!!"<<"\nFahsai: What movie do you want to watch?\n";
   cout<<name<<": ";
  getline(cin,movie);
   
    cout<<"Fahsai: So....which day are you free to go with me?\n";
    cout<<name<<": ";
    getline(cin,day);
  
    cout<<"Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watching "<<movie<<" with you.\n";
    cout<<name<<": ";
    getline(cin,chat);
    cout<<"Fahsai: 555+ see you "<<day<<"."<<" Bye Bye \\(^ ^)/";
 return 0;
}