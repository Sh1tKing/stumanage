#pragma once
#pragma once
#include<iostream>
#include<string>
using namespace std;
class YX {
private:
    string sid, name, xy, major, bj, address,  phonenum,time;
public:
    YX(string sid, string name, string xy, string major, string bj,
        string address,string phonenum,string time)
        : sid(sid), name(name), xy(xy), major(major), bj(bj), phonenum(phonenum), address(address),time(time) {}

    ~YX() {}

    // 访问器方法（getter）
    string getSid() {
        return sid;
    }

    string getName() {
        return name;
    }

    string getXy() {
        return xy;
    }

    string getMajor() {
        return major;
    }

    string getBj() {
        return bj;
    }

    string getPhonenum() {
        return phonenum;
    }

    string getAddress() {
        return address;
    }
    string getTime() {
        return time;
    }
};