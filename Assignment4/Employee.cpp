#include <iostream>

using namespace std;


class NhanVien{
    string TenNV;
    string MaNV;
    string Phong;
    string ChucVu;
    public:
    NhanVien(string tenNV, string maNV, string phong, string chucVu){
        this->TenNV=tenNV;
        this->MaNV=maNV;
        this->Phong=phong;
        this->ChucVu=chucVu;
    }
    string getMaNV(){
        return this->MaNV;
    }
    void setMaNV(string maNV){
        if(maNV.length()==5){
            this->MaNV=maNV;
        }
    }
    string getTenNV(){
        return this->TenNV;
    }
    void setTenNV(string tenNV){
        this->TenNV = tenNV;
    }
    string getPhong(){
        return this->Phong;
    }
    void setPhong(string phong){
        this->Phong = phong;
    }
    string getChucVu(){
        return this->ChucVu;
    }
    void setChucVu(string chucVu){
        this->TenNV = chucVu;
    }
    void display(){
        cout<<this->TenNV<< " - "<< this->MaNV<<" - "<< this->Phong<<" - "<<this->ChucVu<<endl;
    }
};
int main(){
    NhanVien nv1("Susan Meyers ","47899","Accouting","Vice President");
    NhanVien nv2("Mark Jones ","39119","IT","Programmer");
    NhanVien nv3("Joy Rogers ","81774","Manufacturing ","Engineer");
    nv1.display();
    nv2.display();
    nv3.display();
    cout<<"con cho suc vat hoan";
    return 0;
}