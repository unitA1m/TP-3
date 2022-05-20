#define CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <string>
#include <cstdio>

#include "office.h"
#include "hour_salary.h"
#include "regula_salary.h"
#include "percent_salary.h"

using namespace std;



int main()
{
    int c,size=20;
    int cnt=0;
    int index=0;
    int eueu = 0;
    
    setlocale(0, "rus");

    Office* arr = new Office[size];
    string path = "workers";
    ofstream fil;
    

    system("cls");
    int n=99999;
    while (n != 0) {
        system("cls");
        cout << "�������� ������" << endl;
        cout << '\n';
        cout << "1-��������� ������ ������� " << endl;
        cout << "2-������� �������� ������� " << endl;
        cout << "3-���������� ������ ������� " << endl;
        cout << "4-���������� ������" << endl;
        cout << "5-����� ���� �����������" << endl;
        cout << "6-�������� �����������" << endl;
        cout << "7-������� ����������" << endl; 
        cout << "0-�����" << endl;
        cout << "\n-----------------------------------\n";

        cin >> n;
        switch (n)
        {
        case 1: {
            int choise;
            cout << "�������� � ����������: " << endl;
            for (int i = 0; i < cnt; i++) {
                cout << i + 1;
                arr[i].Print();
            }
            cin >> choise;
            int h, r;
            cout << "������� ���������� ������� ����� " << endl;
            cin >> h;
            cout << "������� ������ � ��� " << endl;
            cin >> r;
            hour_salary f(h, r);
            arr[choise - 1].Print();
            cout << "\t\t�������� " << f.sal_calc() << " ������" << endl;

            system("pause");
        
        }break;
        case 2: {
            int choise;
            cout << "�������� � ����������: " << endl;
            for (int i = 0; i < cnt; i++) {
                cout << i + 1;
                arr[i].Print();
            }
            cin >> choise;
            int r, d;
            cout << "������� ����� � ���� " << endl;
            cin >> r;
            cout << "������� ���������� ������� ���� " << endl;
            cin >> d;
            regula_salary f(r, d);
            arr[choise - 1].Print();
            cout << "\t\t�������� " << f.sal_calc() << " ������ " << endl;
            system("pause");

        }break;
        case 3: {
            int choise;
            cout << "�������� � ����������: " << endl;
            for (int i = 0; i < cnt; i++) {
                cout << i + 1;
                arr[i].Print();
            }
            cin >> choise;
            int p, s;
            cout << "������� ������� �� ������ " << endl;
            cin >> p;
            cout << "������� ����� ������ " << endl;
            cin >> s;
            percent_salary f(p, s);
            arr[choise - 1].Print();
            cout << "\t\t�������� " << f.sal_calc() << " ������ " << endl;
            system("pause");
        
        }break;
        case 4: {
            cout << "�������� ������ ���������� �����������: " << endl;
            cout << "1-���������� � ����� ����" << endl;
            cout << "2-���������� � ������ ����" << endl;
            cin >> n;
            if (n == 1) {
                string* outer = new string[100];
               
                fil.open("workers.txt");
                for (int i = 0; i < cnt; i++) {
                    outer[i] = arr[i].outName() +"\t"+ arr[i].outSurname() + "\t"+ to_string(arr[i].outNumber()) +"\t" + arr[i].outAddres()+"\n";
                    fil << outer[i];
                }
                fil.close();
                delete[] outer;
                cout << "����������.�����..." << endl;
                system("workers.txt");
            }
            else {
                string* outer = new string[100];
                
                fil.open("workers.txt",ios_base::app);
                for (int i = 0; i < cnt; i++) {
                    outer[i] = arr[i].outName() + "\t" + arr[i].outSurname() + "\t" + to_string(arr[i].outNumber()) + "\t" + arr[i].outAddres() + "\n";
                    fil << outer[i];
                }
                fil.close();
                delete[] outer;
                cout << "����������.�����..." << endl;
                system("workers.txt");
            }


        }break;
        case 5: {
            for (int i = 0; i < cnt ; i++) {
                arr[i].Print();
            }
            system("pause");
            
        }break;
        case 6: {
            cout << "������� ���-�� ����������� ��� ����������" << endl;
            cin >> c;
            cnt = cnt + c;
            for (; index < cnt; index++) {
                arr[index].Add(arr,index);
                
            }
            
            system("pause");
            
        }break;
        case 7: {
            cout << "������� c��������� ��� ��������" << endl;
            for (int i = 0; i < cnt; i++) {
                arr[i].Print();
            }
            arr->Delete(arr, size);
            cnt--;
            index--;
            cout << "������" << endl;
            system("pause");
            
        }break;
        case 0: { 
            delete[] arr;
            return 0; 
        
        }
        }
    }
}
    

