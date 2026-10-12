#include<iostream>
using namespace std;
class student
{
    private:
    int rollNo;
    string name;
    public:
    student(){
        rollNo=0;
        name="unknown";
    }
    student(int r,string name){
       rollNo=r;
       name=name;
    }
    student(const student &s){
        rollNo=s.rollNo;
        name=s.name;
    }
    void display(){
        cout<<"RollNO="<<rollNo<<endl;
        cout<<"name="<<name<<endl;
    }
};
 int main(){
    student s1;
    s1.display();
    student s2(101,"Thulasi");
    s2.display();
    student s3(s2);
    s3.display();
    return 0;
 }