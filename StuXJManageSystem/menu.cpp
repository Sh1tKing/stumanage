#include"menu.h"
#include"Stu_BasicInfo.h"
#include"Stu_Score.h"
#include"mydata.h"
using namespace std;
mydata Mydata;
menu::menu() {
	Mydata.data_init();
}
void menu::mainmenu() {
	cout << "****************************************" << endl;
	cout<<"            1.数  据  录  入"<< endl;
	cout << endl;
	cout<<"            2.数  据  修  改"<< endl;
	cout << endl;
	cout<<"            3.数  据  查  询"<< endl;
	cout << endl;
	cout<<"            4.数  据  删  除"<< endl;
	cout << endl;
	cout<<"            5.退  出  系  统"<< endl;
	cout << "****************************************" << endl;
}
void menu::inputmenu() {
	cout << "****************************************" << endl;
	cout << "            1.学  生  信  息  录  入" << endl;
	cout << endl;
	cout << "            2.学  生  成  绩  录  入" << endl;
	cout << endl;
	cout << "            3.课  程  信  息  录  入" << endl;
	cout << endl;						
	cout << "            4.学  生  籍  贯  录  入" << endl;
	cout << endl;
	cout << "            5.返  回" << endl;
	cout << "****************************************" << endl;
}
void menu::editmenu() {
	cout << "****************************************" << endl;
	cout << "            1.学  生  信  息  修  改" << endl;
	cout << endl;						  	  
	cout << "            2.学  生  成  绩  修  改" << endl;
	cout << endl;						 	  
	cout << "            3.课  程  信  息  修  改" << endl;
	cout << endl;						 	  
	cout << "            4.学  生  籍  贯  修  改" << endl;
	cout << endl;
	cout << "            5.返  回" << endl;
	cout << "****************************************" << endl;
}
void menu::searchmenu() {
	cout << "****************************************" << endl;
	cout << "            1.学  生  信  息  查  询" << endl;
	cout << endl;						
	cout << "            2.学  生  成  绩  查  询" << endl;
	cout << endl;						
	cout << "            3.课  程  信  息  查  询" << endl;
	cout << endl;						
	cout << "            4.学  生  籍  贯  查  询" << endl;
	cout << endl;
	cout << "            5.返  回" << endl;
	cout << "****************************************" << endl;
}
void menu::deletemenu() {
	cout << "****************************************" << endl;
	cout << "            1.学  生  信  息  删  除" << endl;
	cout << endl;						
	cout << "            2.学  生  成  绩  删  除" << endl;
	cout << endl;					
	cout << "            3.课  程  信  息  删  除" << endl;
	cout << endl;					
	cout << "            4.学  生  籍  贯  删  除" << endl;
	cout << endl;
	cout << "            5.返  回" << endl;
	cout << "****************************************" << endl;
}
void menu::S_searchmenu() {
	cout << "************************************************************************" << endl;
	cout << "            1.查 询 单 学 生 所 有 成 绩" << endl;
	cout << endl;
	cout << "            2.查 询 单 课 程 所 有 学 生 成 绩" << endl;
	cout << endl;
	cout << "            3.统 计 所 有 学 生 学 分" << endl;
	cout << endl;
	cout << "            4.统 计 学 分 绩 点 小 于 某 个 值 的 所 有 学 生" << endl;
	cout << endl;
	cout << "            5.返  回" << endl;
	cout << "************************************************************************" << endl;
}

