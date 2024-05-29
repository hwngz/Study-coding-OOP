#include <iostream>
#include <string>
#include <vector>
using namespace std;
class CongTy
{ // class cơ bản, chứa thông tin nhân viên
private:
	string ten, ngaysinh, noisinh, diachi;
	int ID;

public:
	CongTy(void);
	~CongTy(void);
	virtual void nhap()
	{ // hàm ảo, nhập nhân viên
		cout << "Ho ten: " << endl;
		cin >> ten;
		cout << "Ngay sinh: " << endl;
		cin >> ngaysinh;
		cout << "Noi sinh: " << endl;
		cin >> noisinh;
		cout << "Dia chi: " << endl;
		cin >> diachi;
		cout << "ID: " << endl;
		cin >> ID;
	}
	virtual void xuat()
	{ // hàm ảo, xuất thông tin nhân viên
		cout << ten << endl
			 << ngaysinh << endl
			 << noisinh << endl
			 << diachi << ID << endl;
	}
	virtual long luong()
	{ // tiền lương
		return 0;
	}
};
CongTy::CongTy(void)
{
}
CongTy::~CongTy(void)
{
}
class Sanxuat : public CongTy
{ // Nhân viên sản xuất, là một nhân viên, kế thừa lớp CongTy
private:
	long sosp;

public:
	Sanxuat(void);
	~Sanxuat(void);
	virtual void nhap()
	{ // nhập thông tin nhân viên, và số sản phẩm
		CongTy::nhap();
		cout << "Nhap so san pham: " << endl;
		cin >> sosp;
	}
	virtual void xuat()
	{ // xuất thông tin nhân viên sản xuất
		CongTy::xuat();
		cout << "so san pham: " << sosp << endl;
	}
	virtual long luong()
	{ // tính tiền lương của nhân viên
		return sosp * 20000;
	}
};
Sanxuat::Sanxuat(void)
{
}
Sanxuat::~Sanxuat(void)
{
}
class NhanVien : public CongTy
{
private:
	int ngay;

public:
	NhanVien(void);
	~NhanVien(void);
	virtual void nhap()
	{ // thông tin của nhân viên bình thường
		CongTy::nhap();
		cout << "Nhap so ngay lam viec: ";
		cin >> ngay;
	}
	virtual void xuat()
	{ // xuất thông tin và số ngày làm việc
		CongTy::xuat();
		cout << "so ngay lam viec: " << ngay << endl;
	}
	virtual long luong()
	{ // tính tiền lương của nhân viên bình thường
		return ngay * 55000;
	}
};
NhanVien::NhanVien(void)
{
}
NhanVien::~NhanVien(void)
{
}
class quanly : public CongTy
{ // Quản lí, cũng là một nhân viên
private:
	int hesoluong;

public:
	quanly(void);
	~quanly(void);

