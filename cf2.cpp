#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	float num1 = 2.3453;
	fesetround(FE_DOWNWARD);
	cout<<rint(num1)<<endl;
	fesetround(FE_UPWARD);
	cout<<rint(num1);

	return 0;
}