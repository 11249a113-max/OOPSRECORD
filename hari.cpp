#include<iostream> 
#include<string>
using namespace std;

class book {
    private:
    string title;
    string author;
    int year;
    float price;
public:

void getdetails(){
    cout<<"Enter book title:";
    getline(cin,title);
    cout<<"Enter year of publication:";
    cin>>year;
    cout<<"Enter prive:";
    cin>>price;
}

void displaydetails(){
   cout<<"\n---book details---\n";
   cout<<"title:"<<title<<endl;
   cout<<"author:"<<author<<endl;
   cout<<"year:"<<year<<endl;
   cout<<"price:"<<price<<endl;
}
};
intmain(){
    
    book mybook;
    
    mybook.getdetails();
    mybook.displaydetails();
    return 0;
}