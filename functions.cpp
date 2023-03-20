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

