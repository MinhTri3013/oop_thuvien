#ifndef SACH_H_
#define SACH_H_

#include <string>
#include <iostream>
using namespace std;

class Sach
{
private:
	string MASach;
	string TENSach;
	int GIASach;
public:
	void setMaSach(string);
	void setTenSach(string);
	void setGiaSach(int);

	string getMaSach();
	string getTenSach();
	int getGiaSach();

	Sach();
	Sach(string, string, int);
	Sach(const Sach&);
	~Sach();

	Sach& operator=(Sach& iSach);

	void fNhapSach();
	void fXuatSach();
};

#endif
