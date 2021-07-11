#include <iostream>  
using namespace std;  
class NhanVien { 
    int msnv;    
    string ten;
    int tuoi;
    public:  
       static string tenCongTy;
       NhanVien(int msnv, string ten, int tuoi) {    
            this->msnv = msnv;    
            this->ten = ten;    
            this->tuoi = tuoi; 
       }    
       void HienThi() {    
            cout << ten << endl;
            cout << "   Ma so nhan vien: " << msnv << endl;
            cout << "   Tuoi: " << tuoi << endl;
            cout << "   Ten cong ty: " << tenCongTy << endl;
       }    
};  
 
string NhanVien::tenCongTy = "TNHH Tin Hoc";
 
int main() {  
    NhanVien n1 =  NhanVien(111231, "Nguyen Van A", 25);    
    NhanVien n2 =  NhanVien(213214, "Nguyen Van B", 40);
    NhanVien n3 =  NhanVien(213215, "Nguyen Van C", 67);
    n1.HienThi();    
    n2.HienThi();
    n3.HienThi();
    return 0;  
}