/*
Nama        : Akmal Syawqi
NPM         : 14081019046
Deskripsi   : Shift Cipher
*/

#include<iostream>
#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;

string enkripsiText(string plainText, int key){
	string cipherText = "";

	for(int i=0;i<plainText.length();i++){
		if(isupper(plainText[i]))
			cipherText += char((int(plainText[i] + key - 65) % 26) + 65);

		else
			cipherText += char((int(plainText[i] + key - 97) % 26) + 97);

	}

	return cipherText;
}

string dekripsiText(string cipherText, int key) {
	string plainText = "";

	for(int i=0;i<cipherText.length();i++){
		if(isupper(cipherText[i]))
			plainText += char((int(cipherText[i] - key - 65) % 26) + 65);

		else
			plainText += char((int(cipherText[i] - key - 97) % 26) + 97);

	}

	return plainText;
}

main(){
    mulai:
	string plainText;
    string pilih;
    int key;

	cout<<"Masukkan text: ";
	cin>>plainText;
	cout<<"Masukkan kunci: ";
	cin>>key;

	string cipherText= enkripsiText(plainText, key);
	cout<<"Hasil Enkripsi: "<<cipherText<<endl;
	
	cout<<"Hasil Deskripsi: "<<dekripsiText(cipherText, key)<<endl;

    cout<<"Ulang Program ? (Y/N) ";
    cin>>pilih;

    if(pilih == "Y" || pilih == "y"){
        goto mulai;
    }
    else{
        return 0;
    }
}
