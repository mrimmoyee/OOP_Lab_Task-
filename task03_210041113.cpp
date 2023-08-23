#include<iostream>
#include<cstring>
using namespace std;
class Medicine
{
private:
   char name[100];
   char genericName[100];
   double discountPercent;
   double unitPrice;
public:
    void assignName(char name1[], char genericName1[])
    {
        strcpy(name, name1);
        strcpy(genericName,genericName1);
    }
    void assignPrice(double price=0)
    {
        if (price >= 0)
        {
            unitPrice = price;
        }
        else
        {
            unitPrice=0;
        }
    }
    void setDiscountPercent(double percent=5)
    {
        if (percent >= 0 && percent <= 45)
        {
            discountPercent = percent;
        }
        else{
            discountPercent=5;
        }
    }
    double getSellingPrice(int nos)
    {
        return nos*unitPrice-(nos*(unitPrice*discountPercent/100));
    }
    void display()
    {
        cout<<name <<" ("<<genericName<<") has a unit price BDT "<<unitPrice<<". Current discount"<<discountPercent<<"%."<<endl;
    }

};
int main()
{
    Medicine medicine;
    medicine.assignName("Napa","Paracetamol");
    medicine.assignPrice(0.80);
    medicine.setDiscountPercent(56);
    medicine.display();
}
