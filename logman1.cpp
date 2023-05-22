
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include <iostream>
int main(int argc,char* argv[])
{
	setlocale(LC_ALL, "Rus");
	int gh = 0;
	char* t56;
	t56 = argv[1];
	if (argv[1][0] =='-'&& argv[1][1]=='w') {
		gh = 1;
	}
	else if (argv[1][0] == '-' && argv[1][1] == 'r') {
		gh = 2;
	}
	else {
		gh = 0;
	}
	int prov = 0;
	try {
			if (gh == 3) {
				
			}
			else if (gh == 2) {
				int yi = stoi(argv[2]);
				string yi1;
				fstream f;
				yi1 = argv[3];
				//cout << yi1 << endl;
				f.open(yi1);
				int a1 = 0;
				int a2 = 0;
				string a3;
				string a4;
				string a5;
				int io = 0;
				while (f >> a1 >> a2) {
					getline(f, a4);
					getline(f, a4);
					if (a1 == yi) {
						fstream f1;
						f1.open("out.txt", ios::out);
						string hj0 = "";
						int y6 = 0;
						for (int hy = 0; hy < a4.length(); hy++) {
							if (a4[hy] != ' ') {
								y6 = hy;
							}
						}
						for (int hy = 0; hy < y6 + 1; hy++) {
							hj0 += a4[hy];
						}
						if (hj0 != "") {
							f1 << hj0;
						}

						f1.close();
						io = 1;					
						cout <<  a2;
						char f781;
						string kl = "";
						int kl0 = 0;
						int y90 = 0;
						
						return a2;

					}
				}
				f.close();
				if (io == 0) {
					cout << 0;
					return 0;
				}
			}
			else if (gh == 1) {
				//cout << "ghfhgf" << endl;
				//cout << "Введите логический номер" << endl;
				int yi = stoi(argv[2]);
				//cin >> yi;
				int y89 = 0;
				string yi1;
				//cout << "Введите расположение файла data.in" << endl;
				//cin >> yi1;
				fstream f;
				yi1 = argv[3];
				//cout << yi1 << endl;
				//yi1 = "C:\Users\kvere\OneDrive\\Рабочий стол\logman\logman\data.in.txt";
				//f.open("in.txt");
				int a1 = 0;
				int a2 = 0;
				string a3;
				string a4;
				string a5;
				string nujno;
				int io = 0;
				int i1 = 0;
				int y67 = 0;
				fstream f1;
				int a11 = 0;
				int a22 = 0;
				string a33;
				string a44;
				string a55;
				f1.open("in.txt");
				while (f1 >> a11 >> a22) {
					//f1 >> a44;
					getline(f1, a44);
					getline(f1, a44);
					//cout << a44;
					//getline(f1, a44);
					//cout << a44 << endl;
					if (yi == a22) {
						nujno = a44;
						y67 = 1;
						//cout << nujno << endl;
					}
				}
				f1.close();

				f1.open(yi1);
				int max1 = 0;
				a11 = 0;
				a22 = 0;
				a33 = "";
				a44 = "";
				a55 = "";


				while (f1 >> a11 >> a22) {

					getline(f1, a44);
					getline(f1, a44);
					//cout << a44 << endl;
					//cout << nujno << endl;
					max1 = a11;
					if (yi == a22) {
						string hj0 = "";
						int y6 = 0;
						for (int hy = 0; hy < a44.length(); hy++) {
							if (a44[hy] != ' ') {
								y6 = hy;
							}
						}
						for (int hy = 0; hy < y6 + 1; hy++) {
							hj0 += a44[hy];
						}

						if (hj0 == nujno) {
							cout << max1 ;
							//cout << "Такая строка уже есть" << endl;
							//cout << max1 << endl;
							return max1;
							i1 = 1;
							break;
						}
						else {
							i1 = 1;
							//cout << "Логический номер занят" << endl;
							cout << 0 ;
							return 0;
							break;
						}
					}
				}
				f1.close();
				int sizee = 0;
				//cout << nujno << endl;
				if ((i1 == 0) && (y67 == 1)) {
					//cout << max1 + 1 << endl;



					f1.open(yi1);
					int l = 0;
					//cin >> l;
					char f781;
					string kl = "";
					int kl0 = 0;
					int y90 = 0;
					while (f1.get(f781)) {
						//cout << f781 << endl;
						kl0++;
						if (f781 == '\n') {
							kl += " ";
							y90 = kl0;

						}
						else {
							kl += f781;
						}

					}
					//cout << kl<<" "<< kl.length() << endl;
					f1.close();
					f1.open(yi1, ios::app);
					if (y90 != kl.length() && max1 != 0) {
						f1 << endl;
					}
					f1 << max1 + 1 << " " << yi << endl;
					sizee = nujno.length();
					f1 << nujno << " " << " ";
					f1.close();
					f1.open(yi1);
					int a671 = 0;
					int a672 = 0;
					int a673 = 0;
					a11 = 0;
					a22 = 0;
					a55 = " ";
					a44 = "";
					int kol = 0;
					//cout << kl << endl;
					//int* w1 = new int[max1 + 1];
					//int* w2 = new int[max1 + 1];
					string* w3 = new string[max1 + 1];
					string* w4 = new string[max1 + 1];
					a55 = "";
					int k = 0;
					int k1 = 1;
					int t = 0;
					for (int yu = 0; yu < max1 + 1; yu++) {
						getline(f1, w3[yu]);
						getline(f1, w4[yu]);
						//cout << w3[yu] << endl;
						//cout << w4[yu] << endl;
						int ki90 = 0;
						for (int t5 = 0; t5 < w3[yu].length(); t5++) {
							if (w3[yu][t5] != ' ') {
								ki90 = t5;
							}
						}
						string hj = "";
						for (int t5 = 0; t5 < ki90 + 1; t5++) {
							hj += w3[yu][t5];
						}
						w3[yu] = hj;
						//cout << w3[yu] << endl;
						ki90 = 0;
						for (int t5 = 0; t5 < w4[yu].length(); t5++) {
							if (w4[yu][t5] != ' ') {
								ki90 = t5;
							}
						}
						hj = "";
						for (int t5 = 0; t5 < ki90 + 1; t5++) {
							hj += w4[yu][t5];
						}
						w4[yu] = hj;
						//cout << w4[yu] << endl;

					}
					f1.close();
					f1.open(yi1, ios::out);
					for (int t6 = 0; t6 < max1 + 1; t6++) {
						if (t6 == max1) {
							//cout << w1[t6] << " " << w2[t6] << endl;
							//cout << w3[t6] << endl;
							f1 << w3[t6] << " " << endl;
							f1 << w4[t6] << " " << "  ";
							//cout << "Завершено успешно" << endl;
							break;
						}
						else {
							f1 << w3[t6] <<" "<< endl;
							f1 << w4[t6] << " " << endl;
							//cout << w1[t6] << " " << w2[t6] << endl;
							//cout << w3[t6] << endl;
						}
					}







					f1.close();
					cout << max1 + 1;
					return max1 + 1;
				}
				else {
					//cout<< "Вы ввели не тот номер" << endl;
					cout << 0 ;
					return 0;
				}



			}
			else {
			//cout << "Вы ввели не тот номер" << endl;
			cout << 0 ;
				return 0;
				//cout << "Вы ввели не тот номер" << endl;
			}
		
	}
	catch (...) {
		//cout << "Ошибка" << endl;
		cout << 0 ;
		return 0;
	}
	//cout << "Завершение" << endl;
	return 0;
	
}