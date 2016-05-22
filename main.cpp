#include <iostream>
#include <string>
#include <cstddef>

using namespace std;

int main(int argc, char *argv[]) {
    string input;
    string encrypted;

    getline(cin,input);

    encrypted = input;

    cout << "Encryption: ";

    for(size_t i = 0; i < input.length(); i++){
        encrypted[i] = input[i] + i * i + 1;
    }

    cout << endl << encrypted << endl;

    return 0;
}
