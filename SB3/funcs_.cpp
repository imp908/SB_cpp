#include <iostream>
#include <iomanip>

#include <string.h>
#include <stdio.h>

#include <stdlib.h>


namespace  funcs_ns {

//new line print
void newLine_()
{
    std::cout << "\r\n";
}
void lineDiv_()
{
    std::cout << "\r\n";
    for(int i =0;i<15;i++)
    {
        std::cout << '-';
    }
    std::cout << "\r\n";
}

void Pointers()
{

    int a =1;
    int &aa = a;

    std:: cout << a << " " << &a << "\r\n";
    std :: cout << aa << " " << &aa << "\r\n";

    int b = 2;
    int* c = &b;
    int *d = &b;

    std:: cout << c << " " << &c << " " << *c << "\r\n";
    std:: cout << d << " " << &d << " " << *d << "\r\n";

    b=3;
    d=&aa;

    std::cout << "Hello World new" << "\r\n";

}

void PointersExt()
{
int a = 10;
int* p = &a;
int** c = &p;

std::cout << "a p &p &a *p-> " << a << " " << p << " " << &a << " " << &p << " " << *p;
newLine_();
std::cout << "p c &p &c *p *c-> " << p << " " << c << " " << &p << " " << &c << " " << *p << " " << *c;
}

void PointerChar()
{
    int const max = 4;
    //int length_ = 0;
    char chr[max];
    char* chrPtr = chr;

    for(int i = 0; i < max; i++)
    {
        std:: cout << "Enter value - " << i << " : \r\n";
        std:: cin >> chr[i];
        std:: cout << "\r\n" ;
    }

    std::cout << chrPtr << "\r\n";
    lineDiv_();
    for(unsigned i = 0 ;i<max;i++)
    {
        chrPtr=&chr[i];
        std::cout << chrPtr << "\r\n";
    }
    lineDiv_();
    chrPtr=&chr[0];
    for(unsigned i = 0 ;i<max;i++)
    {
        std::cout << chrPtr << "\r\n";
        chrPtr+=1;
    }



}

void PrimesCheck()
{
    int const  MAX = 100;
    int arr[MAX] = {2};
    int count = 1;
    int trgt = arr[0];

    do{

        bool found = false;
        if(count<2){
        trgt+=1;
        }else{trgt+=2;}

        for(int i = 0; i<count; i++)
        {
             found = trgt % * (arr+i) == 0;
             if(found)
             {
                 break;
             }
        }
        if(!found)
        {
            *(arr+count++)=trgt;
        }
    }while (count<MAX);

    lineDiv_();
    for(int i=0;i<MAX;i++)
    {
        if(i>0 && i % 5 ==0)
        {
            std::cout << "\r\n";
        }
        std::cout << std::setw(10) << arr[i] << " ";

    }
    lineDiv_();
}

void CharCheck()
{
    int const MAX = 80;
    char buffer[MAX];
    char* pbuffer = &buffer[0];

    std::cout << "Inut : " ;
    std::cin.getline(pbuffer,MAX);

    while (*pbuffer) {
        pbuffer++;
    }

    char* checkAddr = &buffer[0];
    lineDiv_();
    for(int i =0; i< 10;i++)
    {
        std::cout << checkAddr - &buffer[i] << " ";
    }
    lineDiv_();
    lineDiv_();
    std:: cout << "Buffer diff :" << &buffer[5] - &buffer[2];
    lineDiv_();
    int res = pbuffer - buffer;
    std::cout << res;
}

void MultyPointer()
{
    double bean[3][4];
    double* pbean = &bean[0][0];


    int amt=0;
    for(int i =0;i<3;i++)
    {
        for(int i2 =0;i2<4;i2++)
        {
            bean[i][i2]=amt++;
        }
    }

    double pb = *(*(bean+0)+0);
    double pb2 = *(bean[1]+2);
    double pb3 = *(bean+1)[2];

    std:: cout << pb + pb2 + pb3;
    pbean++;
}

void DynamicPointer()
{
    double* pd = nullptr;
    pd = new double;
    pd++;

    delete pd;
    pd=nullptr;
}

void Reference()
{
    int a = 5;
    int& b = a;
    b+=10;
    const int & c = 6;
    std::cout << c;
    int* pa(&a);
    *pa+=5;

    int&& ra = a+a;
    std::cout << ra <<"\r\n";
    *pa+=1;
    std::cout << ra  <<"\r\n";

}

void Strgs()
{

    char a[100] = {"ABC"};
    printf( " %u \n",(unsigned)strlen(a));
    std::cout << strlen(a);

    const size_t count =50;
    int length_=0;
    char str1[count] = "First string";
    char str2[count] = "Second string";

    length_ = sizeof(str1);

    char* pstr1 = str1;
    char* pstr2 = str2;
    char* strDest = str1;

    int plength = strlen(pstr1);

    strcat(pstr1,pstr2);
    strncat(strDest,pstr2,3);

    length_ = sizeof(str1);
    length_ = strlen(str1);

    std::cout << str1;

    newLine_();
    printf(str1);
    newLine_();

}

#include <stdexcept>
double divNum(double num,double denom)
{
    if(denom==0)
    {
        throw std::invalid_argument("Denom is zero");
    }
    return num/denom;
}
void excCheck(){
    try{
        std::cout << divNum(5,3);
        std::cout << divNum(5,0);
    }catch(const std::exception& e){
        std::cout << "Exc:" << e.what() << std::endl;
    }
}



void Check()
{
excCheck();
}


}
