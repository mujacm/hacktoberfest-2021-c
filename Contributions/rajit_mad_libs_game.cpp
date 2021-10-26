//rajitk13 PR for hacktober fest , ACM HACKNIGHT 2021 REPO 
#include <iostream>

using namespace std;

int main()
{
    string adj, adv, noun, verb;
    cout << "Enter Adjective: ";
    cin >> adj;
    cout << endl
         << "Enter Adverb: ";
    cin >> adj;
    cout << endl
         << "Enter Noun: ";
    cin >> noun;
    cout << endl
         << "Enter Verb: ";
    cin >> verb;

    cout << "Today I went to the zoo. I saw a(n) " << adj << " " << noun
         << "jumping up and down in its tree.He"
         << verb << " " << adv << "through the large tunnel that led to its" << adj
         << " " << noun << ". I got some peanuts and passed them through the cage to a gigantic gray " << noun
         << " towering above my head. Feeding that animal made me hungry. I went to get a " << adj
         << " scoop of ice cream. It filled my stomach. Afterwards I had to " << verb << " " << adv << " to catch our bus. When I got home I "
         << adv << "  my mom for a " << adj << " day at the zoo. ";

         return 0;
}
