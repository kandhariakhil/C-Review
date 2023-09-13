#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

using namespace std;

class Diary
{
private:
    string m_title, m_entries;
public:
    Diary(const string &title){
        m_title = title;
    }
    
    string getTitle() const{
        return m_title;
    }

    virtual void writeEntry(const string &entry){
        m_entries += entry;
    }

    virtual string readEntry() const{
        return m_entries;
    }

    virtual ~Diary(){}
};

class SecretDiary: public Diary
{
private:
    /* data */
public:
    SecretDiary(): Diary("TOP-SECRET"){
    }

    virtual void writeEntry(const string &entry){
        Diary::writeEntry(entry);
    }

    virtual string readEntry() const{
        return Diary::readEntry();
    }

    virtual ~SecretDiary(){}
};


int main(){
    Diary D("KanDiary");
    SecretDiary S;

    string title = D.getTitle();
    D.writeEntry("Woah this is a new entry.");

    cout<<"Title is: "<<title<<endl;
    cout<<"Entry so far: "<<D.readEntry()<<endl;

    D.writeEntry(" Now this will tell me the secrets.");

    cout<<"Updated entry: "<<D.readEntry()<<endl;

    cout<<"Secret Diary title: "<<S.getTitle()<<endl;

    S.writeEntry("This is the top secret message.");

    cout<<"Secret diary message: "<<S.readEntry()<<endl;

    Diary *K = &S;

    cout<<K->getTitle();
    cout<<K->readEntry();
}


