#include "hedlab.h"

template <typename T>
void bstodec(std::string& str, T& ans){
	/*
	if (str[str.length() - 1] == '1')
		ans = 1;
	else
		ans = 0;
		*/
	int i = str.length() -1;
	for (std::string::iterator it = str.begin(); it!= str.end(); it++){
		if (*it == '1')
			ans += pow(2,i);
		//std::cout << i << ' ' << ans << std::endl;
		i--;
	};
}	

template <typename T>
Exp expand(T x) {
	std::string zeros = "0000000000000000";
	std::string one = "10000000000000000";
	Exp A;
	int sz = 0;
	unsigned int uz = 0;
	std::bitset<16> xb(x);
	std::string sxb = xb.to_string();
	if (x >= 0){
		std::string str = zeros + sxb;
		bstodec(str, sz);
		bstodec(str, uz);
		A.sign_z = sz;
		A.usign_z = uz;
	}
	else {
		A.sign_z = static_cast<int>(x);
		//std::string strs = one + sxb.substr(1,15);
		//std::string strstoconvert = strs.substr(1,31);
		//std::cout << strstoconvert << std::endl;
		std::string stru = zeros + "0" + sxb.substr(1,15);
		//A.usign_z = static_cast<unsigned int>(abs(x));
		bstodec(stru, uz);
		A.usign_z = uz;
	};
	return A;
}

int main(){
	/*
	std::string str = "1111";
	int k;
	bstodec(str, k);
	std::cout << k << '\n';
	*/
	short n = -126;
	void* pn = &n;
	print16(pn);
	Exp N = expand(n);
	void* pSN = &N.sign_z;
	void* pUN = &N.usign_z;
	print32(pSN);
	print32(pUN);
	
	unsigned short m = 986;
	void* pm = &m;
	print16(pm);
	Exp M = expand(m);
	void* pSM = &M.sign_z;
	void* pUM = &M.usign_z;
	print32(pSM);
	print32(pUM);

	return 0;
}