	virtual void nhap()
	{ // nhập thông tin quản lí
		CongTy::nhap();
		cout << "Nhap he so luong: " << endl;
		cin >> hesoluong;
	}
	virtual void xuat()
	{ // xuất thông tin quản lí
		CongTy::xuat();
		cout << "he so luong: " << hesoluong << endl;
	}
	virtual long luong()
	{ // trả về giá trị lương quản lí
		return hesoluong * 55000;
	}
};
quanly::quanly(void)
{
}
quanly::~quanly(void)
{
}
struct Node
{ // thông tin node, lưu giá trị lương, vị trí và kiểu nhân viên
	int luong;
	int vt;
	int kieu;
};
class quanlynhanvien : public CongTy
{
private:
	vector<CongTy *> sanxuat_; // vector lưu thông tin
	vector<CongTy *> nhanvien_;
	vector<CongTy *> quanly_;

public:
	void timnhanvienluongcao()
	{ // tìm nhân viên lương cao nhất

		Node node;
		cout << "Nhan vien co luong cao nhat la: ";
		node.luong = sanxuat_[0]->luong();
		node.vt = 0;
		node.kieu = 1;
		for (int i = 1; i < sanxuat_.size(); i++)
		{
			if (sanxuat_[i]->luong() > node.luong)
			{
				node.luong = sanxuat_[i]->luong();
				node.vt = i;
				node.kieu = 1;
				cout << node.luong;
			}
		}
		for (int i = 0; i < nhanvien_.size(); i++)
		{
			if (nhanvien_[i]->luong() > node.luong)
			{
				node.luong = nhanvien_[i]->luong();
				node.vt = i;
				node.kieu = 2;
				cout << node.luong;
			}
		}
		for (int i = 0; i < quanly_.size(); i++)
		{
			if (quanly_[i]->luong() > node.luong)
			{
				node.luong = quanly_[i]->luong();
				node.vt = i;
				node.kieu = 3;
				cout << node.luong;
			}
		} // nếu kiểu là 1 thì xuất giá trị sản xuất, kiểu là 2 thì xuất giá trị nhân viên, còn lại xuất giá trị của quản lí
		if (node.kieu == 1)
			sanxuat_[node.vt]->xuat();
		else if (node.kieu == 2)
			nhanvien_[node.vt]->xuat();
		else if (node.kieu == 3)
			quanly_[node.vt]->xuat();
		system("pause>pls");
	}
	void ThemNhanVien() // thêm nhân viên vào trong vector
	{
		CongTy *nhanvien;
		int choose;
		do
		{

			cout << "\n1.Them Nhan Vien San Xuat.";
			cout << "\n2.Them nhan vien.";
			cout << "\n3.Them nhan vien quan ly.";
			cout << "\n4.Quay Lai";
			cin >> choose;
			switch (choose)
			{
			case 1:
			{
				nhanvien = new Sanxuat;
				nhanvien->nhap();
				sanxuat_.push_back(nhanvien);
			}
			break;
			case 2:
			{
				nhanvien = new NhanVien;
				nhanvien->nhap();
				nhanvien_.push_back(nhanvien);
			}
			break;
			case 3:
			{
				nhanvien = new quanly;
				nhanvien->nhap();
				quanly_.push_back(nhanvien);
			}
			break;
			default:
				break;
			}
		} while (choose != 4);
	}
	void XuatNhanVien() // xuất thông tin tất cả nhân viên theo từng vị trí
	{
		int choose;
		do
		{
			system("cls");
			cout << "\n1.Xuat nhan vien san xuat.";
			cout << "\n2.Xuat nhan vien .";
			cout << "\n3.Xuat nhan vien quan ly.";
			cout << "\n4.Quay Lai";
			cin >> choose;
			switch (choose)
			{
			case 1:
			{
				system("cls");
				cout << "\nDanh sach nhan vien san xuat.";
				for (int i = 0; i < sanxuat_.size(); i++)
				{
					sanxuat_[i]->xuat();
				}
				system("pause>pls");
			}
			break;
			case 2:
			{
				system("cls");
				cout << "\nDanh sach nhan vien .";
				for (int i = 0; i < nhanvien_.size(); i++)
				{
					nhanvien_[i]->xuat();
				}
				system("pause>pls");
			}
			break;
			case 3:
			{
				system("cls");
				cout << "\nDanh sach nhan vien quan ly.";
				for (int i = 0; i < quanly_.size(); i++)
				{
					quanly_[i]->xuat();
				}
				system("pause>pls");
			}
			break;
			default:
				break;
			}
		} while (choose != 4);
	}
	void TinhTienLuong() // tính tiền lương của nhân viên
	{
		int choose;
		unsigned int s1 = 0, s2 = 0, s3 = 0;
		do
		{
			system("cls");
			cout << "\n1.Tinh tong tien luong cua nhan vien san xuat.";
			cout << "\n2.Tinh tong tien luong cua nhan vien.";
			cout << "\n3.Tinh tong tien luong cua nhan vien quan ly.";
			cout << "\n4.Tinh tong tien luong cua tat ca nhan vien.";
			cout << "\n5.Quay Lai";
			cin >> choose;
			switch (choose)
			{
			case 1:
			{
				system("cls");
				for (int i = 0; i < sanxuat_.size(); i++)
				{
					s1 += sanxuat_[i]->luong();
				}
				cout << "\n Tong tien luong cua nhan vien san xuat la.";
				cout << "\nLuong:" << s1;
				system("pause>pls");
			}
			break;
			case 2:
			{
				system("cls");
				for (int i = 0; i < quanly_.size(); i++)
				{
					s2 += quanly_[i]->luong();
				}
				cout << "\n Tong tien luong cua nhan vien san xuat la.";
				cout << "\nLuong:" << s2;
				system("pause>pls");
			}
			break;
			case 3:
			{
				system("cls");
				for (int i = 0; i < nhanvien_.size(); i++)
				{
					s3 += nhanvien_[i]->luong();
				}
				cout << "\n Tong tien luong cua nhan vien san xuat la.";
				cout << "\nLuong:" << s3;
				system("pause>pls");
			}
			break;
			case 4:
			{
				system("cls");
				cout << "\nTong tien luong cua tat ca nhan vien la:";
				cout << "\nTong Luong:" << s1 + s2 + s3;
				system("pause>pls");
			}
			break;
			default:
				break;
			}
		} while (choose != 5);
	}
};
void Menu(quanlynhanvien quanlynhanvien) // menu chọn chức năng
{
	int choose;
	do
	{
		system("cls");
		cout << "\n1.Them Nhan vien.";
		cout << "\n2.Xuat Nhan Vien.";
		cout << "\n3.Tinh Luong.";
		cout << "\n4.Nhan vien co luong cao nhat.";
		cout << "\n5.Thoat!";
		cin >> choose;
		switch (choose)
		{
		case 1:
			quanlynhanvien.ThemNhanVien();
			break;
		case 2:
			quanlynhanvien.XuatNhanVien();
			break;
		case 3:
			quanlynhanvien.TinhTienLuong();
			break;
		case 4:
			quanlynhanvien.timnhanvienluongcao();
			break;
		default:
			break;
		}
	} while (choose != 4);
}

int main()
{
	quanlynhanvien qlnv;
	Menu(qlnv);
	system("pause");
	return 0;
}