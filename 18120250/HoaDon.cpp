#include "HoaDon.h"

void HoaDon::setSach(Sach& iSach)
{
	this->mSACH = iSach;
}

void HoaDon::setSoLuong(int iSoLg)
{
	this->SOLuong = iSoLg;
}

Sach HoaDon::getSach()
{
	return mSACH;
}

int HoaDon::getSoLuong()
{
	return SOLuong;
}

int HoaDon::getGiaTien()
{
	return GIATien;
}

HoaDon::HoaDon()
{
	GIATien = -1;
	SOLuong = -1;
}

HoaDon::HoaDon(Sach iSach, int iSL, int iGiaTien)
{
	this->mSACH = iSach;
	this->SOLuong = iSL;
	this->GIATien = iGiaTien;
}

HoaDon::~HoaDon()
{
}

HoaDon& HoaDon::operator=(HoaDon& iHD)
{
	mSACH = iHD.mSACH;
	SOLuong = iHD.SOLuong;
	GIATien = iHD.GIATien;
	return *this;
}

void HoaDon::fTinhGiaTien()
{
	this->GIATien = SOLuong * mSACH.getGiaSach();
}

void HoaDon::fXuatHoaDon()
{
	this->mSACH.fXuatSach();
	cout << "So luong: " << SOLuong << "	Gia hoa don: " << GIATien << endl;
}

void HoaDon::fTimSachThemVaoHD(ListSach& iListSach, string iTenSach)
{
	int temp = iListSach.fTimSach(iTenSach);
	if (temp >= 0) {
		this->setSach(iListSach.getList()[temp]);
		cout << "Nhap vao so luong: ";
		int SL;
		cin >> SL;

		this->setSoLuong(SL);
		this->fTinhGiaTien();
	}
}
