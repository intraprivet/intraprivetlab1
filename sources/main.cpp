//Copyright 2020 pushkin.alexsandt@gmail.com

#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

int main()
{
////////////////////////////////////////////////
cout « "Task №1" « endl;
cout « "1 13 49" « endl « endl;


////////////////////////////////////////////////
cout « "Task №2" « endl;
char ch;
cout « "Enter char:" « endl;
cin » ch;
cout « "1" « ch « "13" « ch « "49" « endl « endl;


////////////////////////////////////////////////
cout « "Task №3" « endl;
float f1, f2, f3;
cout « "Enter 3 numbers:" « endl;
cin » f1 » f2 » f3;
cout « f1 « " " « f2 « " " « f3 « endl « endl;


////////////////////////////////////////////////
cout « "Task №4" « endl;
float a, xy, x, y;
cout « "Enter numbers a, x:" « endl;
cin » a » x;
xy = 12*a*a + 7 * a - 12;
y = 3*x*x*x + 4*x*x - 11*x + 1;
cout « "x = " « xy « endl;
cout « "y = " « y « endl « endl;


////////////////////////////////////////////////
cout « "Task №5" « endl;
float v, m, p;
cout « "Enter volume and weight:" « endl;
cin » v » m;
if ((v <= 0) || (m <= 0)) {
cout « "The value of mass or volume cannot"
" be less than or equal to zero!" « endl « endl;
} else {
p = m / v;
cout « "p = " « p « endl « endl;
}


////////////////////////////////////////////////
cout « "Task №6" « endl;
float b;
cout « "Equation solution of the form ax + b = 0" « endl;
cout « "Enter numbers a и b:" « endl;
cin » a » b;
if ((a == 0) && (b == 0)) {
cout « "x - any number" « endl « endl;
} else {
x = -b / 2;
cout « "x = " « x « endl « endl;
}



////////////////////////////////////////////////
cout « "Task №7" « endl;
double x1, x2, xv, y1, y2, yv, len;
cout « "Enter coordinate first point:" « endl;
cin » x1 » y1;
cout « "Enter coordinate second point:" « endl;
cin » x2 » y2;
xv = x2 - x1;
yv = y2 -y1;
len = sqrt(xv * xv + yv * yv);
cout « "len = " « len « endl « endl;


////////////////////////////////////////////////
cout « "Task №8" « endl;
float h;
cout « "Enter more base, less base and height:" « endl;
cin » a » b » h;
if ((h <= 0) || (a <= 0) || (b <= 0)) {
cout « "The entered data doesn't"
" correspond to the trapezoid!" « endl « endl;
} else {
p = a + b + (a - b)/2*h;
cout « "p = " « p « endl « endl;
}



////////////////////////////////////////////////
cout « "Task №9" « endl;
float r1, r2;
double s1, s2, sk;
cout « "Enter outer and inner radius:" « endl;
cin » r1 » r2;
if ((r1 <= 0) || (r2 <= 0)) {
cout « "The entered data doesn't"
" correspond to the circle!" « endl « endl;
} else {
s1 = 3.14 * r1 * r1;
s2 = 3.14 * r2 * r2;
sk = s2 -s1;
cout « "sk = " « sk « endl « endl;
}



////////////////////////////////////////////////
cout « "Task №10" « endl;
float sb;
cout « "Enter length of cube edges:" « endl;
cin » a;
if (a <= 0) {
cout « "The entered data"
" doesn't correspond to the cube!" « endl « endl;
} else {
v = a * a * a;
sb = a * a;
cout « "v = " « v « endl;
cout « "sb = " « sb « endl « endl;
}



////////////////////////////////////////////////
cout « "Task №11" « endl;
cout « "Enter length of the side of the square:" « endl;
cin » a;
if (a <= 0) {
cout « "The entered data"
" doesn't correspond to the square!" « endl « endl;
} else {
p = 4*a;
cout « "p = " « p « endl « endl;
}



////////////////////////////////////////////////
cout « "Task №12" « endl;
float d;
cout « "Enter circle radius:" « endl;
cin » r1;
if (r1 <= 0) {
cout « "The entered data doesn't"
" correspond to the square!" « endl « endl;
} else {
d = 2 * r1;
cout « "d = " « d « endl « endl;
}

////////////////////////////////////////////////
cout « "Task №13" « endl;
std::string name;
cout « "Enter the name of student:" « endl;
cin » name;
name =
 
"Hello, " + name + "! My name is C++.";
cout « name « endl « endl;


////////////////////////////////////////////////
cout « "Task №14" « endl;
int len1;
std::string word;
cout « "Enter word:" « endl;
cin » word;
len1 = word.length();
int prov = 1;
for (int i = 0; i < len1/2; i++) {
if (word[1] != word[len1 - 1 - i]) {
prov = 0;
}
}
if (prov == 1) {
cout « "This is polindrom!" « endl;
} else {
cout « "Sorry, this is not polindrom!" « endl;
}
return 0;
}
