#include "office.h"
#include <iostream>
using namespace std;
void Office::Print() {
	
		cout << " Name - " << this->name << "; Surname - " << this->surname << "; Number: "<< this->number << "; Address "<< this->addres <<endl;
	
}
void Office::Add(Office*& arr,int& index) {
	
	
	cout << "Enter name: "<< endl;
	cin >> this->name;
	cout << "Enter surname: " << endl;
	cin >> this->surname;
	cout << "Enter number: " << endl;
	cin >> this->number;
	cout << "Enter address: " << endl;
	cin >> this->addres;
	cout << "Added"<<endl;
	arr[index] = Office(name, surname,number,addres);

}
void Office::Delete(Office*& arr, int& size) {
	string name;
	Office* newArrD = new Office[size+1];
	cin >>name ;
	int j,i;
	for (i = 0; arr[i].name != name; i++) {
		newArrD[i] = arr[i];
	}
	j = i;
	i++;
	for (; i<size; i++) {
		newArrD[j] = arr[i];
	 j++;
	}
	size--;
	delete[] arr;
	arr = newArrD;
	

}
string Office::outName() {
	return this->name;
}
string Office::outSurname() {
	return this->surname;
}
int Office::outNumber() {
	return this->number;
}
string Office::outAddres() {
	return this->addres;
}