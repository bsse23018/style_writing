#include <iostream>

using namespace std;

void styleWrtitng(string word) {
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < word.size(); ++j) {
            if (word[j] == 'a' || word[j] == 'A') {
                if (i == 0)cout << "████████╗ ";
                if (i == 1)cout << "██║   ██║ ";
                if (i == 2)cout << "████████║ ";
                if (i == 3)cout << "██║   ██║ ";
                if (i == 4)cout << "██║   ██║ ";
                if (i == 5)cout << "╚═╝   ╚═╝ ";
            }
            if (word[j] == 'b' || word[j] == 'B') {
                if (i == 0)cout << "████████╗ ";
                if (i == 1)cout << "██║   ██║ ";
                if (i == 2)cout << "████████║ ";
                if (i == 3)cout << "██║   ██║ ";
                if (i == 4)cout << "████████║ ";
                if (i == 5)cout << "╚═══════╝ ";
            }
            if (word[j] == ' ') {
                if (i == 0)cout << "          ";
                if (i == 1)cout << "          ";
                if (i == 2)cout << "          ";
                if (i == 3)cout << "          ";
                if (i == 4)cout << "          ";
                if (i == 5)cout << "          ";
            }
            if (word[j] == 'c' || word[j] == 'C') {
                if (i == 0)cout << "███████╗ ";
                if (i == 1)cout << "██╔════╝ ";
                if (i == 2)cout << "██║      ";
                if (i == 3)cout << "██╚════╗ ";
                if (i == 4)cout << "███████║ ";
                if (i == 5)cout << "╚══════╝ ";
            }
            if (word[j] == 'd' || word[j] == 'D') {
                if (i == 0)cout << "████████═╗ ";
                if (i == 1)cout << "██║    ██║ ";
                if (i == 2)cout << "██║    ██║ ";
                if (i == 3)cout << "██║    ██║ ";
                if (i == 4)cout << "█████████║ ";
                if (i == 5)cout << "╚════════╝ ";
            }
            if (word[j] == 'e' || word[j] == 'E') {
                if (i == 0)cout << "███████╗ ";
                if (i == 1)cout << "██╔════╝ ";
                if (i == 2)cout << "███████╗ ";
                if (i == 3)cout << "██╚════║ ";
                if (i == 4)cout << "███████║ ";
                if (i == 5)cout << "╚══════╝ ";
            }
            if (word[j] == 'f' || word[j] == 'F') {
                if (i == 0)cout << "████████ ";
                if (i == 1)cout << "██║      ";
                if (i == 2)cout << "████████ ";
                if (i == 3)cout << "██║      ";
                if (i == 4)cout << "██║      ";
                if (i == 5)cout << "╚═╝      ";
            }
            if (word[j] == 'g' || word[j] == 'G') {
                if (i == 0)cout << "█████████ ";
                if (i == 1)cout << "██║       ";
                if (i == 2)cout << "██║██████ ";
                if (i == 3)cout << "██║  █ ██ ";
                if (i == 4)cout << "██████ ██ ";
                if (i == 5)cout << "╚═════╝   ";
            }
            if (word[j] == 'h' || word[j] == 'H') {
                if (i == 0)cout << "██╗  ██╗ ";
                if (i == 1)cout << "██║  ██║ ";
                if (i == 2)cout << "███████║ ";
                if (i == 3)cout << "██╔══██║ ";
                if (i == 4)cout << "██║  ██║ ";
                if (i == 5)cout << "╚═╝  ╚═╝ ";
            }
            if (word[j] == 'i' || word[j] == 'I') {
                if (i == 0)cout << "████████  ";
                if (i == 1)cout << "   ██║    ";
                if (i == 2)cout << "   ██║    ";
                if (i == 3)cout << "   ██║    ";
                if (i == 4)cout << "████████╗ ";
                if (i == 5)cout << "╚═══════╝ ";
            }
            if (word[j] == 'j' || word[j] == 'J') {
                if (i == 0)cout << "████████ ";
                if (i == 1)cout << "    ██║  ";
                if (i == 2)cout << "    ██║  ";
                if (i == 3)cout << "██  ██║  ";
                if (i == 4)cout << "██████║  ";
                if (i == 5)cout << "╚═════╝  ";
            }
            if (word[j] == 'l' || word[j] == 'L') {
                if (i == 0)cout << "██╗      ";
                if (i == 1)cout << "██║      ";
                if (i == 2)cout << "██║      ";
                if (i == 3)cout << "██║      ";
                if (i == 4)cout << "███████╗ ";
                if (i == 5)cout << "╚══════╝ ";
            }
            if (word[j] == 'n' || word[j] == 'N') {
                if (i == 0)cout << " █████═╗ ";
                if (i == 1)cout << "██   ██║ ";
                if (i == 2)cout << "██   ██║ ";
                if (i == 3)cout << "██   ██║ ";
                if (i == 4)cout << "██   ██║ ";
                if (i == 5)cout << "     ╚═╝ ";
            }
            if (word[j] == 'm' || word[j] == 'M') {
                if (i == 0)cout << " █████ █████  ";
                if (i == 1)cout << "██  ║██║  ██║ ";
                if (i == 2)cout << "██  ║██║  ██║ ";
                if (i == 3)cout << "██  ║██║  ██║ ";
                if (i == 4)cout << "██  ║██║  ██║ ";
                if (i == 5)cout << "╚═╝ ╚══╝  ╚═╝ ";
            }
            if (word[j] == 'o' || word[j] == 'O') {
                if (i == 0)cout << " ██████╗  ";
                if (i == 1)cout << "██╔═══██╗ ";
                if (i == 2)cout << "██║   ██║ ";
                if (i == 3)cout << "██║   ██║ ";
                if (i == 4)cout << " ╚█████╔╝ ";
                if (i == 5)cout << "  ╚════╝  ";
            }
            if (word[j] == 'p' || word[j] == 'P') {
                if (i == 0)cout << "███████═╗ ";
                if (i == 1)cout << "██║   ██║ ";
                if (i == 2)cout << "██║█████╝ ";
                if (i == 3)cout << "██║       ";
                if (i == 4)cout << "██║       ";
                if (i == 5)cout << "╚═╝       ";
            }
            if (word[j] == 'R' || word[j] == 'r') {
                if (i == 0)cout << "  █████  ";
                if (i == 1)cout << "╔██   ██ ";
                if (i == 2)cout << "║███████ ";
                if (i == 3)cout << "║██ ██   ";
                if (i == 4)cout << "║██  ██  ";
                if (i == 5)cout << "║██   ██ ";
            }
            if (word[j] == 'k' || word[j] == 'K') {
                if (i == 0)cout << "║██   ██  ";
                if (i == 1)cout << "║██  ██   ";
                if (i == 2)cout << "║█████    ";
                if (i == 3)cout << "║██  ██   ";
                if (i == 4)cout << "║██   ██  ";
                if (i == 5)cout << "╚═╝   ╚═╝ ";
            }
            if (word[j] == 'x' || word[j] == 'X') {
                if (i == 0)cout << "  \\\\    // ";
                if (i == 1)cout << "   \\\\  //  ";
                if (i == 2)cout << "    //\\\\   ";
                if (i == 3)cout << "   //  \\\\  ";
                if (i == 4)cout << "  //    \\\\ ";
                if (i == 5)cout << "//      \\\\";
            }
            if (word[j] == 'v' || word[j] == 'V') {
                if (i == 0)cout << "\\\\        // ";
                if (i == 1)cout << " \\\\      //  ";
                if (i == 2)cout << "  \\\\    //   ";
                if (i == 3)cout << "   \\\\  //    ";
                if (i == 4)cout << "    \\\\//     ";
                if (i == 5)cout << "     \\/       ";
            }
            if (word[j] == 'z' || word[j] == 'Z') {
                if (i == 0)cout << "███████ ";
                if (i == 1)cout << "   //// ";
                if (i == 2)cout << "  ////  ";
                if (i == 3)cout << " ////   ";
                if (i == 4)cout << "////    ";
                if (i == 5)cout << "███████ ";
            }
            if (word[j] == 'y' || word[j] == 'Y') {
                if (i == 0)cout << "██    ██ ";
                if (i == 1)cout << "██    ██ ";
                if (i == 2)cout << "████████ ";
                if (i == 3)cout << "      ██ ";
                if (i == 4)cout << "██    ██ ";
                if (i == 5)cout << "████████ ";
            }
            if (word[j] == 't' || word[j] == 'T') {

                if (i == 0)cout << "████████ ";
                if (i == 1)cout << "   ██║   ";
                if (i == 2)cout << "   ██║   ";
                if (i == 3)cout << "   ██║   ";
                if (i == 4)cout << "   ██║   ";
                if (i == 5)cout << "   ╚═╝   ";
            }
            if (word[j] == 'u' || word[j] == 'U') {

                if (i == 0)cout << "║██║  ║██║ ";
                if (i == 1)cout << "║██║  ║██║ ";
                if (i == 2)cout << "║██║  ║██║ ";
                if (i == 3)cout << "║██╚══╝██║ ";
                if (i == 4)cout << "║████████║ ";
                if (i == 5)cout << "╚════════╝ ";
            }
            if (word[j] == 'W' || word[j] == 'w') {

                if (i == 0)cout << "║██║          ║██║ ";
                if (i == 1)cout << "║██║          ║██║ ";
                if (i == 2)cout << "║██║  ║████║  ║██║ ";
                if (i == 3)cout << "║██╚══╝████╚══╝██║ ";
                if (i == 4)cout << "║████████████████║ ";
                if (i == 5)cout << "╚════════════════╝ ";
            }
            if (word[j] == 's' || word[j] == 'S') {

                if (i == 0)cout << "███████  ";
                if (i == 1)cout << "██║      ";
                if (i == 2)cout << "███████║ ";
                if (i == 3)cout << "    ║██║ ";
                if (i == 4)cout << "███████║ ";
                if (i == 5)cout << "╚══════╝ ";
            }
        }
        cout << endl;
    }
}

int main() {
    styleWrtitng("Ali is my ");
}