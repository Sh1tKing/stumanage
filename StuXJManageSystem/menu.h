#pragma once
#include"mydata.h"
class menu {
public:
	menu();
	~menu(){}
	void mainmenu();
	void editmenu();
	void inputmenu();
	void searchmenu();
	void deletemenu();
	void S_searchmenu();

	//input
	void basicinfo_input();
	void score_input();
	void kc_input();
	void jg_input();
	void yx_input();
	
	//edit
	void basicinfo_edit();
	void score_edit();
	void kc_edit();
	void jg_edit();
	void yx_edit();

	//search
	void basicinfo_search();
	void kc_search();
	void jg_search();
	void yx_search();

	//delete
	void basicinfo_delete();
	void score_delete();
	void kc_delete();
	void jg_delete();
	void yx_delete();

	//searchscore
	void search_singlestu_score();
	void search_singleL_score();
	void search_xf();
	void search_gpa();

};