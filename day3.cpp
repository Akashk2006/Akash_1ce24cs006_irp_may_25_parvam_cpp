#include <iostream>
using namespace std;
class Teacher{
    public:
    string tname;
    string tdob;
    string tempid;
    string tdept;
    float texp;
    float tsalary;
    
    Teacher(){
        tempid="Un Defined";
        tdept = "Un Assigned";
        texp = 0;
    }
    Teacher(string s_tname,string s_tdob,float s_tsalary){
        tname=s_tname;
        tdob=s_tdob;
        tsalary =s_tsalary;
    }
    Teacher(string s_tname,string s_tdob,float s_tsalary,string s_tempid,string s_tdept,float s_texp){
        tname=s_tname;
        tdob=s_tdob;
        tsalary =s_tsalary;
        tempid=s_tempid;
        tdept = s_tdept;
        texp = s_texp;
    }
    
    Teacher(const Teacher &cy_tch){
        tname=cy_tch.tname;
        tdob=cy_tch.tdob;
        tsalary =cy_tch.tsalary;
        tempid=cy_tch.tempid;
        tdept = cy_tch.tdept;
        texp = cy_tch.texp;
    }
    
    void getTeacherDetails(){
        cout<<" ------ Start Teacher Details --------"<<endl;
        cout<<" Name : "<<tname<<endl;
        cout<<" DOB : "<<tdob<<endl;
        cout<<" Department : "<<tdept<<endl;
        cout<<" Employee ID : "<<tempid<<endl;
        cout<<" Experience : "<<texp<<endl;
        cout<<" Salary  : "<<tsalary<<endl;
        cout<<" ------ End Teacher Details --------"<<endl;
    }
    
};


int main() {
    
    Teacher t1("Teacher 1","12-05-1990",15000.50,"CECTH001","CSE",5.3);
    cout<<"\n ------ T1 Teacher Details --------"<<endl;
    t1.getTeacherDetails();
    
    Teacher t2=t1;
    
    cout<<"\n ------ T2 Teacher Details --------"<<endl;
    t2.getTeacherDetails();

    return  0;
}
