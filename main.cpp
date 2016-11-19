#include <iostream>
#include <string>

using namespace std;

const string onesLabels[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine",
			     "Ten","Eleven","Twelve","Thirteen","Fourteen","Fiveteen","Sixteen","Seventeen"
			     "Eighteen","Nineteen"};
const string tensLabels[] = {"Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

string translateNumber(int num){
	if (num >= 100)
		return translateNumber(num / 100).append(" Hundreds ").append(translateNumber(num % 100));

	if (num >= 20){
		string result = tensLabels[(num/10)-2];
		return result.append(" ").append(translateNumber(num % 10));
	}

	return onesLabels[num];
}

int main(){
	cout << translateNumber(999) << endl;
}
