#ifndef __USER_H__
#define __USER_H__

#include "ListSach.h"
#include "Guest.h"
#include "MangHoaDon.h"

class User: Guest
{
private:
	MangHoaDon MHD;
	string ID;
	string PASS;
public:
	void setID(string iID);
	void setPass(string iPass);
	MangHoaDon getMHD();
	string getID();
	string getPass();

	User();
	~User();

	void fUpdateMHD();
	void menuUpdate();
	void fSuaMHD();
	void fXoa1HD();
	void menuDN();
	int fDN();
};
 

#endif // !__USER_H__


