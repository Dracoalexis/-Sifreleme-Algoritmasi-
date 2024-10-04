#include <iostream>

using namespace std;

//substr() metodu ilk girilen paramtredeki indeksten itibaren ikinci girilen parametre kadar bastırır.
//insert() metodu belirli bir indeksteki değerin yerine başka bir değer koymamızı sağlar.
//.swap() metodu yer değiştirmeyi sağlar
// int main(){

//     string s0;
//     string s1 {"Apple"};
//     string s2{"Banana"};
//     string s3{"Kiwi"};
//     string s4{"apple"};
//     string s5{s1};   // Apple
//     string s6{s1,0,3}; // App
//     string s7(10,'X');  // XXXXXXXXXX  (Normal parantez olmasına dikkat)

//     cout <<s7<<endl;
//     cout<<s0.length()<<endl;  // 0

//     s1 = "Watermelon";
//     cout<<"s1 is now "<<s1<<endl;

//     s3 = "Frank";
//     cout<<"s3 is now "<<s3<<endl;

//     s3[0] = 'C'; 
//     cout<<"s3 change first letter to 'C' "<<s3<<endl;
//     s3.at(0) = 'P';
//     cout<<"s3 change first letter to 'P' "<<s3<<endl;

//     s3 = s5 + " and " + s2 + " juice";  
//     cout<<"s3 is now "<<s3<<endl;

//     s1 = "Apple";
//     cout<<"s1 is now "<<s1<<endl;

//     for(int i{0};i<s1.size();i++)
//         cout<<s1.at(i)<<endl;  // ya da s1[i]

//     for(char c:s1)   // Aynı çıktıyı verecek.
//         cout<<c<<endl;
    
//     s1 = "This is a test";
//     cout<<"s1 is now "<<s1<<endl;

//     cout<<s1.substr(0,4)<<endl;
//     cout<<s1.substr(5,2)<<endl;
//     cout<<s1.substr(10,4)<<endl;

//     s1.insert(9,"nother");
//     cout<<s1<<endl;

//     s1.erase(0,9);
//     cout<<s1<<endl;
    
// }

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
