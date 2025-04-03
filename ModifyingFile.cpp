#include <iostream>
#include <fstream>
#include <cctype>
#include <sstream>

using namespace std;

//calling function for counting vowels
int countVowels(const string &text){
    int count = 0;
    string vowels = "AEIOUaeiou";
    for(char ch : text){
        if(vowels.find(ch) != string ::npos){
            count++;
        }
    }
    return count;
}
//calling counting original text function
int countWords(const string &text){
    stringstream ss(text);
    string word;
    int count=0;
    while(ss >> word){
        count++;
    }
    return count;
}
//calling function to revearse original text
string Revearse(const string &text){
    return string(text.rbegin(),text.rend());
}

//calling capitalizign fuction
string CapitlizeSecondLetter(const string &text){
    stringstream ss(text);
    string word, result;
    while(ss >> word){
        if(word.length() > 1){
            word[1] = toupper(word[1]);
        }
        result += word + " ";
    }
    return result;

}

int main(){

    ifstream file("Com.txt");
    if(!file){
        cout << "Error opening the file"<<endl;
        return 1;
    }
    string fileData, line;

    while (getline(file, line))
    {
        fileData += line + "\n";
    }
    file.close();
    cout << "original text \n" << fileData<<endl;
    //counting vowels
    cout << "Number of vowels: "<< countVowels(fileData)<< "\n";

    //counting words
    cout << "Number of words: "<< countWords(fileData)<<"\n";
    //reversing text
    cout << "Reversed text: "<<Revearse(fileData)<< "\n";

    //capitalizing first letter
    cout << "Capitalized first letter: "<<CapitlizeSecondLetter(fileData)<<"\n";



    return 0;
}