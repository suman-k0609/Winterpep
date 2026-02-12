#include<iostream>
using namespace std;
//class Car{
//	public:
//	int speed;
//	string name;
//	string color;
//	Car(){
//		cout<<"default constructor called";
//	}
//	Car(string name){
//		this->name=name;
//	}
//	void increaseSpeed(){
//		
//	}
//	void fly(){
//		
//	}
//};
//int main(){
////Car c1("suzuki");
////Car c2("BMW");
////cout<<c1.speed<<endl;	
//Car *c1=new Car("Tata");
//cout<<c1->name;
////cout<<c2.name;
//
//}



//class Student{
//	public:
//	string name;
//	int roll;
//	string course;
//	Student(string name,int roll,string course){
//		this->name=name;
//		this->roll=roll;
//		this->course=course;
//		
//	}
//	
//};
//int main(){
//	Student s1("suman",11,"DSA");
//	Student s2("neha",22,"cloud");

Student *s1=new Student("suman",11,"DSA")
//	cout<<s1.name<<" "<<s1.roll<<" "<<s1.course<<endl;
	cout<<s1->name<<" "<<s1->roll<<" "<<s1->course<<endl;
//		cout<<s2.name<<" "<<s2.roll<<" "<<s2.course<<endl;
//}
