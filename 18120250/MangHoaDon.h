#ifndef __MANGHOADON_H__
#define __MANGHOADON_H__

#include "HoaDon.h"
#include <vector>

class MangHoaDon
{
private:
	vector<HoaDon> MANGHoaDon;
	int TONGTien;
public:
	//void setMangHoaDon(vector<HoaDon>& iMHD);
	vector<HoaDon> getMangHoaDon();
	void setTongTien(int iTongTien);
	int getTongTien();

	MangHoaDon();
	~MangHoaDon();

	void fThemHD(HoaDon& iHD);
	void fTinhTongTien();
	void fXuatMangHD();
};

#endif // !__MANGHOADON_H__
