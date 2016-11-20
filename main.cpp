#include <iostream>
#include <string>

using namespace std;

string translateNumber(int num){
	const string onesLabels[] = {"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine",
			     "Ten","Eleven","Twelve","Thirteen","Fourteen","Fiveteen","Sixteen","Seventeen"
			     "Eighteen","Nineteen"};
	const string tensLabels[] = {"Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

	if (num >= 100)	return translateNumber(num / 100).append(" Hundred ").append(translateNumber(num % 100));
	if (num >= 20) return string().append(tensLabels[(num/10)-2]).append(" ").append(translateNumber(num % 10));
	return onesLabels[num];
}

int main(){
	cout << translateNumber(999) << endl;
}
