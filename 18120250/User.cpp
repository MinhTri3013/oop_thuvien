#include "User.h"


void User::setID(string iID)
{
	ID = iID;
}

void User::setPass(string iPass)
{
	PASS = iPass;
}

MangHoaDon User::getMHD()
{
	return MHD;
}

string User::getID()
{
	return ID;
}

string User::getPass()
{
	return PASS;
}

User::User()
{
}


User::~User()
{
}

void User::fUpdateMHD()
{
	menuUpdate();
	int lenh;
	do
	{
		cin >> lenh;
		if (lenh == 1) {
			fSuaMHD();
		}
		else if (lenh == 2) {
			fXoa1HD();
		}
	} while (lenh != 3);
	MHD.fXuatMangHD();
	MHD.fTinhTongTien();
}

void User::menuUpdate()
{
	cout << "1. Sua so luong cua 1 ptu trong mang hoa don" << endl;
	cout << "2. Xoa 1 ptu trong mang hoa don" << endl;
	cout << "3. Thoat" << endl;
	cout << "Nhap vao lenh cua ban: ";
}

void User::fSuaMHD()
{
	MHD.fXuatMangHD();
	int pos = 1;
	do
	{
		cout << "Nhap vao STT hoa don muon sua: ";
		cin >> pos;
	} while (pos<0 && pos>MHD.getMangHoaDon().size() - 1);

	MHD.getMangHoaDon()[pos].fXuatHoaDon();
	int newSL = 1;
	do
	{
		cout << "Nhap so luong sach moi cho hoa don nay: ";
		cin >> newSL;
	} while (newSL < 0);
	MHD.getMangHoaDon()[pos].setSoLuong(newSL);
}

void User::fXoa1HD()
{
	MHD.fXuatMangHD();
	int pos = 1;
	do
	{
		cout << "Nhap vao STT hoa don muon xoa: ";
		cin >> pos;
	} while (pos<0 && pos>MHD.getMangHoaDon().size() - 1);

	vector<HoaDon>::iterator pos2 = MHD.getMangHoaDon().begin();
	for (int i = 0; i <= pos; i++) {
		++pos2;
	}
	MHD.getMangHoaDon().erase(pos2);
}

void User::menuDN()
{
	cout << "1. Ban co muon dang nhap de mua sach ko? " << endl;
	cout << "2. Thoat" << endl;
	cout << "Nhap lenh cua ban: ";
}

int User::fDN()
{
	int lenh = 1;
	do
	{
		menuDN();
		cin >> lenh;
		if (lenh == 1) {
			cout << "Ten dang nhap: ";
			string tenDN;
			cin >> tenDN;
			cout << "Mat khau: ";
			string MK;
			cin >> MK;
			if (tenDN == "abc"&&MK == "123")
			{
				cout << "Dang nhap thanh cong!" << endl;
				return 1;
			}
			else cout << "Dang nhap that bai!" << endl;
		} 
	} while (lenh != 1);
	return 0;
}
