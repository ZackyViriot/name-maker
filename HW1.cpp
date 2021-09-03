#include <iostream>
using namespace std;
int main()
{
    string name;
    int interger;

    cout<< "Enter your name"<< endl;
    cin >> name;
    cout << "Enter a postive interger" << endl;
    cin >> interger;

    for (int i = 0; i < interger; i++){
        cout<< name + '\n';
    }

    return 0;
 }