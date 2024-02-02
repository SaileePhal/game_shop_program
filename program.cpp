#include<fstream>
#include<iostream>
#include<conio.h>
#include <iomanip>
#include<string.h>
using namespace std;
int total_stock = 200;
class stock
{
 int s_and_l = 20;
 int mono = 20;
 int g_and_w = 20;
 int scrab = 20;
 int clue = 20;
 int risk = 20;
 int s_of_c = 20;
 int battle = 20;
 int pict = 20;
 int c4 = 20;

public:
 void operator--()
 {
 total_stock = total_stock - 1;

 }
 void available_stock(int a)
 {
 if (a == 1)
 {
 s_and_l--;
 }
 if (a == 2)
 {
 mono--;
 }
 if (a == 3)
 {
 g_and_w--;
 }
 if (a == 4)
 {
 scrab--;
 }
 if (a == 5)
 {
 clue--;
 }
 if (a == 6)
 {
 risk--;
 }
 if (a == 7)
 {
 s_of_c--;
 }
 if (a == 8)
 {
 battle--;
 }
 if (a == 9)
 {
 pict--;
 }
 if (a == 10)
 {
 c4--;
 }
 stock stock1;
 --stock1;
 display(a);
 }
 void display(int a)
 {
 cout << "Stock of product code " << a << " available are : "<< endl;
 if (a == 1)
 {
 if (s_and_l <= 0)
 {
 cout << "Sorry product is not available";
 }
 else
 {
 cout << s_and_l;
 }
 }
 if (a == 2)
 {
 if (s_and_l <= 0)
 {
 cout << "Sorry product is not available";
 }
 else
 {
 cout << mono;
 }
 }
 if (a == 3)
 {
 if (s_and_l <= 0)
 {
 cout << "Sorry product is not available";
 }
 else
 {
 cout << g_and_w;
 }
 }
 if (a == 4)
 {
 if (s_and_l <= 0)
 {
 cout << "Sorry product is not available";
 }
 else
 {
 cout << scrab;
 }
 }
 if (a == 5)
 {
 if (s_and_l <= 0)
 {
 cout << "Sorry product is not available";
 }
 else
 {
 cout << clue;
 }
 }
 if (a == 6)
 {
 if (s_and_l <= 0)
 {
 cout << "Sorry product is not available";
 }
 else
 {
 cout << risk;
 }
 }
 if (a == 7)
 {
 if (s_and_l <= 0)
 {
 cout << "Sorry product is not available";
 }
 else
 {
 cout << s_of_c;
 }
 }
 if (a == 8)
 {
 if (s_and_l <= 0)
 {
 cout << "Sorry product is not available";
 }
 else
 {
 cout << battle;
 }
 }
 if (a == 9)
 {
 if (s_and_l <= 0)
 {
 cout << "Sorry product is not available";
 }
 else
 {
 cout << pict;
 }
 }
 if (a == 10)
 {
 if (s_and_l <= 0)
 {
 cout << "Sorry product is not available";
 }
 else
 {
 cout << c4;
 }
 }
 cout << endl;
 cout << "Total stock available are: " << total_stock << endl;
 cout << endl;
 }
};

class product:public stock
{
private:
 string name;
 int pro_code[50];
 float pro_price[50];
 int count = 0;
public:
 void getproduct()             //(string s,int code,float amount)
 {
 cout << "Product name : ";    
 cin >> name;
 cout << "Enter product code : ";
 cin >> pro_code[count];     //invalid product_code case
 p1.available_stock(pro_code[count]);
 cout << "Enter product price : ";
 cin >> pro_price[count];
 count++;
 cout << endl;
 }
 void displaysum()
 {
 cout << endl;
 float sum = 0;
 for (int i = 0; i < count; i++)
 {
 sum = sum + pro_price[i];
 }
 cout << "Total amount : " << sum << endl;
 cout << endl;
 }
 void displayproduct()
 {
 cout << endl;
 cout << "PRODUCT CODE" << "\t" << "Product name" << "\t\t" << "PRODUCT PRICE" << endl;
 for (int i = 0; i < count; i++)
 {
 cout << pro_code[i] << "\t\t" <<name<<"\t\t\t"<< pro_price[i] << endl;
 }
 cout << endl;
 }
}p1;

