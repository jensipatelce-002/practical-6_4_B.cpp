#include <iostream>

using namespace std;

int main() {

    int first_array[] = {10, 20, 30, 40, 60};
    int second_array[] = {15, 25, 35, 45, 55};
    int result[10];

    int i = 0, j = 0, k = 0;

        while (i < 5 && j < 5) {
        if (first_array[i] < second_array[j]) {
            result[k] = first_array[i];
            i++;
        } else {
            result[k] = second_array[j];
            j++;
        }
        k++;
    }


    while (i < 5) {
        result[k] = first_array[i];
        i++;
        k++;
    }


    while (j < 5) {
        result[k] = second_array[j];
        j++;
        k++;
    }



    cout << "**************************************************"<<endl;
    cout << "     MERGE SORTED ARRAYS"<<endl;
    cout << "**************************************************"<<endl;

    cout << "First Array"<<endl;
    for (int x = 0; x < 5; x++) cout << first_array[x] << " ";
    cout<<endl;
    cout << "Second Array"<<endl;
    for (int x = 0; x < 5; x++) cout << second_array[x] << " ";
    cout<<endl;
    cout << "----------------------------------------"<<endl;

    cout << "Merged Sorted Array"<<endl;
    for (int x = 0; x < 10; x++) cout << result[x] << " ";
    cout <<endl;

    return 0;
}
