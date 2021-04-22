// Решето Эратосфена.cpp

#include <iostream>
#include <vector>
using namespace std;
void era(bool* prime, long long n) {
	for (int i = 2; i <= n; i++)
		prime[i] = 1;
	prime[0] = prime[1] = 0;
	long long pr_number = 2;
	while (pr_number * pr_number <= n)
	{
		if (prime[pr_number])
			for (long long i = pr_number * pr_number; i <= n; i += pr_number)
				prime[i] = 0;
		pr_number++;
	}
}
//int main()
//{
//	vector <int> masPrime;
//	long long p = 1000000;
//	bool* prime;
//	prime = new bool[p];
//	era(prime, p);
//	int cnt=0, n, k;
//	cin >> k;
//	for (int l = 0; l < k; l++)
//	{
//		cin >> n;
//		for (int i = 0; i < p; i++)
//				if (prime[i])
//					masPrime.push_back(i);
//		cout << masPrime[n-1] << endl; 
//		masPrime.clear();
//	}
//	return 0;
//	
//}

int main()
{
	vector <int> masPrime;
	long long p = 1000000;
	bool flag = false;
	bool* prime;
	prime = new bool[p];
	era(prime, p);
	int cnt = 0, n, k;
		cin >> n >> k;
		for (int i = 0; i < p; i++)
			if (prime[i])
				masPrime.push_back(i);
		int masSize = masPrime.size();
		for (int l = 0; l<masSize && masPrime[l] <=n; l++)
		{
			flag = false;
			for (int i = 0; (i +1) < masPrime[l]; i++)
				if (masPrime[l] == (1 + masPrime[i] + masPrime[i + 1]))
					flag = true;
			if (flag) cnt++;
		}
		if (cnt >=k) cout << "YES";
		else cout << "NO";
		masPrime.clear();
	return 0;
}


