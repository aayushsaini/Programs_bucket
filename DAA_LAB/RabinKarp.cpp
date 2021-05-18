#include <stdc++.h>
using namespace std;

#define f 3 


void search(char pat[], char txt[], int q)
{
	int M = strlen(pat);
	int N = strlen(txt);
	int i, j;
	int p = 0; 
	int t = 0; 
	int h = 1;

	for (i = 0; i < M - 1; i++)
		h = (h * f) % q;

	for (i = 0; i < M; i++) {
		p = (f * p + pat[i]) % q;
		t = (f * t + txt[i]) % q;
	}

	for (i = 0; i <= N - M; i++) {
        if ( p == t ) {
            for (j = 0; j < M; j++) {
				if (txt[i+j] != pat[j])
					break;
			}
			if (j == M)
				cout<<"Pattern found at index "<< i<<endl;
		}
// (d*(t(s)-h(T[s+1]))+T[s+m+1])modQ  -  t(s+1)

		if ( i < N-M ) {
			// t = (f*(t - txt[i]*h) + txt[i+M])%q;
            t = (f*(t-h*txt[i]) + txt[i+M])%q  ;
            t = t+q;
            // t=(t<0)?(t+q):0;
		}
	}
}

int main()
{
	char strMain[] = "ABCACBACBACBACBBBACBABCABCACC";
	char strSub[] = "ABC";

	int q = 13;
	
	search(strSub, strMain, q);
	return 0;
}