#include "Sach.h"



void Sach::setMaSach(string MaSach)
{
	this->MASach = MaSach;
}

string Sach::getMaSach()
{
	return MASach;
}

void Sach::setTenSach(string TenSach)
{
	this->TENSach = TenSach;
}

string Sach::getTenSach()
{
	return TENSach;
}

void Sach::setGiaSach(int GiaSach)
{
	this->GIASach = GiaSach;
}

int Sach::getGiaSach()
{
	return this->GIASach;
}

Sach::Sach()
{
	this->MASach = ""; 
	this->TENSach = "";
	this->GIASach = -1;
}

Sach::Sach(string iMa, string iTen, int iGia)
{
	this->MASach = iMa;
	this->TENSach = iTen;
	this->GIASach = iGia;
}

Sach::Sach(const Sach& iSach)
{
	this->MASach = iSach.MASach;
	this->TENSach = iSach.TENSach;
	this->GIASach = iSach.GIASach;
}

Sach::~Sach()
{
	this->MASach = "";
	this->TENSach = "";
	this->GIASach = -1;
}

Sach& Sach::operator=(Sach& iSach)
{
	this->TENSach = iSach.TENSach;
	this->MASach = iSach.MASach;
	this->GIASach = iSach.GIASach;
	return *this;
}

void Sach::fNhapSach()
{
	cout << "Nhap Ma Sach (3 ky tu): ";
	cin >> this->MASach;
	cin.ignore();
	cout << "Nhap Ten Sach: ";
	getline(cin, this->TENSach);
	cout << "Nhap Gia Sach: ";
	cin >> this->GIASach;
}

void Sach::fXuatSach()
{
	cout << "Ma Sach: " << this->MASach;
	cout << "	Ten Sach: " << this->TENSach;
	cout << "	Gia Sach: " << this->GIASach << endl;
}
