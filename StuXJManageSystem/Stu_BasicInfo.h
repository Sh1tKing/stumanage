#pragma once
#include<iostream>
#include<string>
using namespace std;
class BasicInfo {
private:
	string id, sid, name, gender, birth, temp;
public:
	BasicInfo(string id, string sid, string name, string gender, string birth, string temp) :id(id), sid(sid), name(name), gender(gender), birth(birth), temp(temp){}
	~BasicInfo(){}
	string getid() {
		return id;
	}
	string getsid() {
		return sid;
	}
	string getname() {
		return name;
	}
	string getgender() {
		return gender;
	}
	string getbirth() {
		return birth;
	}
	string gettemp() {
		return temp;
	}
	
};