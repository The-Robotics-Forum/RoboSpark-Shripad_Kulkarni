//type of inheritance : Multiple Inheritance
#include<bits/stdc++.h>
using namespace std;
class personal
{protected:
    string name,surname,add,mob_num,dob;
    public:
    personal()
    {
        name="Atharva";
        surname="Deore";
        add="Hirawadi,Panchawati,Nashik.";
        mob_num="xxxxxxxx32";
        dob="22/07/2002";
    }
    void getpersonalinfo();
    void printpersonal();
};
void personal::getpersonalinfo()
{
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter Surname:";
    cin>>surname;
    cout<<"Enter address:";
    cin>>add;
    cout<<"Enter Mobile Number:";
    cin>>mob_num;
    cout<<"Enter DOB:";
    cin>>dob;
}
void personal::printpersonal()
{
    cout<<"\n\nPersonal Info:"<<endl;
    cout<<"Name :"<<name<<endl;
    cout<<"Surname :"<<surname<<endl;
    cout<<"Adress: "<<add<<endl;
    cout<<"Mobile Number :"<<mob_num<<endl;
    cout<<"DOB: "<<dob<<endl;
}
class professional
{protected:
    string organization,job_profile,project;
    public:
    professional()
    {
        organization="TRF";
        job_profile="Trainee";
        project="Drinking Water Notification System";
    }
    void getprofinfo();
    void printprof();
};
void professional::getprofinfo()
{
    cout<<"Enter name of Organisation:";
    cin>>organization;
    cout<<"Enter job profile:";
    cin>>job_profile;
    cout<<"Enter project:";
    cin>>project;
}
void professional::printprof()
{
    cout<<"\n\nProfessional Info:"<<endl;
    cout<<"Name of Organization:"<<organization<<endl;
    cout<<"job profile :"<<job_profile<<endl;
    cout<<"Project: "<<project<<endl;
}
class academic
{protected:
    int yop;
    float cgpa;
    string college,branch;
    public:
    academic()
    {
        yop=2023;
        cgpa=9.26;
        college="VIT";
        branch="Mech";
    }
    void getacadinfo();
    void printacad();
};
void academic::getacadinfo()
{
    cout<<"Enter Year of passing:";
    cin>>yop;
    cout<<"Enter CGPA:";
    cin>>cgpa;
    cout<<"Enter college name:";
    cin>>college;
    cout<<"Enter branch:";
    cin>>branch;
}
void academic::printacad()
{
    cout<<"\n\nAcademic Info: "<<endl;
    cout<<"Year Of Passing:"<<yop<<endl;
    cout<<"CGPA :"<<cgpa<<endl;
    cout<<"College Name: "<<college<<endl;
    cout<<"Branch Name: "<<branch<<endl;
}
class biodata: public personal ,public professional,public academic
{   public:
    void getbiodata();
};
void biodata::getbiodata()
{   cout<<"\nEnter details of Student :\n";
    getpersonalinfo();
    getprofinfo();
    getacadinfo();
    cout<<"\n Student Detaills :\n";
    printpersonal();
    printprof();
    printacad();
}
int main()
{
    biodata b1;
    b1.getbiodata();
}