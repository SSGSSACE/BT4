#include "HS.h"
void HS::Nhap()
{
    fflush(stdin);
    std::cout << "\nNhap ten: ";
    getline(cin,name);
    do
    {
        std::cout << "\nNhap dien Toan: ";
        cin>>diemtoan;
        if (diemtoan<0||diemvan>10)
        {
            std::cout << "Diem toan khong hop le. Xin nhap lai" << std::endl;
        }
        
    } while(diemtoan<0||diemvan>10);
    do
    {
        std::cout << "\nNhap diem Van: ";
        cin>>diemvan;
        if (diemvan<0||diemvan>10)
        {
            std::cout << "Diem van khong hop le. Xin nhap lai" << std::endl;
        }
        
    } while(diemvan<0||diemvan>10);
}
void HS::Xuat(){
    std::cout << "\nTen: " << name;
    std::cout << "\nDiem Toan: " << diemtoan;
    std::cout << "\nDiem Van: " << diemvan;
    std::cout << "\nDiem trung binh: " << DTB();
}
float HS::DTB(){
    return (diemtoan+diemvan)/2;
}