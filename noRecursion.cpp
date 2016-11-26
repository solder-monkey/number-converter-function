#include <iostream>
#include <string>

using namespace std;

string translateNumber(int num){
	const string onesLabels[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine",
			     "Ten","Eleven","Twelve","Thirteen","Fourteen","Fiveteen","Sixteen","Seventeen"
			     "Eighteen","Nineteen"};
	const string tensLabels[] = {"Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

    if (num==0)
        return "Zero";

	string result = "";
	if (num >= 100)	{
		result.append(onesLabels[num / 100]).append(" Hundred ");
		num %= 100;
	}
	if (num >= 20) {
		result.append(tensLabels[(num/10)-2]).append(" ");
		num %= 10;
	}
	if (num > 0){
		result.append(onesLabels[num]);
	}

	return result;
}

int main(){
	cout << translateNumber(913) << endl;
}