//input
void menu::basicinfo_input() {
	string id, sid, name, gender, birth, temp;
	cout << "请输入新添加的学生信息：" << endl;
	cout << "请输入身份证：" << endl;
	cin >> id;
	cout << "请输入学号：" << endl;
	cin >> sid;
	cout << "请输入姓名：" << endl;
	cin >> name;
	cout << "请输入性别：" << endl;
	cin >> gender;
	cout << "请输入出生日期：" << endl;
	cin >> birth;
	cout << "请输入备注：" << endl;
	cin >> temp;
	Mydata.add_stubasic(BasicInfo(id, sid, name, gender, birth, temp));
	cout << "添加成功" << endl;
	system("pause");
}
void menu::score_input() {
	
	string lid, id, name;
	float xf, ps_score, qm_score, score, gpa;
	int tern;
	cout << "请输入新添加的成绩信息：" << endl;
	cout << "请输入学号：" << endl;
	cin >> id;
	cout << "请输入课程编号：" << endl;
	cin >> lid;
	cout << "请输入课程名称：" << endl;
	cin >> name;
	cout << "请输入学分：" << endl;
	cin >> xf;
	cout << "请输入平时成绩：" << endl;
	cin >> ps_score;
	cout << "请输入期末成绩：" << endl;
	cin >> qm_score;
	cout << "请输入总评：" << endl;
	cin >> score;
	cout << "请输入绩点：" << endl;
	cin >> gpa;
	cout << "请输入学期：" << endl;
	cin >> tern;
	Mydata.add_stuscore(Score(id, lid, name, xf, ps_score, qm_score, score, gpa, tern));
	cout << "添加成功" << endl;
	system("pause");	
}
void menu::kc_input() {
	string lid,name,tern,xz;
    float xf;
	cout << "请输入新添加的成绩信息：" << endl;
	cout << "请输入课程编号：" << endl;
	cin >> lid;
	cout << "请输入课程名称：" << endl;
	cin >> name;
	cout << "请输入学分：" << endl;
	cin >> xf;
	cout << "请输入学期：" << endl;
	cin >> tern;
	cout << "请输入课程性质：" << endl;
	cin >> xz;
	
	Mydata.add_stukc(KC(lid, name, tern,xf, xz));
	cout << "添加成功" << endl;
	system("pause");
}
void menu::jg_input() {
	string sid, name, xy, major, bj,daddress,gender,phonenum,address,postcode,jg;
	cout << "请输入新添加的成绩信息：" << endl;
	cout << "请输入学号：" << endl;
	cin >> sid;
	cout << "请输入姓名：" << endl;
	cin >> name;
	cout << "请输入学院：" << endl;
	cin >> xy;
	cout << "请输入专业：" << endl;
	cin >> major;
	cout << "请输入班级：" << endl;
	cin >> bj;
	cout << "请输入宿舍住址：" << endl;
	cin >> daddress;
	cout << "请输入性别：" << endl;
	cin >> gender;
	cout << "请输入电话号码：" << endl;
	cin >> phonenum;
	cout << "请输入家庭地址：" << endl;
	cin >> address;
	cout << "请输入邮政编码：" << endl;
	cin >> postcode;
	cout << "请输入籍贯班级：" << endl;
	cin >> jg;
	
	Mydata.add_stujg(JG(sid,  name,  xy,  major,  bj, daddress,  gender,  phonenum,  address,postcode,  jg));
	cout << "添加成功" << endl;
	system("pause");
}

