// Рекурсивный перебор. Тумба-юмба.cpp 
#include <iostream>
using namespace std;
int cnt = 0;
void TumbaUmbaCout(char alpphabet[], char word[], int n) {
	if (n == strlen(word)) {
		puts(word);
		return;
	}
	for (int i = 0; i < strlen(alpphabet); i++) {
		word[n] = alpphabet[i];
		TumbaUmbaCout(alpphabet, word, n + 1);
	}
}

int TumbaUmbaCnt(char alpphabet[], char word[], int n) {

	if (n == strlen(word)) {
		cnt++;
		return;
	}
	for (int i = 0; i < strlen(alpphabet); i++) {
		word[n] = alpphabet[i];
		TumbaUmbaCnt(alpphabet, word, n + 1);
	}
	return cnt;
}
int main(){
	char word[] = "...", alphabet[]= "ABC";
	TumbaUmbaCout(alphabet, word, 0);
	cout << '\n'<< TumbaUmbaCnt(alphabet, word, 0);
	return 0;

}

