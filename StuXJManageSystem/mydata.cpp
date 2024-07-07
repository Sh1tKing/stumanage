#include "mydata.h"
#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
#include "Stu_YX.h"
using namespace std;

//data_save&read
 void mydata::write_allscore_data(string id) {
	ofstream ofs1;
	string url="data1\\score\\"+id+".txt";
	ofs1.open(url, ios::out);
	for(int i=0;i<this->score.size();i++){
		ofs1 << this->score[i].getlid() << " " << this->score[i].getname() << " " << this->score[i].getxf() << " " << this->score[i].getps_score() << " " << this->score[i].getqm_score() << " " <<this->score[i].getscore()<<" "<<this->score[i].gettern() << " " << this->score[i].getgpa() << endl;
	}
	ofs1.close();
}

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
		string lid, pid, name;
		float xf, ps_score, qm_score, score, gpa;
		int tern;
		str>>lid>>name>>xf>>ps_score>>qm_score>>score>>tern>>gpa;
		this->score.push_back(Score(id, lid, name, xf, ps_score, qm_score, score, gpa, tern));
	}
	ifs1.close();
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
		ofs1 << kc[i].getlid() << " " << kc[i].getname() << " " << kc[i].getxf() << " "<<kc[i].gettern()<<" "<<kc[i].gettern()<<" "<<kc[i].getxz()<<endl;
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
		ofs1 << jg[i].getSid() << " " <<jg[i].getName() << " " << jg[i].getXy() << " " << jg[i].getMajor() << " "<<jg[i].getBj()<<" "<<jg[i].getDaddress()<<" "<<jg[i].getGender() << " " << jg[i].getPhonenum() << " " << jg[i].getAddress() << " "<<jg[i].getPostcode()<<" "<<jg[i].getJg()<<endl;
	}
	ofs1.close();
}

void mydata::read_yx_data() {
	ifstream ifs1;
	ifs1.open("data1\\yx.txt", ios::in);
	string line;
	while (getline(ifs1, line)) {
		istringstream str(line);
		string sid, name, xy, major, bj, address, phonenum, time;
		str >> sid >> name >> xy >> major >> bj >> address >> phonenum >> time;
		this->yx.push_back(YX(sid, name, xy, major, bj, address, phonenum, time));
	}
	ifs1.close();
}
void mydata::write_yx_data() {
	ofstream ofs1;
	ofs1.open("data1\\yx.txt", ios::out);
	for (int i = 0; i < yx.size(); i++) {
		ofs1 << yx[i].getSid() << " " << yx[i].getName() << " " << yx[i].getXy() << " " << yx[i].getMajor() << " " << yx[i].getBj() << " " << yx[i].getAddress() << " " <<yx[i].getPhonenum()  << " " <<yx[i].getTime() << endl;
	}
	ofs1.close();
}


void mydata::data_init(){
	ifstream ifs1;
	ifs1.open("data1\\stunumname.txt", ios::in);
	string line;
	while (getline(ifs1, line)) {
		istringstream str(line);
		string sid, name;
		str >> sid >> name;
		person p;
		p.sid = sid;
		p.name = name;
		this->sid.push_back(p);
	}
	ifs1.close();
	read_basicinfo_data();
	read_kc_data();
	read_jg_data();
	read_yx_data();
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
	ofs1 << jg.getSid()<< " "<<jg.getName() << " " << jg.getXy() << " " << jg.getMajor() << " "<<jg.getBj()<<" "<<jg.getDaddress()<<" "<<jg.getGender() << " " << jg.getPhonenum() << " " << jg.getAddress() << " "<<jg.getPostcode()<<" "<<jg.getJg()<<endl;
	ofs1.close();
}
void mydata::add_data(YX yx) {
	ofstream ofs1;
	ofs1.open("data1\\yx.txt", ios::app);
	ofs1 << yx.getSid() << " " << yx.getName() << " " << yx.getXy() << " " << yx.getMajor() << " " << yx.getBj() << " " << yx.getAddress() << " " << yx.getPhonenum() << " " << yx.getTime() << endl;
	ofs1.close();
}



