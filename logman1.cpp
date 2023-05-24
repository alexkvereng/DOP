#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include <iostream>
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Rus");
	int gh = 0;
	char* t56;
	t56 = argv[1];
	if (argv[1][0] == '-' && argv[1][1] == 'w') {
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

		string hjkl = "";
		char t100;

		if (gh == 3) {

		}
		else if (gh == 2) {
			int yi = stoi(argv[2]);
			string yi1;
			fstream f;
			fstream f1;
			yi1 = argv[3];
			//cout << yi1 << endl;
			f.open(yi1);
			while (f.get(t100)) {
				if (t100 == '\r') {
					hjkl += "";
				}
				else {
					hjkl += t100;
				}
			}
			f.close();
			f.open(yi1, ios::out);
			f << hjkl;
			f.close();
			f.open(yi1);
			int a1 = 0;
			int a2 = 0;
			string a3;
			string a4;
			string a5;
			int io = 0;
			f1.open("out.txt");
			f1.close();
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
					cout << a2;
					char f781;
					string kl = "";
					int kl0 = 0;
					int y90 = 0;
					f1.open("out.txt");
					char t670;

					while (f1.get(t670)) {
						//cout<<t670<<endl;
						if (t670 == '\n') {
							kl += "";
						}
						else if (t670 == '\r') {
							kl += "";
						}
						else {
							kl += t670;
						}
					}
					//f1<<0<<" ";
					//f1<<endl;
					//f1<<1<<" ";
					//f1<<endl;
					//f1.close();
					//f1.open("out.txt",ios::app);
					//f1<<0<<" ";
					f1.close();
					//cout<<kl<<endl;
					f1.open("out.txt", ios::out);
					f1 << kl;
					f1.close();
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
			f.open(yi1);
			while (f.get(t100)) {
				if (t100 == '\r') {
					hjkl += "";
				}
				else {
					hjkl += t100;
				}
			}
			f.close();
			f.open(yi1, ios::out);
			f << hjkl;
			f.close();
			string hjkl = "";
			char t100;
			//cout << yi1 << endl;
			//yi1 = "C:\Users\kvere\OneDrive\\Рабочий стол\logman\logman\data.in.txt";
			//f.open("in.txt");
			f.open("in.txt");
			while (f.get(t100)) {
				if (t100 == '\r') {
					hjkl += "";
				}
				else {
					hjkl += t100;
				}
			}
			f.close();
			f.open("in.txt", ios::out);
			f << hjkl;
			f.close();
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
			int l = 0;
			//cin >> l;
			char f781;
			string kl1 = "";
			int kl0 = 0;
			int y90 = 0;
			fstream f2;
			int y901 = 0;

			while (f1.get(f781)) {
				//cout << f781 << endl;
				kl0++;
				if (f781 == '\n') {
					kl1 += " ";
					y90 = kl0;
					int y90 = 1;
					y901 = 1;

				}
				else if (f781 == '\r') {
					kl1 += "";
				}
				else {
					kl1 += f781;
					int y90 = 0;
					y901 = 0;
				}

			}
			f1.close();
			f2.open(yi1);
			int max2 = 0;
			while (f2 >> a11 >> a22) {
				getline(f2, a44);
				//cout << a44 << endl;
				getline(f2, a44);
				max2 = a11;
				//cout << a11 << endl;
			}
			f2.close();
			f1.open(yi1);
			int max1 = 0;
			a11 = 0;
			a22 = 0;
			a33 = "";
			a44 = "";
			a55 = "";
			//cout << kl1 << endl;

			while (f1 >> a11 >> a22) {

				getline(f1, a44);
				//cout << a44 << endl;
				getline(f1, a44);
				//cout <<"a11="<< a11 << endl;
				//cout << nujno << endl;
				max1 = a11;
				if (yi == a22) {

					//string hj0 = "";
					//int y6 = 0;
					//for (int hy = 0; hy < a44.length(); hy++) {
						//if (a44[hy] != ' ') {
							//y6 = hy;
						//}
					//}
					//for (int hy = 0; hy < y6 + 1; hy++) {
						//hj0 += a44[hy];
					//}
					//cout << a44 << " " << kl1 << endl;
					string hj = "";
					//cout << "a11=" << a11 <<" "<<max2<< endl;
					if (a11 == max2) {
						for (int t = 0; t < a44.length() - 2; t++) {
							hj += a44[t];
						}
					}
					else {
						hj = a44;
					}
					
					if (hj == kl1) {
						cout << max1;
						//cout << "Такая строка уже есть" << endl;
						//cout << max1 << endl;
						return max1;
						i1 = 1;
						break;
					}
					else {
						i1 = 1;
						//cout << "Логический номер занят" << endl;
						cout << 0;
						return 0;
						break;
					}
				}
			}
			//cout << kl1 << endl;
			f1.close();
			//cout << kl1 << endl;
			int sizee = 0;
			//cout << nujno << endl;
			if ((i1 == 0) && (y67 == 0)) {
				//cout << max1 + 1 << endl;
				//cout << kl1 << endl;


				f1.open(yi1);
				int l = 0;
				//cin >> l;
				char f781;
				string kl = "";
				int kl0 = 0;
				int y90 = 0;
				int y6 = 0;
				while (f1.get(f781)) {
					//cout << f781 << endl;
					kl0++;
					if (f781 == '\n') {
						kl += "";
						y90 = kl0;
						y6 = 1;

					}
					else if (f781 == '\r') {
						kl += "";
					}
					else {
						kl += f781;
						y6 = 0;
					}

				}
				//cout << kl<<" "<< kl.length() << endl;
				f1.close();
				f1.open(yi1, ios::app);
				//cout << y90 << " " << kl.length() << " " << max1 << endl;
				//y90 != kl.length()
				if ( y6==0 && max1 != 0) {
					
					f1 << endl;
				}
				f1 << max1 + 1 << " " << yi << endl;
				sizee = kl1.length();
				f1 << kl1 << "  ";
				//cout << kl1 << endl;
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
					//w4[yu] = hj;
					
					if (yu+1 == max2 && y901==0) {
						//cout << yu<< " " << max2 << endl;
						string hj123 = "";
						for (int t5 = 0; t5 <w4[yu].length()-2; t5++) {
							hj123 += w4[yu][t5];
						}
						w4[yu] = hj123;
					}

				}
				f1.close();
				f1.open(yi1, ios::out);
				f1.close();
				for (int t6 = 0; t6 < max1 + 1; t6++) {
					//cout<<w3[t6];
					 //cout<<w4[t6];
					if (t6 == max1) {
						f1.open(yi1, ios::app);
						//cout << w1[t6] << " " << w2[t6] << endl;
						//w3[t6]+=" ";
						//w3[t6]+="\n";
						f1 << w3[t6];
						
						f1 << endl;
						//w4[t6]+="   ";
						f1 << w4[t6];
						//f1 << "  ";
						f1.close();
						//cout << "Завершено успешно" << endl;
						break;
					}
					else {
						//w3[t6]+=" ";
						f1.open(yi1, ios::app);
						f1 << w3[t6];
						
						f1 << endl;
						f1 << w4[t6];
						
						f1 << endl;
						f1.close();
						//cout << w1[t6] << " " << w2[t6] << endl;
					}
				}







				f1.close();
				f1.open(yi1);
				char t890;
				string kl70 = "";
				while (f1.get(t890)) {
					if (t890 == '\r') {
						kl70 += "";
					}
					else {
						kl70 += t890;
					}
				}
				f1.close();
				f1.open(yi1, ios::out);
				f1 << kl70;
				f1.close();
				cout << max1 + 1;
				return max1 + 1;
			}
			else {
				//cout<< "Вы ввели не тот номер" << endl;
				cout << 0;
				return 0;
			}



		}
		else {
			//cout << "Вы ввели не тот номер" << endl;
			cout << 0;
			return 0;
			//cout << "Вы ввели не тот номер" << endl;
		}

	}
	catch (...) {
		//cout << "Ошибка" << endl;
		cout << 0;
		return 0;
	}
	//cout << "Завершение" << endl;
	return 0;

}