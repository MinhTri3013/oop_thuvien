#include "MangHoaDon.h"

/*void MangHoaDon::setMangHoaDon(vector<HoaDon>& iMHD)
{
	if (iMHD.size() > 0) {
		HoaDon temp;
		for (int i = 0; i < iMHD.size(); i++) {
			temp = iMHD[i];
			this->MANGHoaDon.push_back(temp);
		}
	}
}*/

vector<HoaDon> MangHoaDon::getMangHoaDon()
{
	return MANGHoaDon;
}

void MangHoaDon::setTongTien(int iTongTien)
{
	TONGTien = iTongTien;
}

int MangHoaDon::getTongTien()
{
	return TONGTien;
}

MangHoaDon::MangHoaDon()
{
	TONGTien = -1;
}

MangHoaDon::~MangHoaDon()
{
	if (MANGHoaDon.size() > 0) {
		MANGHoaDon.clear();
	}
}

void MangHoaDon::fThemHD(HoaDon& iHD)
{
	this->MANGHoaDon.push_back(iHD);
}

void MangHoaDon::fTinhTongTien()
{
	int sum = 0;
	for (int i = 0; i < MANGHoaDon.size(); i++) {
		sum += MANGHoaDon[i].getGiaTien();
	}
	TONGTien = sum;
}

void MangHoaDon::fXuatMangHD()
{
	if (MANGHoaDon.size() > 0) {
		cout << "====MANG HOA DON====" << endl;
		for (int i = 0; i < MANGHoaDon.size(); i++) {
			cout << "HOA DON THU " << i + 1 << endl;
			MANGHoaDon[i].fXuatHoaDon();
		}
		cout << "TONG TIEN: " << TONGTien << endl;
	}
}