//add
void mydata::add_stubasic(BasicInfo info) {
	basicinfo.push_back(info);
	this->add_data(info);
}
void mydata::add_stuscore(Score info) {
	
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
void mydata::add_stuyx(YX info) {
	yx.push_back(info);
	this->add_data(info);
}

//edit
void mydata::edit_stubasic(BasicInfo info){
	for (int i = 0; i < basicinfo.size(); i++) {
		if (basicinfo[i].getsid() == info.getsid()) {
			basicinfo[i] = info;
			cout << "修改成功" << endl;
			write_basicinfo_data();
			return;
		}
	}
	cout << "没有此学生信息" << endl;
	return;
}
void mydata::edit_stuscore(string lid,Score info){
	for (int i = 0; i < sid.size(); i++) {
		if (sid[i].sid == info.getid()) {
			read_score_data(info.getid());
			for (int i = 0; i < score.size(); i++) {
				if (score[i].getlid() == lid) {
					score[i].setgpa(info.getgpa());
					score[i].setps_score(info.getps_score());
					score[i].setqm_score(info.getqm_score());
					score[i].setscore(info.getscore());
					score[i].settern(info.gettern());
					score[i].setxf(info.getxf());
					score[i].setname(info.getname());
					score[i].setid(info.getid());
					score[i].setlid(info.getlid());
					write_allscore_data(info.getid());
					score.clear();
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
void mydata::edit_stukc(KC info){
	for (int i = 0; i < kc.size(); i++) {
		if (kc[i].getlid() == info.getlid()) {
			kc[i] = info;
			cout << "修改成功" << endl;
			write_kc_data();
			return;
		}
	}
	cout << "没有此课程编号" << endl;
	return;
}
void mydata::edit_stujg(JG info){
	for (int i = 0; i < jg.size(); i++) {
		if (jg[i].getSid() == info.getSid()) {
			jg[i] = info;
			cout << "修改成功" << endl;
			write_jg_data();
			return;
		}
	}
	cout << "没有此学生信息" << endl;
	return;
}
void mydata::edit_stuyx(YX info) {
	for (int i = 0; i < yx.size(); i++) {
		if (yx[i].getSid() == info.getSid()) {
			yx[i] = info;
			cout << "修改成功" << endl;
			write_yx_data();
			return;
		}
	}
	cout << "没有此学生信息" << endl;
	return;
}

//search
void mydata::search_stubasic(string id){
	for (int i = 0; i < basicinfo.size(); i++) {
		if (basicinfo[i].getsid() == id) {
			cout<<"-----------------------------"<<endl;
			cout << "学号："<<basicinfo[i].getsid()<<endl<<"姓名："<<basicinfo[i].getname()<<endl<<"性别："<<basicinfo[i].getgender()<<endl<<"出生年月："<<basicinfo[i].getbirth()<<endl<<"备注："<<basicinfo[i].gettemp()<<endl;
			cout<<"-----------------------------"<<endl;
			break;
		}
	}
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
			cout << "学号："<<jg[i].getSid()<<endl<<"姓名："<<jg[i].getName()<<endl<<"学院："<<jg[i].getXy()<<endl<<"班级："<<jg[i].getBj()<<endl<<"宿舍地址："<<jg[i].getDaddress()<<endl<<"性别："<<jg[i].getGender()<<endl<<"手机号："<<jg[i].getPhonenum()<<endl<<"家庭住址："<<jg[i].getAddress()<<endl<<"邮政编码："<<jg[i].getPostcode()<<endl<<"籍贯："<<jg[i].getJg()<<endl;
			cout<<"-----------------------------"<<endl;
			break;
		}
	}
}
void mydata::search_stuyx(string id) {

	for (int i = 0; i < yx.size(); i++) {
		if (yx[i].getSid() == id) {
			cout << "-----------------------------" << endl;
			cout << "学号：" << yx[i].getSid() << endl << "姓名：" << yx[i].getName() << endl << "学院：" << yx[i].getXy() << endl << "专业：" << yx[i].getMajor() << endl << "班级：" << yx[i].getBj() << endl << "地址：" << yx[i].getAddress()  << endl << "手机号：" << yx[i].getPhonenum()  << endl << "入学时间：" << yx[i].getTime() << endl;
			cout << "-----------------------------" << endl;
			break;
		}
	}
}

//S_search
void mydata::search_singlestuscore(string id){
	int check = 0;
	for(int i=0;i<sid.size();i++){
		if(sid[i].sid==id){
			check=1;
			cout << sid[i].name << endl;
			break;
		}
	}
	if (check == 0) {
		cout << "未找到该学生信息" << endl;
		return;
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
		str >> lid  >> name >> xf >> ps_score >> qm_score >> score >>   tern >> gpa;
		cout << "课程编号：" << lid  << endl << "课程名称：" << name << endl << "学分：" << xf << endl << "平时成绩：" << ps_score << endl << "期末成绩：" << qm_score << endl << "总评：" << score << endl << "绩点：" << gpa << endl << "学期：" << tern << endl;
		cout << "-----------------------------" << endl;
	}
	
	ifs1.close();
}
void mydata::search_singleLscore(string lid) {
	int n;
	cout << "-----------------------------" << endl;
	for (int i = 0; i < sid.size(); i++) {
		read_score_data(sid[i].sid);
		for (int j = 0; j < score.size(); j++) {
			if (score[j].getlid() == lid) {
				cout << "学号：" << sid[i].sid <<endl<< "姓名：" << sid[i].name << endl << "课程名称：" << score[j].getname() << endl << "学分：" << score[j].getxf() << endl << "平时成绩：" << score[j].getps_score() << endl << "期末成绩：" << score[j].getqm_score() << endl << "总评：" << score[j].getscore() << endl << "绩点：" << score[j].getgpa() << endl << "学期：" << score[j].gettern() << endl;
				cout << "-----------------------------" << endl;
				score[j].setsname(sid[i].name);
				singlescore.push_back(score[j]);
				break;
			}
		}
		score.clear();
	}
	cout << "是否对成绩排序(1.升序，2.倒序，3.否)" << endl << "请输入：";
	cin >> n;
	if (n == 1) {
		for (int i = 0; i < singlescore.size()-1; i++) {
			for (int j = 0; j < singlescore.size()-i-1; j++) {
				if (singlescore[j].getscore() > singlescore[j + 1].getscore())
					swap(singlescore[j], singlescore[j + 1]);
			}
		}
		cout << "-----------------------------" << endl;
		for (int i = 0; i < singlescore.size(); i++) {
			cout << "学号：" << singlescore[i].getid() <<endl<< "姓名：" << singlescore[i].getsname() << endl << "课程名称：" << singlescore[i].getname() << endl << "学分：" << singlescore[i].getxf() << endl << "平时成绩：" << singlescore[i].getps_score() << endl << "期末成绩：" << singlescore[i].getqm_score() << endl << "总评：" << singlescore[i].getscore() << endl << "绩点：" << singlescore[i].getgpa() << endl << "学期：" << singlescore[i].gettern() << endl;
				cout << "-----------------------------" << endl;
		}
		cout << "-----------------------------" << endl;
	}
	else if(n==2){
		for (int i = 0; i < singlescore.size()-1; i++) {
			for (int j = 0; j < singlescore.size()-i-1; j++) {
				if (singlescore[j].getscore() < singlescore[j + 1].getscore())
					swap(singlescore[j], singlescore[j + 1]);
			}
		}
		cout << "-----------------------------" << endl;
		for (int i = 0; i < singlescore.size(); i++) {
			cout << "学号：" << singlescore[i].getid() << endl << "姓名：" << singlescore[i].getsname() << endl << "课程名称：" << singlescore[i].getname() << endl << "学分：" << singlescore[i].getxf() << endl << "平时成绩：" << singlescore[i].getps_score() << endl << "期末成绩：" << singlescore[i].getqm_score() << endl << "总评：" << singlescore[i].getscore() << endl << "绩点：" << singlescore[i].getgpa() << endl << "学期：" << singlescore[i].gettern() << endl;
			cout << "-----------------------------" << endl;
		}
		cout << "-----------------------------" << endl;
	}
	else {
		return;
	}
	
}	
void mydata::searchxf() {
	for (int i = 0; i < sid.size(); i++) {
		read_score_data(sid[i].sid);
		float sum = 0;
		for (int j = 0; j < score.size(); j++) {
			sum += score[j].getxf();
		}
		cout << "学号：" << sid[i].sid << " " << "姓名：" << sid[i].name << " " << "总学分：" << sum << endl;
		score.clear();
	}
	system("pause");
}
void mydata::searchgpa(float gpa) {
	for (int i = 0; i < sid.size(); i++) {
		read_score_data(sid[i].sid);
		float sum = 0;
		for (int j = 0; j < score.size(); j++) {
			sum += score[j].getxf();
		}
		if(sum<gpa) cout << "学号：" << sid[i].sid << " " << "姓名：" << sid[i].name << " " << "总学分：" << sum << endl;
		score.clear();
	}
	system("pause");
}

//delete
void mydata::delete_stubasic(string id){
	for (int i = 0; i < basicinfo.size(); i++) {
		if (basicinfo[i].getsid() == id) {
			char n;
			cout << "确定删除？（y/n）" << endl;
			cin >> n;
			if (n == 'n') {
				system("pause");
				return;
			}
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
		if (sid[i].sid == id) {
			read_score_data(id);
			for (int i = 0; i < score.size(); i++) {
				if (score[i].getlid() == lid) {
					char n;
					cout << "确定删除？（y/n）" << endl;
					cin >> n;
					if (n == 'n') {
						system("pause");
						return;
					}
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
			char n;
			cout << "确定删除？（y/n）" << endl;
			cin >> n;
			if (n == 'n') {
				system("pause");
				return;
			}
			kc.erase(kc.begin() + i);
			cout << "删除成功" << endl;
			write_kc_data();
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
			char n;
			cout << "确定删除？（y/n）" << endl;
			cin >> n;
			if (n == 'n') {
				system("pause");
				return;
			}
			jg.erase(jg.begin()+i);
			cout << "删除成功" << endl;
			write_jg_data();
			system("pause");
			return;
		}
	}	
	cout<<"未找到该学生信息"<<endl;
	system("pause");
	return;
}
void mydata::delete_stuyx(string id) {
	for (int i = 0; i < yx.size(); i++) {
		if (yx[i].getSid() == id) {
			char n;
			cout << "确定删除？（y/n）" << endl;
			cin >> n;
			if (n == 'n') {
				system("pause");
				return;
			}
			yx.erase(yx.begin() + i);
			cout << "删除成功" << endl;
			write_yx_data();
			system("pause");
			return;
		}
	}
	cout << "未找到该学生信息" << endl;
	system("pause");
	return;
}