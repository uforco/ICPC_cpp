# include <bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        int roll;
        int marks;
};

bool cmp(Student a, Student b){
    if(a.marks > b.marks) return true;
    else if ( a.marks == b.marks ) return a.roll < b.roll ;
    else return false;
}

int main(){
    int n;
    cin>>n;
    Student stu[n];
    for (int i = 0; i < n; i++)
    {
        cin>>stu[i].name>>stu[i].roll>>stu[i].marks;
    }
    sort(stu, stu+n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout<<stu[i].name<<" "<<stu[i].roll<<" "<<stu[i].marks<<endl;
    }
    
    
    return 0;
}