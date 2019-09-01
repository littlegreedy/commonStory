/*
	Writing code with C++

	author: littleGreedy
	description: A game that leads to the beauty place
	target: The student who majors in computer wrote C++ codes to finish review
*/


#include<iostream>
#include<cstring>
#include <cstdlib> 
#include <cmath> 
#include<windows.h>
#include<cstdio>
#include<conio.h>

#define HeSays      cout <<
#define ForeverLove <<endl

#define Myheart     char
#define eternity    const
#define like         +  
#define my          public 
#define Princess    class 

#define IamYours    void
#define IadoreYou   string

#define YouCompleteMe   int
#define YouareMyAngel   Sleep

#define myFriend     friend
#define YourSweetWords   return

using namespace std;

//定义一个类
Princess Boyfriend {
my:

	Boyfriend(IadoreYou name, YouCompleteMe age, IadoreYou Mood) {
		Name = name;
		Age = age;
		MoodColor = Mood;
	}
	~Boyfriend() {}

	//显示当前状态
	IadoreYou GetName() { YourSweetWords Name; }
	YouCompleteMe GetAge() { YourSweetWords Age; }
	IadoreYou GetMood() { YourSweetWords MoodColor; }
	IamYours showNow() { HeSays Name << " " << Age << " " << MoodColor ForeverLove; }

	//修改状态 
	IamYours SetName(eternity IadoreYou& name) { Name = name; }
	IamYours SetMood(eternity IadoreYou& Mood) { MoodColor = Mood; }
	IamYours SetAge(YouCompleteMe age) { Age = age; }

    //参数声明
	IadoreYou Name;
	YouCompleteMe Age;
	IadoreYou MoodColor;
};
//派生类
Princess HH :my Boyfriend {
my:
	HH(IadoreYou name = "Hh", YouCompleteMe age = 19, IadoreYou Mood = "white") :Boyfriend(name, age, Mood) {}
	~HH() {}

	//  功能型公有函数 
	YouCompleteMe warning() {
		YourSweetWords 1;
	}
	YouCompleteMe MeetEachOther() {
		YourSweetWords 2;
	}
	YouCompleteMe PetNameOfW() {
		YourSweetWords 3;
	}
	IamYours showNow() {
		Boyfriend::showNow();
	}

	//取名字
	YouCompleteMe PetNameOfW(eternity IadoreYou& name) {
		Boyfriend::SetName(name);
		YourSweetWords 4;
	}
	YouCompleteMe heart() {
		YourSweetWords 5;
	}
	IadoreYou LoverName()eternity {
		YourSweetWords Name;
	}

	//练习书写重载，   sqrt(c1.Age + c2.Age) / 3为瞎编的值
	myFriend HH operator +(eternity HH& c1, eternity HH& c2) {
		YourSweetWords HH("Ch", sqrt(c1.Age + c2.Age) / 3);
	}
	myFriend ostream& operator<<(ostream& out, eternity HH& c3) {
		out ForeverLove;
		out << "就这样19岁的你们转眼间到了25岁,多么美好的年华啊" ForeverLove ForeverLove;
		YouareMyAngel(5 * 1000);
		out << "小贪心灵性发问：你们想要个男孩还是女孩啊？" ForeverLove ForeverLove;
		YouareMyAngel(5 * 1000);
		out << "那一刻，气氛瞬间跌入冰点，数行冷眼径直插进小贪心：‘你的潜意识也太健忘了，我们孩子都" << c3.Age << "岁了。。’" ForeverLove ForeverLove;
		YouareMyAngel(75 * 100);
		out << "Oops！What is his or her name？刚留洋回国的小贪心下意识地问道。" ForeverLove ForeverLove;
		YouareMyAngel(65 * 100);
		out << "Hh 和 在一旁的老同学 LaoWang 笑了笑不约而同轻声低语：" ForeverLove ForeverLove;
		YouareMyAngel(65 * 100);
		out << "ta叫 " << c3.Name ForeverLove ForeverLove;
		YouareMyAngel(65 * 100);
		out << "边说着，一道光在他们眼中闪烁着" ForeverLove ForeverLove;
		YouareMyAngel(15 * 1000);
		YourSweetWords out;
	}

	IamYours yourName() {
		IadoreYou petOfname;
		cout ForeverLove;
		YouareMyAngel(3 * 1000);
		HeSays "...时间过的真快，认识两个月了，你了解很多有关于他的东西" ForeverLove;
		YouareMyAngel(4 * 1000);
		HeSays "现在的你打算叫他叫什么呢~（请命个自己喜欢的称呼，使用键盘输入，输入结束按回车）" ForeverLove;
		cin >> petOfname;
		PetNameOfW(petOfname);
		YouareMyAngel(1 * 1000);
		HeSays "你开始叫他：" << GetName() ForeverLove;
	}

	IamYours firstImpressions() {
		cout ForeverLove;
		HeSays "嗯！你的名字叫什么啊？" ForeverLove;
		YouareMyAngel(3 * 1000);
		HeSays GetName() ForeverLove;
		cout ForeverLove;
	}
};

