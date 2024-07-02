#pragma once
#include<iostream>
#include<string>
using namespace std;
class JG {
private:
	string sid, name, xy, major, bj,daddress,gender,phonenum,address,postcode,jg;
public:
	JG(string sid, string name, string xy, string major, string bj,
          string daddress, string gender, string phonenum, string address,
          string postcode, string jg)
        : sid(sid), name(name), xy(xy), major(major), bj(bj), daddress(daddress),
          gender(gender), phonenum(phonenum), address(address), postcode(postcode), jg(jg) {}

    // 析构函数（如果没有特殊资源需要清理，可以是空的）
    ~JG() {}

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

    string getDaddress() {
        return daddress;
    }

    string getGender() {
        return gender;
    }

    string getPhonenum() {
        return phonenum;
    }

    string getAddress() {
        return address;
    }

    string getPostcode() {
        return postcode;
    }

    string getJg() {
        return jg;
    }
	
};