#include "mydata.h"
#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
using namespace std;

//data_save&read
void mydata::read_basicinfo_data() {
	ifstream ifs1;
	ifs1.open("data1\\basicinfo.txt", ios::in);
	string line;
	while (getline(ifs1, line)) {
		istringstream str(line);
		string id, sid, name, gender, birth, temp;
		str >> id >> sid >> name >> gender >> birth >> temp;
		this->basicinfo.push_back(BasicInfo(id, sid, name, gender, birth, temp));
	}
	ifs1.close();
}

void mydata::write_basicinfo_data() {
	ofstream ofs1;
	ofs1.open("data1\\basicinfo.txt", ios::out);
	for (int i = 0; i < basicinfo.size(); i++) {
		ofs1 << basicinfo[i].getid() << " " << basicinfo[i].getsid() << " " << basicinfo[i].getname() << " " << basicinfo[i].getgender() << " " << basicinfo[i].getbirth() << " " << basicinfo[i].gettemp() << endl;
	}
	ofs1.close();
}
void mydata::read_score_data(string id) {
	ifstream ifs1;
	string url="data1\\score\\"+id+".txt";
	ifs1.open(url, ios::in);
	string line;
	while (getline(ifs1, line)) {
		istringstream str(line);
		string lid, id, name;
		float xf, ps_score, qm_score, score, gpa;
		int tern;
		str>>lid>>id>>name>>xf>>ps_score>>qm_score>>score>>gpa>>tern;
		this->score.push_back(Score(id, lid, name, xf, ps_score, qm_score, score, gpa, tern));
	}
	ifs1.close();
}
void mydata::write_allscore_data(string id) {
	ofstream ofs1;
	string url="data1\\score\\"+id+".txt";
	ofs1.open(url, ios::out);
	for(int i=0;i<this->score.size();i++){
		ofs1 << this->score[i].getlid() << " " << this->score[i].getname() << " " << this->score[i].getxf() << " " << this->score[i].getps_score() << " " << this->score[i].getqm_score() << " " <<this->score[i].getscore()<<" "<<this->score[i].getgpa() << " " << this->score[i].gettern() << endl;
	}
	ofs1.close();
}
void mydata::write_score_data(string id,Score &score) {
	ofstream ofs1;
	string url="data1\\score\\"+id+".txt";
	ofs1.open(url, ios::app);
	ofs1 << score.getlid() << " " << score.getname() << " " << score.getxf() << " " << score.getps_score() << " " << score.getqm_score() << " " <<score.getscore()<<" "<<score.getgpa() << " " << score.gettern() << endl;
	ofs1.close();
}
void mydata::read_kc_data() {
	ifstream ifs1;
	ifs1.open("data1\\kc.txt", ios::in);
	string line;
	while (getline(ifs1, line)) {
		istringstream str(line);
		string lid, name, tern, xz;
		float xf;
		str >> lid >> name >> tern >> xf >> xz;
		kc.push_back(KC(lid,name,tern,xf,xz));
	}
	ifs1.close();
}

void mydata::write_kc_data() {
	ofstream ofs1;
	ofs1.open("data1\\kc.txt", ios::out);
	for (int i = 0; i < kc.size(); i++) {
		ofs1 << kc[i].getlid() << " " << kc[i].getname() << " " << kc[i].getxf() << " "<<kc[i].gettern()<<" "<<kc[i].gettern()<<endl;
	}
	ofs1.close();
}
void mydata::read_jg_data() {
	ifstream ifs1;
	ifs1.open("data1\\jg.txt", ios::in);
	string line;
	while (getline(ifs1, line)) {
		istringstream str(line);
		string sid, name, xy, major, bj, daddress, gender, phonenum, address, postcode, jg;
		str >> sid >> name >> xy >> major >> bj >> daddress >> gender >> phonenum >> address >> postcode >> jg;
		this->jg.push_back(JG(sid, name, xy, major, bj, daddress, gender, phonenum, address, postcode, jg));
	}
	ifs1.close();
}

void mydata::write_jg_data() {
	ofstream ofs1;
	ofs1.open("data1\\jg.txt", ios::out);
	for (int i = 0; i < jg.size(); i++) {
		ofs1 << jg[i].getSid()<<jg[i].getName() << " " << jg[i].getXy() << " " << jg[i].getMajor() << " "<<jg[i].getBj()<<" "<<jg[i].getDaddress()<<" "<<jg[i].getGender() << " " << jg[i].getPhonenum() << " " << jg[i].getAddress() << " "<<jg[i].getPostcode()<<" "<<jg[i].getJg()<<endl;
	}
	ofs1.close();
}

