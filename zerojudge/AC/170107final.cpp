#include <iostream>
#include <queue>
using namespace std;

void ProcessOneWord(string word)
{
     bool at = false;
     for(int i = 0; i < word.size(); i++)
     {
          if((word[i] == 'A' || word[i] == 'a') && word[i + 1] == 't')
          {     
               cout << "@";
               at = true;
               break;
          }
          else if(word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u')
          {
               cout << word[i];
          }

     }     
     if(at == true)
     {
          for(int i = 2; i < word.size(); i++)
          {
               cout << word[i];
          }

     }
     cout << endl;

}
int main()
{
     string word;
     while(cin >> word)
     {
          ProcessOneWord(word);
     }
}