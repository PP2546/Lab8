#include<iostream>
#include<string>
using namespace std;

int main(){
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    string name;
    cout << "?????: ";
    
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    
    int id;
    cout << name << ": ";
    cin >> id;
    cin.ignore();
    int gear = id/10000000;
    cout << "Fahsai: I think you may be GEAR "<< (gear-12) << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    
    string movie;
    cout << name << ": " ;
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    
    string day;
    cout << name << ": " ;
    getline(cin,day);
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";
    
    string say;
    cout << name << ": ";
    getline(cin,say);
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye "<< "\\(^ ^)/";
    
    return 0;
}