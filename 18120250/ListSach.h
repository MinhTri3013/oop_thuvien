#ifndef LISTSACH_H_
#define LISTSACH_H_

#include "Sach.h"

class ListSach
{
private:
	Sach* LISTSach;            
	int SOLuong;
public:
	void setListSL(Sach* iListSach,int iSoLuong);
	Sach* getList();
	int getSoLuong();

	ListSach();
	~ListSach();

	void fNhapList();
	void fXuatList();
	void menuTimSach(int);
	int fTimSach(string);
};

#endif 