class purchase :public stock, public product
{
private:
 string product_name;
 int product_id;
 float price;
 int games_available;
public:
 void display_games()
 {
 cout << "Choose product code of the game you want to purchase" << endl;
 cout << "The games available in the store are: " << endl;
 cout << "Product code\tProduct Name\t\t\t\tProduct Price" << endl;
 cout << "1\t\t Snakes and Ladders\t\t\t" << "Rs 1800" << endl;
 cout << "2\t\t Monopoly\t\t\t\t" << "Rs 3500" << endl;
 cout << "3\t\t Guess Who?\t\t\t\t" << "Rs 2500" << endl;
 cout << "4\t\t Scrabble\t\t\t\t" << "Rs 1500" << endl;
 cout << "5\t\t Clue\t\t\t\t\t" << "Rs 4500" << endl;
 cout << "6\t\t Risk\t\t\t\t\t" << "Rs 5500" << endl;
 cout << "7\t\t Settlers of Catan\t\t\t" << "Rs 3500" << endl;
 cout << "8\t\t Battleship\t\t\t\t" << "Rs 6500" << endl;
 cout << "9\t\t Pictionary\t\t\t\t" << "Rs 1500" << endl;
 cout << "10\t\t Connect Four\t\t\t\t" << "Rs 2500" << endl;
 }

};

//*********************************************************C U S T O M E R - I N F O****************************************************************************************//

class customer :public purchase
{
private:
 char cust_name[50];
 double cust_id;
 long double phoneno;
 int rating;
public:
 customer()
 {
 cout << "Enter your name : ";
 cin >> cust_name;
 cout << "Enter your id : ";
 cin >> cust_id;
 cout << "Enter phone number : ";
 cin >> phoneno;
 cout << "How satsisfied are you with our service( rate us on the scale (0-5) ) " << endl;
 cin >> rating;
 }
 void display_custinfo()
 {
 cout << "Name : " << cust_name << endl;
 cout << "Id : " << cust_id << endl;
 cout << "Number : " << phoneno << endl;
 cout << "Rating : " << rating << endl;
 }
 ~customer()
 {
 cout << "You have successfully exited from your account" << endl;
 cout << "Thank you for visiting our website";
 }
};

//*********************************************************F I L E S*******************************************************************************************************//