//edit
void menu::basicinfo_edit() {
	string id, sid, name, gender, birth, temp;
	cout << "请输入要修改的学生学号：" << endl;
	cin >> sid;
	cout << "请输入新的学生信息：" << endl;
	cout<< "请输入身份证：" << endl;
	cin >> id;
	cout << "请输入学号：" << endl;
	cin >> sid;
	cout << "请输入姓名：" << endl;
	cin >> name;
	cout << "请输入性别：" << endl;
	cin >> gender;
	cout << "请输入出生日期：" << endl;
	cin >> birth;
	cout << "请输入备注：" << endl;
	cin >> temp;
	Mydata.edit_stubasic(BasicInfo(id, sid, name, gender, birth, temp));
	system("pause");
}
void menu::score_edit() {
	
	string lid, id, name;
	float xf, ps_score, qm_score, score, gpa;
	int tern;
	
	cout << "请输入要修改的学生学号：" << endl;
	cin >> id;
	cout << "请输入要修改的课程编号：" << endl;
	cin >> lid;
	cout << "请输入新添加的成绩信息：" << endl;
	cout << "请输入课程编号：" << endl;
	cin >> lid;
	cout << "请输入课程名称：" << endl;
	cin >> name;
	cout << "请输入学分：" << endl;
	cin >> xf;
	cout << "请输入平时成绩：" << endl;
	cin >> ps_score;
	cout << "请输入期末成绩：" << endl;
	cin >> qm_score;
	cout << "请输入总评：" << endl;
	cin >> score;
	cout << "请输入绩点：" << endl;
	cin >> gpa;
	cout << "请输入学期：" << endl;
	cin >> tern;
	Mydata.edit_stuscore(lid,Score(id, lid, name, xf, ps_score, qm_score, score, gpa, tern));
	cout << "修改成功" << endl;
	system("pause");	
}
void menu::kc_edit() {
	string lid,name,tern,xz;
    float xf;
	cout << "请输入要修改的课程编号：" << endl;
	cin >> lid;
	cout << "请输入课程名称：" << endl;
	cin >> name;
	cout << "请输入学分：" << endl;
	cin >> xf;
	cout << "请输入学期：" << endl;
	cin >> tern;
	cout << "请输入课程性质：" << endl;
	cin >> xz;
	
	Mydata.edit_stukc(KC(lid, name, tern,xf, xz));
	
	system("pause");
}
void menu::jg_edit() {
	string sid, name, xy, major, bj,daddress,gender,phonenum,address,postcode,jg;
	cout << "请输入新添加的成绩信息：" << endl;
	cout << "请输入要修改的学生学号：" << endl;
	cin >> sid;
	cout << "请输入姓名：" << endl;
	cin >> name;
	cout << "请输入学院：" << endl;
	cin >> xy;
	cout << "请输入专业：" << endl;
	cin >> major;
	cout << "请输入班级：" << endl;
	cin >> bj;
	cout << "请输入宿舍住址：" << endl;
	cin >> daddress;
	cout << "请输入性别：" << endl;
	cin >> gender;
	cout << "请输入电话号码：" << endl;
	cin >> phonenum;
	cout << "请输入家庭地址：" << endl;
	cin >> address;
	cout << "请输入邮政编码：" << endl;
	cin >> postcode;
	cout << "请输入籍贯：" << endl;
	cin >> jg;
	
	Mydata.edit_stujg(JG(sid,  name,  xy,  major,  bj, daddress,  gender,  phonenum,  address,postcode,  jg));
	system("pause");
}


//search
void menu::basicinfo_search(){
	string id;
	cout << "请输入要查询的学生学号：" << endl;
	cin >> id;
	Mydata.search_stubasic(id);
	system("pause");
}
void menu::kc_search(){
	string id;
	cout << "请输入要查询的课程编号：" << endl;
	cin >> id;
	Mydata.search_stukc(id);
	system("pause");
}
void menu::jg_search(){

	string id;
	cout << "请输入要查询的学生学号：" << endl;
	cin >> id;
	Mydata.search_stujg(id);
	system("pause");
}

//S_search
void menu::search_singlestu_score() {
	string id;
	cout << "请输入要查询的学生学号：" << endl;
	cin >> id;
	Mydata.search_singlestuscore(id);
	system("pause");
}
void menu::search_singleL_score() {
	string lid;
	cout << "请输入要查询的课程编号：" << endl;
	cin >> lid;
	Mydata.search_singleLscore(lid);
	system("pause");
}
void menu::search_xf() {
	Mydata.searchxf();
}
void menu::search_gpa() {
	cout << "请输入绩点阈值" << endl;
	float gpa;
	cin >> gpa;
	Mydata.searchgpa(gpa);
}




//delete
void menu::basicinfo_delete(){
	string id;
	cout << "请输入要删除的学生学号：" << endl;
	cin >> id;
	Mydata.delete_stubasic(id);
}
void menu::score_delete(){
	string id,lid;
	cout << "请输入要删除的学生学号：" << endl;
	cin >> id;
	cout<<"请输入要删除的成绩的课程编号："<<endl;
	cin>>lid;
	Mydata.delete_stuscore(id,lid);
}
void menu::kc_delete(){
	string id;
	cout << "请输入要删除的学生学号：" << endl;
	cin >> id;
	Mydata.delete_stukc(id);
}
void menu::jg_delete(){
	string id;
	cout << "请输入要删除的学生学号：" << endl;
	cin >> id;
	Mydata.delete_stujg(id);
}