void mydata::data_init(){
	ifstream ifs1;
	ifs1.open("data1\\studentnum.txt", ios::in);
	string line;
	while (getline(ifs1, line)) {
		istringstream str(line);
		string sid;
		str >> sid ;
		this->sid.push_back(sid);
	}
	ifs1.close();
	read_basicinfo_data();
	read_kc_data();
	read_jg_data();
}

//add last

void mydata::add_data(BasicInfo basicinfo) {
	ofstream ofs1;
	ofs1.open("data1\\basicinfo.txt", ios::app);
	ofs1 << basicinfo.getid() << " " << basicinfo.getsid() << " " << basicinfo.getname() << " " << basicinfo.getgender() << " " << basicinfo.getbirth() << " " << basicinfo.gettemp() << endl;
	
	ofs1.close();
}
void mydata::add_data(Score score) {
	ofstream ofs1;
	ofs1.open("data1\\score.txt", ios::app);
	ofs1 << score.getlid() << " " << score.getid() << " " << score.getname() << " " << score.getxf() << " " << score.getps_score() << " " << score.getqm_score() << " " <<score.getscore()<<" "<<score.getgpa() << " " << score.gettern() << endl;
	ofs1.close();
}
void mydata::add_data(KC kc){
	ofstream ofs1;
	ofs1.open("data1\\kc.txt", ios::app);
	ofs1 << kc.getlid() << " " << kc.getname() << " " << kc.getxf() << " "<<kc.gettern()<<" "<<kc.gettern()<<endl;
	ofs1.close();
}
void mydata::add_data(JG jg){
	ofstream ofs1;
	ofs1.open("data1\\jg.txt", ios::app);
	ofs1 << jg.getSid()<<jg.getName() << " " << jg.getXy() << " " << jg.getMajor() << " "<<jg.getBj()<<" "<<jg.getDaddress()<<" "<<jg.getGender() << " " << jg.getPhonenum() << " " << jg.getAddress() << " "<<jg.getPostcode()<<" "<<jg.getJg()<<endl;
	ofs1.close();
}




//add
void mydata::add_stubasic(BasicInfo info) {
	basicinfo.push_back(info);
	this->add_data(info);
}
void mydata::add_stuscore(Score info) {
	sid.push_back(info.getid());
	write_score_data(info.getid(),info);
}
void mydata::add_stukc(KC info) {
	kc.push_back(info);
	this->add_data(info);
}
void mydata::add_stujg(JG info) {
	jg.push_back(info);
	this->add_data(info);
}


//edit
void mydata::edit_stubasic(BasicInfo info){
	string id=info.getid();

}
void mydata::edit_stuscore(string lid,Score info){
	for(int i=0;i<sid.size();i++){
		if(sid[i]==info.getid()){
			read_score_data(info.getid());
			for(int i=0;i<score.size();i++){
				if(score[i].getlid()==lid){
					score[i].setgpa(info.getgpa());
					score[i].setps_score(info.getps_score());
					score[i].setqm_score(info.getqm_score());
					score[i].setscore(info.getscore());
					score[i].settern(info.gettern());
					score[i].setxf(info.getxf());
					score[i].setname(info.getname());
					score[i].setid(info.getid());
					score[i].setlid(info.getlid());
					break;
				}else{
					cout<<"未找到该课程信息"<<endl;
					system("pause");
					return;
				}
			}
			write_allscore_data(info.getid());
			score.clear();
			break;
		}else{
			cout<<"未找到该学生信息"<<endl;
			system("pause");
			return;
		}
	}
	write_score_data(info.getid(),info);
}
void mydata::edit_stukc(KC info){
	for (int i = 0; i < kc.size(); i++) {
		if (kc[i].getlid() == info.getlid()) {
			kc[i] = info;
		}
	}
}
void mydata::edit_stujg(JG info){
	for (int i = 0; i < jg.size(); i++) {
		if (jg[i].getSid() == info.getSid()) {
			jg[i] = info;
		}
	}
}

