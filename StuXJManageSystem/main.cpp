#include<iostream>
#include"menu.h"
#include"mydata.h"
using namespace std;
int main() {
	menu Menu;
	int first_choice = 0, second_choice = 0, third_choice = 0;
	do {
		Menu.mainmenu();
		cout << "请输入：" << endl;
		cin >> first_choice;
		switch (first_choice)
		{
			
		case 1:
			do {
			system("cls");
			Menu.inputmenu();
			cout << "请输入：" << endl;
			cin >> second_choice;
				system("cls");
				Menu.inputmenu();
				switch (second_choice)
				{
					case 1:
						Menu.basicinfo_input();
						break;
					case 2:
						Menu.score_input();
						break;
					case 3:
						Menu.kc_input();
						break;
					case 4:
						Menu.jg_input();
						break;
					case 5:
						Menu.yx_input();
					case 6:
						break;
					default:
						cout<<"输入错误"<<endl;
						break;

				}
				system("cls");
			} while (second_choice != 5);
			break;
		case 2:
			do {
				system("cls");
				Menu.editmenu();
				cout << "请输入：" << endl;
				cin >> second_choice;
				system("cls");
				Menu.editmenu();
				switch (second_choice)
				{
				case 1:
					Menu.basicinfo_edit();
					break;
				case 2:
					Menu.score_edit();
					break;
				case 3:
					Menu.kc_edit();
					break;
				case 4:
					Menu.jg_edit();
					break;
				case 5:
					Menu.yx_edit();
				case 6:
					break;
				default:
					cout << "输入错误" << endl;
					break;

				}
				system("cls");
			} while (second_choice != 5);
			break;
		case 3:
			do {
				system("cls");
				Menu.searchmenu();
				cout << "请输入：" << endl;
				cin >> second_choice;
				system("cls");
				Menu.searchmenu();
				switch (second_choice)
				{
				case 1:
					Menu.basicinfo_search();
					break;
				case 2:
					do {
						system("cls");
						Menu.S_searchmenu();
						cout << "请输入：" << endl;
						cin >> third_choice;
						system("cls");
						Menu.S_searchmenu();
						switch (third_choice)
						{
						case 1:
							Menu.search_singlestu_score();
							break;
						case 2:
							Menu.search_singleL_score();
							break;
						case 3:
							Menu.search_xf();
							break;
						case 4:
							Menu.search_gpa();
							break;
						case 5:
							break;
						default:
							cout << "输入错误" << endl;
							break;

						}
						system("cls");
					} while (third_choice != 5);
					break;
				case 3:
					Menu.kc_search();
					break;
				case 4:
					Menu.jg_search();
					break;
				case 5:
					Menu.yx_search();
				case 6:
					break;
				default:
					cout << "输入错误" << endl;
					break;

				}
				system("cls");
			} while (second_choice != 5);
			break;
		case 4:
			do {
				system("cls");
				Menu.deletemenu();
				cout << "请输入：" << endl;
				cin >> second_choice;
				system("cls");
				Menu.deletemenu();
				switch (second_choice)
				{
				case 1:
					Menu.basicinfo_delete();
					break;
				case 2:
					Menu.score_delete();
					break;
				case 3:
					Menu.kc_delete();
					break;
				case 4:
					Menu.jg_delete();
					break;
				case 5:
					Menu.yx_delete();
				case 6:
					break;
				default:
					cout << "输入错误" << endl;
					break;

				}
				system("cls");
			} while (second_choice != 5);
			break;
		case 5:
			exit(0);
			break;
		default:
			break;
		}
	} while (first_choice != 5);
	
	
}