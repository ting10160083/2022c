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
	vector<Student> stu(N);///�ҥ�vector���ܼ�stu �i�H��N��
    ///���OStudent stu�o���ܼƥi�H��N��Student
	for(int i=0;i<N;i++){
		cin>>stu[i].name>>stu[i].grade;
		///cin >> name[i] >> grade[i]
	}

	for(int i=0;i<N;i++){
		cout<<stu[i].name<<" "<<stu[i].grade<<endl;
		///cout << name[i] << endl
	}
}
