/*
@author :Antara Sarkar
@description : 
@program name : WAP as per the following details create one base class drug with the 
                following data members Category(i.e stimulants ,inhalants , cannabinoids ) date 
                of manufacture company name Create one sub class TABLET derived from DRUG
                with following data members Tablet name, Price Create one sub class pain 
                reliever derived from TABLET with data members dosage_units i.e(1/2/3)
                side_effects: i.e (nausea,drowsiness,Dizziness) ........   
@Time Complexity : O(1)
*/

#include<iostream>
using namespace std;
class DRUG{
 string category;
 string date_of_manufacture;
 string company;
  
  public:
  void setdrug_category(string category){
    this->category=category;
}

 string getdrug_category(){
    return category;
 }

 void setdate_of_manufacture(string date_of_manufacture){
    this->date_of_manufacture=date_of_manufacture;
}

 string getdate_of_manufacture(){
    return date_of_manufacture;
 }

void setcompany(string company){
    this->company=company;
}

 string getcompany(){
    return company;
 }

};

class TABLET : public DRUG{
string tablet_name;
int price;
 public:
void settablet_name(string tablet_name){
    this->tablet_name=tablet_name;
}

 string gettablet_name(){
    return tablet_name;
 }
void setprice(int price){
    this->price=price;
}

 int getprice(){
    return price;
 }

};
class PainReliever: public TABLET{
    int dosage_units;
    string signed_effects;
    int use_within_days;
    
    void setdosage_units(string );


};

int main(){
    DRUG d1;
    PainReliever pr;
    pr.setcompany(" gold flake ");
    pr.setdate_of_manufacture("March 2024");
    pr.setdrug_category("stimulants");

    cout<<"Company name of drug :"<<pr.getcompany()<<endl;
    cout<<"Date of manufacture : "<<pr.getdate_of_manufacture()<<endl;
    cout<<"Drug category : "<<pr.getdrug_category()<<endl;
    pr.setprice(10);
    pr.settablet_name("abc");
    cout<<"Price of the tablet is : "<<pr.getprice()<<endl;
    cout<<"Name of the tablet is : "<<pr.gettablet_name()<<endl;

    

    return 0;
}