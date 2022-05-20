#pragma once
#include <iostream>
#include <string>
#include <limits>
#include <string>
#include <cstdio>

using namespace std;
class Office {
public:
    

    Office() {
        this->name = "";
        this->surname = "";
        this->number=0;
        this->addres = "";
    }

    Office(string name, string surname, int number, string addres) {
        this->name = name;
        this->surname = surname;
        this->number = number;
        this->addres = addres;

    }
    void Add(Office*& arr, int& index);
    void Print();
    void Delete(Office*& arr, int& size);
    string outName();
    string outSurname();
    int outNumber();
    string outAddres();
protected:
    int days;//��������� ������� ����
    int hour;//���������� ������� �����
    int reg_sal;//����� � ����
    int rate;// ������ � ���
    int per_rate;//������� �� ������
    int sam_sale;//����� ������
    string name; 
    string surname;
    int number;
    string addres;
};