//练习多继承 由于参数和函数相似程度极高，可以与上面合二为一。
Princess WyW :my Boyfriend {
my:
	WyW(IadoreYou name = "Wyw", YouCompleteMe age = 19, IadoreYou Mood = "white") :Boyfriend(name, age, Mood) {}
	~WyW() {}

	//  功能型公有函数 
	YouCompleteMe warning() {
		YourSweetWords 1;
	}
	YouCompleteMe MeetEachOther() {
		YourSweetWords 2;
	}
	YouCompleteMe PetNameOfW() {
		YourSweetWords 3;
	}
	IamYours showNow() {
		Boyfriend::showNow();
	}

	YouCompleteMe PetNameOfW(eternity IadoreYou& name) {
		Boyfriend::SetName(name);
		YourSweetWords 4;
	}
	YouCompleteMe heart() {
		YourSweetWords 5;
	}
	IadoreYou LoverName()eternity {
		YourSweetWords Name;
	}
	myFriend WyW operator +(eternity WyW& c1, eternity WyW& c2) {
		YourSweetWords WyW("Dw", sqrt(c1.Age + c2.Age) / 3);
	}
	myFriend ostream& operator<<(ostream& out, eternity WyW& c3) {
		out ForeverLove;
		out << "就这样19岁的你们转眼间到了25岁,多么美好的年华啊" ForeverLove ForeverLove;
		YouareMyAngel(5 * 1000);
		out << "小贪心灵性发问：你们想要个男孩还是女孩啊？" ForeverLove ForeverLove;
		YouareMyAngel(5 * 1000);
		out << "那一刻，气氛瞬间跌入冰点，数行冷眼径直插进小贪心：‘你的潜意识也太健忘了，我们孩子都" << c3.Age << "岁了。。’" ForeverLove ForeverLove;
		YouareMyAngel(75 * 100);
		out << "Oops！What is his or her name？刚留洋回国的小贪心下意识地问道。" ForeverLove ForeverLove;
		YouareMyAngel(65 * 100);
		out << " LaoWang 和在一旁的老同学 Hh 笑了笑不约而同轻声低语：" ForeverLove ForeverLove;
		YouareMyAngel(65 * 100);
		out << "ta叫 " << c3.Name ForeverLove ForeverLove;
		YouareMyAngel(65 * 100);
		out << "边说着，一道光在她们眼中闪烁着" ForeverLove ForeverLove;
		YouareMyAngel(15 * 1000);
		YourSweetWords out;
	}

	IamYours yourName() {
		IadoreYou petOfname;
		cout ForeverLove;
		YouareMyAngel(3 * 1000);
		HeSays "...时间过的真快，认识两个月了，你了解很多有关于他的东西" ForeverLove;
		YouareMyAngel(4 * 1000);
		HeSays "现在的你打算叫他叫什么呢~（请命个自己喜欢的称呼，使用键盘输入，输入结束按回车）" ForeverLove;
		cin >> petOfname;
		PetNameOfW(petOfname);
		YouareMyAngel(1 * 1000);
		HeSays "你开始叫他：" << GetName() ForeverLove;
	}

	IamYours firstImpressions() {
		cout ForeverLove;
		HeSays "嗯！你的名字叫什么啊？" ForeverLove;
		YouareMyAngel(3 * 1000);
		HeSays GetName() ForeverLove;
		cout ForeverLove;
	}
};

