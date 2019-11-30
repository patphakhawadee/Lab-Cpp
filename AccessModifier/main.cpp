#include <iostream>

using namespace std;

class Student
{
    public:
        Student(): name(""),gpa(0.0) {}  //cinstructure
        Student(string n, double g=0.0):name(n),gpa(g){}

        void Test(){
            cout<<"Test"<<endl;
            pro();
            }
            string getName(){

                return name ;
                }
            double getGPA(){
                return gpa;
            }
    protected:
        void pro(){
            cout<<"In protecred section"<<endl;
            this->pri();
        }
    private:
        std::string name;
        double gpa;
        void #include <iostream>
#include<string>
using namespace std;
template <typename T> void swapVar(T &x,T&y){
        T temp = x;
        x=y;
        y=temp;

}
template<typename T> class TStack{
public:
    TStack() : top(-1){nsize=N;}
    TStack(int n):top(-1), nsize(n){}
    void push (T v){
        if (top==nsize-1){
            cerr<<"Stack over flow\n";
        }
        else{
            top++;
            data[top];
        }
    }
    T getTop(){
        return data[top];
    }
    void pop(){
        top--;
    }
    bool isempty(){
        return top=-1;
    }
private:
    T data[2];
    int top = -1;
    int nsize = 0;

};
int main()
{
   /* string loas="Hi";
    string eng="Sabaidee";
    swapVar<string>(loas,eng);
    cout<<"loas = "<<loas<<endl;
    cout<<"eng = "<<eng<<endl;

    int x,y;
    x=20;  y=30;
    swapVar<int>(x,y);
    cout<<"x= "<<x<<"  y = "<<y<<endl;*/
    TStack<string> s;
    s.push("A");
    s.push("B");
    s.push("C");
    while(!s.isempty())
    {
        cout<<s.getTop()<<end;
        s.pop[];
    }
    return 0;
}pri(){
            cout<<"In private section"<<endl;
        }
};
    int main()
    {
        Student s("POP",4.00);
        cout<<"Name is "<<s.getName()<<endl;
        cout<<"GPA is "<<s.getGPA()<<endl;
       // s.gpa = 2.25;
       s.Test();
        return 0;

    }
