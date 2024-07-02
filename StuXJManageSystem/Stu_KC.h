#pragma once
#include<iostream>
#include<string>
using namespace std;
class KC {
private:
	string lid,name,tern,xz;
    float xf;
public:
    KC(string lid, string name, string tern, float xf,string xz):lid(lid),name(name),tern(tern),xf(xf),xz(xz){}
    string getlid() {
        return lid;
    }

    string getname() {
        return name;
    }

    string gettern() {
        return tern;
    }

    string getxz() {
        return xz;
    }

    float getxf() {
        return xf;
    }
    
};