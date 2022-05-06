#include <vector>
using namespace std;
class Student{
public:
	char name[30];
	int grade;
};
int main()
{
	int N;
	cin>>N;
	vector<Student> stu(N);///啟用vector的變數stu 可以裝N個
    ///單位是Student stu這個變數可以裝N個Student
	for(int i=0;i<N;i++){
		cin>>stu[i].name>>stu[i].grade;
		///cin >> name[i] >> grade[i]
	}

	for(int i=0;i<N;i++){
		cout<<stu[i].name<<" "<<stu[i].grade<<endl;
		///cout << name[i] << endl
	}
}
