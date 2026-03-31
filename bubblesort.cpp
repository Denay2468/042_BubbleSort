#include <iostream>
#include <string>
using namespace std;

int arr[20]; 
int n;       
void input(){
    int i;
    while (true)
    {
        cout << "Enter the number of elements in the array: "; 
        cin >> n; 

        if (n <= 20)
            break; 
        else
        {
            cout << "\nArray can have a maximum of 20 elements.\n"; 
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Enter Array Elements" << endl;
    cout << "=====================" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "Data-" << (i + 1) << ": ";
        cin >> arr[i]; 
    }

}
void bubblesortArray(){

}
void display(){

}

int main(){

}