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

	//input
	void basicinfo_input();
	void score_input();
	void kc_input();
	void jg_input();
	
	//edit
	void basicinfo_edit();
	void score_edit();
	void kc_edit();
	void jg_edit();
	//search
	void basicinfo_search();
	void score_search();
	void kc_search();
	void jg_search();
	//delete
	void basicinfo_delete();
	void score_delete();
	void kc_delete();
	void jg_delete();

	//searchscore
	void S_searchmenu();
};