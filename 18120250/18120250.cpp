#include "Sach.h"
#include "ListSach.h"
#include "HoaDon.h"
#include "MangHoaDon.h"
#include "User.h"
#include "Guest.h"

int main()
{
	ListSach L1;
	L1.fNhapList();
	L1.fXuatList();
	
	Guest gu;
	string tenSach;

	cout << "Nhap vao ten sach: ";
	cin >> tenSach;

	int pos = gu.fTimSach(L1, tenSach);
	if (pos >= 0) {// tim duoc sach va pos tra ve vi tri cua sach trong ListSach
		User user;
		int DN = user.fDN();
		if (DN == 1)// Dang nhap thanh cong
		{
			MangHoaDon MHD;
			HoaDon HD;
			int kT = 1;
			do {
				cout << "Nhap vao ten sach: ";
				cin >> tenSach;
				HD.fTimSachThemVaoHD(L1, tenSach);
				cout << "Ban muon tiep tuc (1) hay dung lai (0): ";
				cin >> kT;
			} while (kT != 0);

			MHD.fTinhTongTien();
			MHD.fXuatMangHD();
		}
	}
	return 0;
}