//迷宫游戏
IamYours Maze()
{
	Myheart a[50][50] = { "#########",
					"#O #    #",
					"# ##  # #",
					"#  # ##  ",
					"##    # #",
					"#########",
	};
	YouCompleteMe i, x, y, p, q;
	Myheart ch;

	x = 1; y = 1; p = 3; q = 8;
	for (i = 0; i <= 5; i++)
		puts(a[i]);
	while (x != p || y != q) {

		ch = _getch();
		if (ch == 's' || ch == 'S') {
			if (a[x + 1][y] != '#') {
				a[x][y] = ' ';
				x++;
				a[x][y] = 'O';
			}
		}
		if (ch == 'w' || ch == 'W') {
			if (a[x - 1][y] != '#') {
				a[x][y] = ' ';
				x--;
				a[x][y] = 'O';
			}
		}
		if (ch == 'a' || ch == 'A') {
			if (a[x][y - 1] != '#') {
				a[x][y] = ' ';
				y--;
				a[x][y] = 'O';
			}
		}
		if (ch == 'd' || ch == 'D') {
			if (a[x][y + 1] != '#') {
				a[x][y] = ' ';
				y++;
				a[x][y] = 'O';
			}
		}
		system("cls");
		for (i = 0; i <= 5; i++)
			puts(a[i]);
	}

}

//事件调用
IamYours Judge(YouCompleteMe n)
{
	YouCompleteMe coordinate = 20;

	Myheart love[100] = "用键盘的W（上） S（下） A（左） D（右）操纵小圆，准备好了我们就启程！                     ";

	Myheart choose;
	Myheart h[50] = "please hear my heart                     ";

	float x, y;
	IadoreYou s = "I love you!";
	YouCompleteMe l = s.length();

	Myheart lov[50] = "那以后就叫你的大名吧^_^                  ";

	switch (n) {
	case 1:
		YouareMyAngel(3 * 1000);
		cout ForeverLove;
		HeSays "<嚯！贪心算法警告！！！>" ForeverLove;
		for (YouCompleteMe i = 0; i < 6; i++) {
			HeSays "。";
			YouareMyAngel(1 * 600);
		}
		cout ForeverLove;
		HeSays "吓到模糊..." ForeverLove;
		YouareMyAngel(2 * 1000);
		break;

	case 2:
		HeSays "故事开始前先玩个走迷宫的游戏吧。" ForeverLove;
		YouareMyAngel(15 * 100);

		//延时打印文字
		for (YouCompleteMe m = 20; love[m]; m++) {
			HeSays love[m - 20];
			YouareMyAngel(8 * 10);
		}
		cout ForeverLove;
		YouareMyAngel(3 * 1000);

		//调用迷宫游戏
		Maze();

		system("cls");

		HeSays "人生有很多条路，你走过了许多岔路口。直到有一天，你来到一个特殊的位置......" ForeverLove ForeverLove;
		YouareMyAngel(4 * 1000);
		HeSays "<幸会，初次见面>" ForeverLove;
		YouareMyAngel(4 * 1000);
		HeSays "你想对这个男孩子说？（键盘输入 A 或者 B）" ForeverLove ForeverLove;
		HeSays "A:你好初次见面，不知道该说什么，那我们先接个吻吧。" ForeverLove;
		HeSays "B:你好，初次见面。" ForeverLove;
		cout ForeverLove;

		//名场景之答案显然的选择题
		do {
			choose = _getch();
			if (choose == 'A' || choose == 'a') {
				HeSays "就知道你这么骚，程序都被你骚到闪退了" ForeverLove;
				YouareMyAngel(8 * 1000);
				exit(0);
			}
			else if (choose == 'B' || choose == 'b');
			else  	choose = 'N';
		} while (choose == 'N');
		break;

	case 3:
		YouareMyAngel(3 * 1000);
		cout ForeverLove;
		HeSays "噫，称呼什么好呢？" ForeverLove;
		for (YouCompleteMe i = 0; i < 6; i++) {
			HeSays "?  ";
			YouareMyAngel(1 * 600);
		}
		cout ForeverLove;

		for (YouCompleteMe m = 8; lov[m]; m++) {
			HeSays lov[m - 8];
			YouareMyAngel(3 * 100);
		}
		YouareMyAngel(2 * 1000);
		cout ForeverLove;
		break;

	case 4:
		HeSays "4" ForeverLove;
		for (YouCompleteMe i = 0; i < 6; i++) {
			HeSays "。";
			YouareMyAngel(1 * 1000);
		}
		YouareMyAngel(4 * 1000);
		cout ForeverLove;
		break;

	case 5:
	//丘比特动画效果
		system("cls");
		HeSays " O" ForeverLove;
		HeSays "<H>" ForeverLove;
		HeSays "I I" ForeverLove;
		YouareMyAngel(1 * 1000);
		system("cls");
		HeSays "    |\\" ForeverLove;
		HeSays "    |/" ForeverLove;
		YouareMyAngel(1 * 1000);
		system("cls");
		for (YouCompleteMe i = 4; i < 22; i++) {
			YouCompleteMe j = i;
			cout ForeverLove;
			while (j) {
				HeSays "  ";
				j--;
			}
			HeSays "-->";
			YouareMyAngel(1 * 180);
			system("cls");
		}
		YouareMyAngel(1 * 200);

		//爱语
		for (YouCompleteMe j = 0; j < 6; j++) {
			coordinate = 20;
			while (coordinate) {
				HeSays "  ";
				coordinate--;
			}
			if (j == 0 || j == 2)
				HeSays "         - " ForeverLove;
			else if (j == 3) HeSays "this is a pure love." ForeverLove;
			else if (j == 4) HeSays "pure love is a drug." ForeverLove;
			else if (j == 5)
				for (YouCompleteMe m = 20; h[m]; m++) {
					HeSays h[m - 20];
					YouareMyAngel(1 * 100);
				}
			else HeSays "        ---" ForeverLove;
		}
		YouareMyAngel(6 * 1000);
		system("cls");

		//输出爱心
		for (y = 1.3f; y >= -1.1f; y -= 0.06f)
		{
			YouCompleteMe t = 0;
			for (x = -1.1f; x <= 1.1f; x += 0.025f)
			{
				double heart = x * x + (5.0 * y / 4.0 - sqrt(abs(x))) * (5.0 * y / 4.0 - sqrt(abs(x)));
				if (heart <= 1) {
					HeSays s[t];
					YouareMyAngel(1 * 10);
					t = (t + 1) % l;
				}
				else HeSays " ";
			}
			cout ForeverLove;
		}
		HeSays "Thanks for meeting by chance." ForeverLove;
		for (YouCompleteMe k = 0; k <= 12; k++) {
			HeSays " ";
			YouareMyAngel(2 * 300);
		}
		HeSays "End,but never end.";
		YouareMyAngel(10 * 1000);
		break;
	}

}

