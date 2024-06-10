#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

struct Quote {
    string text;
    string author;
};

vector<Quote> quotes = {
    {" Be yourself; everyone else is already taken." , "Oscar Wilde"},
    {"The only way to do great work is to love what you do.", "Steve Jobs"},
    {"If you tell the truth, you don't have to remember anything.", "Mark Twain"},
    {"Without music, life would be a mistake.", "Friedrich Nietzsche"},
    {"It is better to be hated for what you are than to be loved for what you are not.", "Andre Gide"}
};

Quote getRandomQuote() {
    srand(static_cast<unsigned int>(time(0)));
    int randomIndex = rand() % quotes.size();
    return quotes[randomIndex];
}

int main() {
    while (true) {
        Quote randomQuote = getRandomQuote();
        cout << "Quote: " << randomQuote.text << endl;
        cout <<"Author: " << randomQuote.author << endl;
        cout << "Press Enter to get a new quote." << endl;
        cin.get();
    }
    return 0;
}