void files(int c_n)
{
 char ch;
 if (c_n == 1)
 {
 ofstream outf("Snakes and Ladders");
 outf << "Created in: 1935"<<endl;
 outf << "For ages: 8 and up" << endl;
 outf << "This delightful game is simple and easy to play, even for children who can't read"
 <<  "Ideal for younger children who are still learning to take turns."<<endl;
 outf.close();
 ifstream inf("Snakes and Ladders");
 while (inf)
 {
 inf.get(ch);
 cout << ch;

 }
 inf.close();
 }
 if (c_n == 2)
 {
 ofstream outf("Monopoly");
 outf << "Created in: 1935" << endl;
 outf << "For ages: 8 and up" << endl;
 outf << "According to the Hasbro website, Monopoly is the world s favorite family gaming brand. Brand, \n"
 << "because while the original Monopoly game is still going strong, there are now more versions than anyone can count, \n"
 << "including ones based on Star Wars, Empire, Disney princesses, and even Minions. You can find electronic and on-the-go versions, \n"
 << "plus an app for every device." << endl;
 outf.close();
 ifstream inf("Monopoly");
 while (inf)
 {
 inf.get(ch);
 cout << ch;

 }
 inf.close();
 }
 if (c_n == 3)
 {
 ofstream outf("Guess Who");
 outf << "Created in: 1979" << endl;
 outf << "For ages: 6 and up" << endl;
 outf << "This two-player game started over 40 years ago, it has now been updated with character art that fits the 21st century: The original version had only five female characters (out of 24)\n"
 << "and no non-white characters at all. This version has 11 female characters and 14 characters of color. Kids love flipping the characters and asking inventive questions to try to guess \n"
 << "each other’s mystery character. It’s a classic for a reason." << endl;
 outf.close();
 ifstream inf("Guess Who");
 while (inf)
 {
 inf.get(ch);
 cout << ch;

 }
 inf.close();
 }
 if (c_n == 4)
 {
 ofstream outf("Scrabble");
 outf << "Created in: 1933" << endl;
 outf << "For ages: 8 and up" << endl;
 outf << "Scrabble has been one of the go-to classic board games for wordsmiths and puzzle lovers for decades. From 1984 to 1990, a Scrabble-based game show ran on television.\n"
 <<"And although the classic board hasn’t changed much throughout the years, Merriam-Webster’s Official Scrabble Players Dictionary, which contains over 100,000 usable Scrabble words, \n"
 <<"is now in its sixth edition and includes new words like bitcoin, emoji, and facepalm." << endl;
 outf.close();
 ifstream inf("Scrabble");
 while (inf)
 {
 inf.get(ch);
 cout << ch;

 }
 inf.close();
 }
 if (c_n == 5)
 {
 ofstream outf("Clue");
 outf << "Created in: 1985" << endl;
 outf << "For ages: 8 and up" << endl;
 outf << "Clue is so popular that it has spawned multiple editions, books, and even a cult classic film. Can’t distinguish between the different versions?\n"
 <<"Here’s a hint: The original is always marked “The Classic Mystery Game.” Currently, there is a Star Wars version of Clue that takes place inside the Empire’s Death Star,\n"
 <<"and players can choose to be Luke, Leia, Han, Chewbacca, R2-D2, or C-3PO. Find the murderer, you can!." << endl;
 outf.close();
 ifstream inf("Clue");
 while (inf)
 {
 inf.get(ch);
 cout << ch;

 }
 inf.close();
 }
 if (c_n == 6)
 {
 ofstream outf("Risk");
 outf << "Created in: 1957" << endl;
 outf << "For ages: 10 and up" << endl;
 outf << "World domination is the goal of this military-themed game. Risk may be the most complicated and strategic of the classic board games listed here, but that hasn’t taken away\n"
 <<" from its popularity. It’s so popular, in fact, that the classic game has inspired special editions based on Star Wars, Europe, Captain America: Civil War, and Narnia, among others.\n"
 <<"There’s even an edition where players can conquer the moon!" << endl;
 outf.close();
 ifstream inf("Risk");
 while (inf)
 {
 inf.get(ch);
 cout << ch;

 }
 inf.close();
 }
 if (c_n == 7)
 {
 ofstream outf("Settlers of Catan");
 outf << "Created in: 1995" << endl;
 outf << "For ages: 10 and up" << endl;
 outf << "This classic settlement board game (which later became a video game) is filled with action and adventure, as each player is on a mission to be the first to settle the\n"
 <<"uncharted island of Catan. It originated in Germany and was one of the first German-style board games to be successful outside of Europe. This classic board game intrigues \n"
 <<"people from all walks of life—it’s fun for the whole family. Keep the fun going while you’re on the go with these entertaining car games." << endl;
 outf.close();
 ifstream inf("Settlers of Catan");
 while (inf)
 {
 inf.get(ch);
 cout << ch;

 }
 inf.close();
 }
 if (c_n == 8)
 {
 ofstream outf("Battleship");
 outf << "Created in: 1967" << endl;
 outf << "For ages: 7 and up" << endl;
 outf << "This infamous strategy-heavy board game is perfect for a sibling rivalry. Its roots go back as far as World War I, where it was said to be played by Russian officers \n"
 <<"with a pen and paper. Milton Bradley ran with the concept, and the familiar Battleship game with plastic boards and pegs made its debut. This game of competition and strategy\n"
 <<"is perfect for the night when you want a brain game that’ll put your mind to good use." << endl;
 outf.close();
 ifstream inf("Battleship");
 while (inf)
 {
 inf.get(ch);
 cout << ch;

 }
 inf.close();
 }
 if (c_n == 9)
 {
 ofstream outf("Pictionary");
 outf << "Created in: 1985" << endl;
 outf << "For ages: 6 and up" << endl;
 outf << "Think of this like charades—but better (especially for lazy game-nighters). This classic drawing game is always good for laughs. When players say they’re not good at drawing,\n"
 <<"remind them that the worse the drawing is, the bigger the laughs are and the more memorable the game remains. Pictionary is a good choice for both kids and adults, as there are\n"
 <<"plenty of “junior” cards that the kiddos will be able to comprehend." << endl;
 outf.close();
 ifstream inf("Pictionary");
 while (inf)
 {
 inf.get(ch);
 cout << ch;

 }
 inf.close();
 }
 if (c_n == 10)
 {
 ofstream outf("Connect Four");
 outf << "Created in: 1974" << endl;
 outf << "For ages: 6 and up" << endl;
 outf << "The simple concept of lining up four chips in a row proves to be a classic game time and time again. Do you start in the middle, or do you focus on one of the corners?\n"
 <<"The choice of strategy is yours as you work to outwit your competitor." << endl;
 outf.close();
 ifstream inf("Connect Four");
 while (inf)
 {
 inf.get(ch);
 cout << ch;

 }
 inf.close();
 }
}


int main()
{

 cout << " Welcome to Gamerz Stop " << endl;
 purchase first_order;
 int x, a;
 do
 {
 first_order.display_games();
 cout << "1.Do you want to make a purchase \n"
 << "2.Do you want to view more details on the product \n"
 << "3.Exit" << endl;
 cin >> a;
 if (a == 1)
 {
 do
 {
 cout << "Press 1. Add a product\nPress 2. Display the product total value\nPress 3. Display all products\nPress 4. Quit" << endl;
 cin >> x;
 switch (x)
 {
 case 1:
 p1.getproduct();
 break;
 case 2:
 p1.displaysum();
 break;
 case 3:
 p1.displayproduct();
 break;
 case 4:
 break;
 }
 } while (x != 4);
 }
 } while (a != 3);


 {
 customer c1;
 c1.display_custinfo();
 }

 _getch();
 return 0;
}