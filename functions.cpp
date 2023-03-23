#include "main.h"
#include "functions.h"

CauTrucBang CTBang;
CauTruc0 **CTO;
void taoMang2ChieuDong() {
    CTO = new CauTrucO*[CtBang.SDong];
    for(int i = 0;i<CTBang.SDong;i++) {
        CTO[i] = new CauTrucO[CTBang.SCot];
    }
}
void xoaMang2ChieuDong(){
    for(int i = 0;i<CTBang.SDong;i++) {
        delete[] CTO[i];
    }
    delete CTO;
}

void khoiTao(short SDong, short SCot,short SSoBom) {
    CTBang.SDong = SDong;
    CTBang.SCot = SCot;
    CTBang.SSoBom = SSoBom;
    CTBang.SSoODaMo = 0;
    CTBang.SSoCo = 0;

    taoMang2ChieuDong();

    xoaMang2ChieuDong();
}
void veO();
void veBang() {
    for(int i = 0;i<CTBang.SDong;i++) {
        for(int j = 0;j<CTBang.SCot;j++) {

        }
    }
}