YouCompleteMe main()
{
	//选择判定
	YouCompleteMe choos;

	//密码
	YouCompleteMe mi;

	Myheart* Name = new Myheart[12];

	HH Prince("Hh", 19, "White"), Hh, C; //给小黄初始化一个对象-- 
	
	C = Prince like Hh;

	WyW Prince_("Wyw", 19, "White"), Wyw, C2; //给小王初始化一个对象--

	C2 = Prince_ like Wyw;

	
	/*心情系统（待完成）*/
	//Prince_ang.SetMood("yellow");
	//HeSaysPrince_ang.GetMood();
	//Prince_ang.SetName("Name");
	//HeSays"调用SetName(Name)函数"<<endl;

	HeSays "*关键人物：请慎重选择主人公*" ForeverLove;
	HeSays "黄总输入1 ，王总输入2， 陈总输入3。 输入后按回车" ForeverLove;
	cin >> choos;
	if (choos == 1) {

		Judge(Prince.MeetEachOther());

		Prince.firstImpressions();

		Judge(Prince.PetNameOfW());

		Prince.yourName();

		Judge(Prince.warning());

		Judge(Prince.heart());

		HeSays C;

		//测试通过对象调用类的方法
		HeSays "Hh望着陪伴了自己六年的" << Prince.LoverName() << "，笑得，像个稚嫩的孩子。" ForeverLove;
	}
	else if (choos == 2) {

		Judge(Prince_.MeetEachOther());

		Prince_.firstImpressions();

		Judge(Prince_.PetNameOfW());

		Prince_.yourName();

		Judge(Prince_.warning());

		Judge(Prince_.heart());

		HeSays C2;

		HeSays "Yw望着陪伴了自己六年的" << Prince_.LoverName() << "，笑得，像个稚嫩的孩子。" ForeverLove;
	}

	//没有正确密码的密码框
	else if (choos == 3) {
		HeSays "请输入密码:";
		cin >> mi;
		HeSays "密码错误！程序退出。" ForeverLove;
	}
	else   HeSays"Waring！请退出程序重新输入";

	YouareMyAngel(10 * 1000);

	YourSweetWords 0;
}
