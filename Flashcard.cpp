#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Flashcard {
    string question;
    string answer;
};

vector<Flashcard> flashcards;

void addFlashcard() {
    Flashcard newFlashcard;
    cout << "Enter the question: ";
    getline(cin, newFlashcard.question);
    cout << "Enter the answer: ";
    getline(cin, newFlashcard.answer);
    flashcards.push_back(newFlashcard);
    cout << "Flashcard added!"<< "\n" <<endl;
}

void quiz() {
    int score = 0;
    for (const auto& flashcard : flashcards) {
        string userAnswer;
        cout << "Question: " << flashcard.question <<endl ;
        cout <<"Enter your answer: ";
        getline(cin, userAnswer);
        if (userAnswer == flashcard.answer) {
            cout << "Correct!" <<endl;
            score++;
        } else {
            cout << "No, the correct answer is " << flashcard.answer << endl;
        }
    }
    cout << "Your final score is " << score << " out of " << flashcards.size() << "\n" <<endl;
}

int main() {
    int choice;
    while (true) {
        cout << "1. Add flashcard"<< endl;
        cout << "2. Take quiz"<< endl;
        cout << "3. Quit" << endl;
        cout << "What would you like to do? ";
        cin >> choice;
        cin.ignore(); // ignore newline character
        if (choice == 1) {
            addFlashcard();
        } else if (choice == 2) {
            quiz();
        } else if (choice == 3) {
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}
