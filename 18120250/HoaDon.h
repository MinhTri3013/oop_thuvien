#ifndef __HOADON_H__
#define __HOADON_H__

#include "ListSach.h"
#include "Sach.h"
#include <iostream>
#include <string>
using namespace std;

class HoaDon
{
private:
	Sach mSACH;
	int SOLuong;
	int GIATien;
public:
	void setSach(Sach& iSach);
	void setSoLuong(int iSoLg);
	Sach getSach();
	int getSoLuong();
	int getGiaTien();

	HoaDon();
	HoaDon(Sach iSach, int iSL, int iGiaTien);
	~HoaDon();
	HoaDon& operator=(HoaDon& iHD);

	void fTinhGiaTien();
	void fXuatHoaDon();
	void fTimSachThemVaoHD(ListSach& iListSach, string iTenSach);
};

#endif // !__HOADON_H__