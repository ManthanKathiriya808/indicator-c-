#include<iostream>
#include<string>
using namespace std;

int main(){

 string text;
 cout << "Enter any string : ";
getline(cin ,text)  ;
int count = 0;
int size = text.size();
 int *ptr = &size;


//  while( count < *ptr){
//     count++;
//  }

cout <<"The length of the sting is :" << *ptr;

}