//search
void mydata::search_stubasic(string id){
	for (int i = 0; i < basicinfo.size(); i++) {
		if (basicinfo[i].getsid() == id) {
			cout<<"-----------------------------"<<endl;
			cout << "学号："<<basicinfo[i].getsid()<<endl<<"姓名："<<basicinfo[i].getname()<<endl<<"性别："<<basicinfo[i].getgender()<<endl<<"出生年月："<<basicinfo[i].getbirth()<<endl<<"籍贯："<<basicinfo[i].gettemp()<<endl;
			cout<<"-----------------------------"<<endl;
			break;
		}
	}
}
void mydata::search_stuscore(string id){
	for(int i=0;i<sid.size();i++){
		if(sid[i]==id){
			break;
		}else{
			cout<<"未找到该学生信息"<<endl;
			system("pause");
			return;
		}
	}
	ifstream ifs1;
	string url="data1\\score\\"+id+".txt";
	ifs1.open(url, ios::in);
	string line;
	cout << "-----------------------------" << endl;
	while (getline(ifs1, line)) {
		istringstream str(line);
		string lid, id, name;
		float xf, ps_score, qm_score, score, gpa;
		int tern;
		str >> id  >> name >> xf >> ps_score >> qm_score >> score >> tern >> gpa;
		cout << "学号：" << id  << endl << "课程名称：" << name << endl << "学分：" << xf << endl << "平时成绩：" << ps_score << endl << "期末成绩：" << qm_score << endl << "总评：" << score << endl << "绩点：" << gpa << endl << "学期：" << tern << endl;
		cout << "-----------------------------" << endl;
	}
	
	ifs1.close();
}
void mydata::search_stukc(string id){
	for (int i = 0; i < kc.size(); i++) { 
		if (kc[i].getlid() == id) {
			cout<<"-----------------------------"<<endl;
			cout << "课程编号："<<kc[i].getlid()<<endl<<"课程名称："<<kc[i].getname()<<endl<<"学分："<<kc[i].gettern()<<endl<<"开课学期："<<kc[i].getxf()<<endl<<"课程性质："<<kc[i].getxz()<<endl<<"";
			cout<<"-----------------------------"<<endl;
			break;
		}
	}
}
void mydata::search_stujg(string id){

	for (int i = 0; i < jg.size(); i++) {
		if (jg[i].getSid() == id) {
			cout<<"-----------------------------"<<endl;
			cout << "学号："<<jg[i].getSid()<<endl<<"姓名："<<jg[i].getName()<<endl<<"学院："<<jg[i].getXy()<<endl<<"专业："<<jg[i].getMajor()<<endl<<"班级："<<jg[i].getBj()<<endl<<"班级："<<jg[i].getBj()<<endl<<"宿舍地址："<<jg[i].getDaddress()<<endl<<"性别："<<jg[i].getGender()<<endl<<"手机号："<<jg[i].getPhonenum()<<endl<<"家庭住址："<<jg[i].getAddress()<<endl<<"邮政编码："<<jg[i].getPostcode()<<endl<<"籍贯："<<jg[i].getJg()<<endl;
			cout<<"-----------------------------"<<endl;
			break;
		}
	}
}


//delete
void mydata::delete_stubasic(string id){
	for (int i = 0; i < basicinfo.size(); i++) {
		if (basicinfo[i].getsid() == id) {
			basicinfo.erase(basicinfo.begin() + i);
			write_basicinfo_data();
			cout << "删除成功" << endl;
			system("pause");
			return;
		}
	}
	cout << "未找到该学生信息" << endl;
	system("pause");
	return;
}
void mydata::delete_stuscore(string id,string lid){
	for(int i=0;i<sid.size();i++){
		if (sid[i] == id) {
			read_score_data(id);
			for (int i = 0; i < score.size(); i++) {
				if (score[i].getlid() == lid) {
					score.erase(score.begin() + i);
					write_allscore_data(id);
					cout << "删除成功" << endl;
					system("pause");
					return;
				}	
			}
			cout << "未找到该课程信息" << endl;
			system("pause");
			return;
		}
	}
	cout << "未找到该学生信息" << endl;
	system("pause");
	return;
}
void mydata::delete_stukc(string id){
	for (int i = 0; i < kc.size(); i++) {
		if (kc[i].getlid() == id) {
			kc.erase(kc.begin() + i);
			cout << "删除成功" << endl;
			system("pause");
			return;
		}
	}
	cout<<"未找到该学生信息"<<endl;
	system("pause");
	return;
}
void mydata::delete_stujg(string id){
	for (int i = 0; i < jg.size(); i++) {
		if (jg[i].getSid() == id) {
			jg.erase(jg.begin()+i);
			return;
		}
	}	
	cout<<"未找到该学生信息"<<endl;
	system("pause");
	return;
}