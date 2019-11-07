#include "ListSach.h"
#include "Sach.h"

void ListSach::fNhapList()
{
	cout << "Nhap vao so luong sach: ";
	cin >> this->SOLuong;
	LISTSach = new Sach[SOLuong];
	for (int i = 0; i < SOLuong; i++) {
		cout << "-Nhap cuon thu " << i+1 << " :" << endl;
		LISTSach[i].fNhapSach();
	}
}

void ListSach::fXuatList()
{
	cout << endl << "== XUAT LIST SACH ==" << endl;
	
	for (int i = 0; i < SOLuong; i++) {
		LISTSach[i].fXuatSach();
	}
}

void ListSach::setListSL(Sach* iListSach,int iSoLuong)
{
	SOLuong = iSoLuong;
	if (this->LISTSach != NULL) {
		delete[]LISTSach;
	}
	LISTSach = new Sach[SOLuong];
	for (int i = 0; i < SOLuong; i++) {
		LISTSach[i] = iListSach[i];
	}
}

Sach* ListSach::getList()
{
	return LISTSach;
}

int ListSach::getSoLuong()
{
	return SOLuong;
}

ListSach::ListSach()
{
	LISTSach = NULL;
	SOLuong = -1;
}


ListSach::~ListSach()
{
	if (LISTSach != NULL) {
		delete[]LISTSach;
	}
}

void ListSach::menuTimSach(int pos)
{
	cout << "	1. Xoa sach nay" << endl;
	cout << "	2. Thay doi gia sach" << endl;
	cout << "Nhap lenh cua ban: ";
	int lenh;
	cin >> lenh;
	switch (lenh)
	{
	case 1:
		LISTSach[pos].~Sach();
		cout << "Da xoa thanh cong" << endl;
		break;
	case 2:
		LISTSach[pos].fXuatSach();
		cout << endl << "Nhap gia sach moi: ";
		int Gia;
		cin >> Gia;
		LISTSach[pos].setGiaSach(Gia);
		break;
	default:
		cout << "Ban nhap da nhap sai lenh" << endl;
		break;
	}
}

int ListSach::fTimSach(string TenSach)
{
	int count = 0;
	int pos;
	for (int i = 0; i < SOLuong; i++) {
		if (LISTSach[i].getTenSach() == TenSach) {
			count++;
			pos = i;
		}
	}

	if (count == 0) {
		cout << "Khong tim thay sach!" << endl;
		return -1;
	}
	else if (count == 1) {
		return pos;
	}
	else {
		cout << "Tim thay nhieu hon 1 cuon sach trong list. Hay nhap ma sach: ";
		string MaSach;
		cin >> MaSach;
		for (int i = 0; i < SOLuong; i++) {
			if (LISTSach[i].getMaSach() == MaSach && LISTSach[i].getTenSach() == TenSach) {
				return i;
			}
		}
	}
	return -1;
}
