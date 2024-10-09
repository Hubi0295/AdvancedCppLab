#include "Teacher.h"
#include <iostream>

Teacher::Teacher(string name1,string surname1,int age1, int exp1,string title1):
    Person(name1,surname1,age1) {
    title=title1;
    experience=exp1;
    cout<<"Konstruktor klasy pochodnej Teacher"<<endl;
};
Teacher::Teacher() {
    cout<<"Konstruktor bez klasy pochodnej Teacher"<<endl;

}
void Teacher::setTitle(string title1) {
    title=title1;
}
int Teacher::getExperience() {
    return experience;
}
bool Teacher::is_Phd() {
    if(title=="Phd") {
        return true;
    }
    else {
        return false;
    }
}
void Teacher::showInfoTeacher() {
    showInfoPerson();
    cout << "Staz pracy: " << experience<< " tytul: " << title << endl;
}