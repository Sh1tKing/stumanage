#pragma once
#include"Stu_BasicInfo.h"
#include"Stu_Score.h"
#include"Stu_KC.h"
#include"Stu_JG.h"
#include<vector>
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
	

	void add_data(BasicInfo info);
	void add_data(Score score);
	void add_data(KC kc);
	void add_data(JG jg);


	//add
	void add_stubasic(BasicInfo info);
	void add_stuscore(Score info);
	void add_stukc(KC info);
	void add_stujg(JG info);
	
	//edit
	void edit_stubasic(BasicInfo info);
	void edit_stuscore(string,Score info);
	void edit_stukc(KC info);
	void edit_stujg(JG info);

	//search
	void search_stubasic(string id);
	void search_stuscore(string id);
	void search_stukc(string id);
	void search_stujg(string id);

	//delete
	void delete_stubasic(string id);
	void delete_stuscore(string,string);
	void delete_stukc(string id);
	void delete_stujg(string id);

protected:
	vector<BasicInfo> basicinfo;
	vector<Score> score;
	vector<KC> kc;
	vector<JG> jg;
	vector<string> sid;
};
