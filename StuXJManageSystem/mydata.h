#pragma once
#include"Stu_BasicInfo.h"
#include"Stu_Score.h"
#include"Stu_KC.h"
#include"Stu_JG.h"
#include"Stu_YX.h"
#include<vector>
struct person {
	string sid, name;
};
class mydata
{
public:
	mydata(){}
	void read_data();
	void write_data();
	void data_init();

	void read_basicinfo_data();
	void write_basicinfo_data();
	void read_score_data(string id);
	void write_allscore_data(string id);
	void write_score_data(string id,Score&);
	void read_kc_data();
	void write_kc_data();
	void read_jg_data();
	void write_jg_data();
	void read_yx_data();
	void write_yx_data();

	void add_data(BasicInfo info);
	void add_data(Score score);
	void add_data(KC kc);
	void add_data(JG jg);
	void add_data(YX yx);

	//add
	void add_stubasic(BasicInfo info);
	void add_stuscore(Score info);
	void add_stukc(KC info);
	void add_stujg(JG info);
	void add_stuyx(YX info);

	//edit
	void edit_stubasic(BasicInfo info);
	void edit_stuscore(string,Score info);
	void edit_stukc(KC info);
	void edit_stujg(JG info);
	void edit_stuyx(YX info);

	//search
	void search_stubasic(string id);
	void search_stukc(string id);
	void search_stujg(string id);
	void search_stuyx(string id);

	//S_search
	void search_singlestuscore(string id);
	void search_singleLscore(string lid);
	void searchxf();
	void searchgpa(float gpa);

	//delete
	void delete_stubasic(string id);
	void delete_stuscore(string,string);
	void delete_stukc(string id);
	void delete_stujg(string id);
	void delete_stuyx(string id);

protected:
	vector<BasicInfo> basicinfo;
	vector<Score> score;
	vector<KC> kc;
	vector<JG> jg;
	vector<YX> yx;
	vector<person> sid;
	vector<Score> singlescore;
};
