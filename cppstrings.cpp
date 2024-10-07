#include <iostream>

using namespace std;

// Listenin uzunluğundan indeksi çıkar ve ardından 1 çıkar

int main(){
    string alphabet {"abcdefghijklmnopqrstuvwxyz"};

    string entered_string{};
    cout<<"Enter an string"<<endl;
    cin>>entered_string;

    for(int i{0};i< entered_string.length();i++){

        int cin_idx = alphabet.find(entered_string[i]); // 5
        int new_idx = alphabet.length() - cin_idx - 1; // 20
        entered_string[i] = alphabet[new_idx];
        }
    cout<<entered_string<<endl;

    return 0;
}
