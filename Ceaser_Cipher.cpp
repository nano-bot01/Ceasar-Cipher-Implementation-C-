#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    int choice, key;
    string filename;
    char ch;
    do{
		
	    cout << "\n\t\t1) Encrypt Files\n\t\t2) Decrypt Files\n\n\tEnter your choice : ";
	    cin >> choice;
	    if(choice >2 || choice<1){
	    	cout<<"You have entered a wrong choice!!";
	    	exit(0);
		}
	    cout << "\n\n\tEnter the file name: " ;
	    cin >> filename;
	    cout << "\n\tEnter the Key : ";
	    cin >> key;
	    if (choice == 1)
	    {
	        char c;
	        ifstream fin;
	        ofstream fout;
	        fin.open(filename.c_str(), ios::binary);
	        filename = "encrypted_file";
	        fout.open(filename.c_str(), ios::binary);
	        while (!fin.eof())
	        {
	            fin >> noskipws >> c; // this will skip nothing
	            int temp = (c + key);
	            fout << (char)temp;
	        }
	        fin.close();
	        fout.close();
	        cout<<"\n\n\t\t\t\aFILE ENCRYPTED SUCCESSFULLY\n";
	    }
	
	    else 
	    {
	    	char c;
	        ifstream fin;
	        ofstream fout;
	        fin.open(filename.c_str(), ios::binary);
	        filename = "decrypted_file";
	        fout.open(filename.c_str(), ios::binary);
	        while (!fin.eof())
	        {
	            fin >> noskipws >> c; // this will skip nothing
	            int temp = (c - key);
	            fout << (char)temp;
	        }
	        fin.close();
	        fout.close();
	        cout<<"\n\n\t\t\t\aFILE DECRYPTED SUCCESSFULLY\n";
	    }
	    cout<<"Want to use again? (y/n) : ";
	    cin>>ch;
	}while(ch=='y'||ch=='Y');
    
    return 0;
}
