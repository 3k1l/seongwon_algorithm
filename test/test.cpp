#include <iostream>

using namespace std;
int MtrTblInfo;
int index1;
int index2;
int index3;
int index4;

int main()
{
    cout << "Set Motor Table Info : ";
    cin >> MtrTblInfo;

    index1 = (MtrTblInfo & 0xF000) >> 12;
    index2 = (MtrTblInfo & 0x0F00) >> 8;
    index3 = MtrTblInfo & 0x000F;

    printf("MtrTblInfo = %04x\n", MtrTblInfo);
    printf("index1 = %x\n", index1);
    printf("index2 = %x\n", index2);
    printf("index3 = %x\n", index3);
}
