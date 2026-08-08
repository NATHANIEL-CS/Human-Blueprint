#include <bits/stdc++.h>
using namespace std;

class Human{
    private:
        string Firstname, Middlename, Lastname, Gender;
        int Age;
    
    public:
    Human(string aFirstname, string aMiddlename, string aLastname, string aGender, int aAge){
        SetFirstname(aFirstname);
        SetMiddlename(aMiddlename);
        SetLastname(aLastname);
        SetGender(aGender);
        SetAge(aAge);
    }

    string GetFirstname(){ return Firstname; }
    string GetMiddlename(){ return Middlename; }
    string GetLastname(){ return Lastname; }
    string GetGender(){ return Gender; }
    int GetAge(){ return Age; }

    void SetFirstname(string aFirstname){
        Firstname = aFirstname;
    }

    void SetMiddlename(string aMiddlename){
        Middlename = aMiddlename;
    }

    void SetLastname(string aLastname){
        Lastname = aLastname;
    }

    void SetGender(string aGender){
        if(aGender == "Male" || aGender == "Female"){
            Gender = aGender;
        } else {
            Gender = "Unknown Gender";
        }
    }

    void SetAge(int aAge){
        if(aAge > 0) {
            Age = aAge;
        } else{
            Age = 0;
        }
    }

    virtual void Sports(){
        cout << "Human is playing...." << endl;
    }

    virtual void Hobby(){
        cout << "Racing" << endl; 
    }

    void Introduce(){
        cout << "\n|---------------------------------|" << endl;
        cout << "| FIRSTNAME   : " << GetFirstname() << endl;
        cout << "| MIDDLENAME  : " << GetMiddlename() << endl;
        cout << "| LASTNAME    : "  << GetLastname() << endl;
        cout << "| GENDER      : " << GetGender() << endl;
        cout << "| AGE         : " << GetAge() << endl;
        cout << "|---------------------------------|" << endl;
    }
};

class Male : public Human {
    private:

    public:
    Male(string aFirstname, string aMiddlename, string aLastname, int aAge) : Human(aFirstname, aMiddlename, aLastname, "Male", aAge){

    }

    void Sports() override {
        cout << "\n" << GetLastname() << " IS PLAYING BASKETBALL...." << endl;
    }

    void Hobby() override{
        cout << "Gaming" << endl;
    }
};

class Female : public Human {
    private:

    public:
    Female(string aFirstname, string aMiddlename, string aLastname, int aAge) : Human(aFirstname, aMiddlename, aLastname, "Female", aAge){

    }

    void Sports() override {
        cout << GetLastname() << " IS PLAYING VOLLEYBALL...." << endl;
    }

    void Hobby() override{
        cout << "Painting" << endl;
    }
};

int main()
{
    Male One("Nathaniel", "Mina", "Bartolome", 17);
    Human* ptr1 = &One;
    One.Introduce();
    ptr1 ->Sports();
    ptr1 ->Hobby();

    Male Two("Carl", "M", "Salonga", 16);
    Human *ptr2 = &Two;
    Two.Introduce();
    ptr2->Sports();
    ptr2->Hobby();

    Female Three("Carol", "Aparil", "Mina", 12);
    Human* ptr3 = &Three;
    Three.Introduce();
    ptr3 -> Sports();
    ptr3 ->Hobby();

    Female Four("Maria", "J", "Santos", 12);
    Human *ptr4 = &Four;
    Four.Introduce();
    ptr4 ->Sports();
    ptr4 ->Hobby();

    return 0;
}           