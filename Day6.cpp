// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std; 
class Display{
    public:
    void display(int finalRes) {
        cout<<"Result = "<<finalRes<<endl;
    }
};
class Add :public Display{
    public:
    int add(int a){
        return a+a;
    }
    int add(int a,int b){
        return a+b;
    }
    int add(int a,int b,int c) {
        return a+b+c;
    }
};
class Sub :public Display{
    public:
    int sub(int a){
        return a-a;
    }
    int sub(int a,int b){
        return a-b;
    }
    int sub(int a,int b,int c) {
       return a-b-c;
    }
};

class Mul :public Display{
    public:
    int mul(int a){
        return a*a;
    }
    int mul(int a,int b){
        return a*b;
    }
    int mul(int a,int b,int c) {
       return a*b*c;
    }
};
class Div :public Display{
    public:
    int div(int a){
        return a/a;
    }
    int div(int a,int b){
        return a/b;
    }
    int div(int a,int b,int c) {
       return a/b/c;
    }
};
class Mod :public Display{
    public:
    int mod(int a){
        return a%a;
    }
    int mod(int a,int b){
        return a%b;
    }
    int mod(int a,int b,int c) {
       return a%b%c;
    }
};
  int main(){
    Add a1;
    Sub s1;
    Mul m1;
    a1.display(a1.add(1)); // 2
    a1.display(a1.add(3,5)); // 8
    a1.display(a1.add(6,7,8)); // 21
    a1.display(s1.sub(m1.mul(56),a1.add(1,3))); // 8 // 3132
return 0;
  }
