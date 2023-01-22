#include <iostream>

#include "RectField.cpp"


int main() {
    /*
    Rectangle rect;
    rect.SetPos(2,3);
    rect.SetDim(4,4);

    Rectangle* pRect = new Rectangle();
    pRect->SetPos(1,2);
    pRect->SetDim(2,4);

    std::cout<<" rect: " << rect.GetArea() << std::endl;
    std::cout<<"prect: " << pRect->GetArea() << std::endl;

    delete pRect;
    */

    RectField* pField1 = new RectField(10);
    RectField* pField2 = new RectField(*pField1);

    pField1->Get(0)->SetPos(42,42);
    pField1->Print();
    pField2->Print();

    delete pField1;
    delete pField2;
}