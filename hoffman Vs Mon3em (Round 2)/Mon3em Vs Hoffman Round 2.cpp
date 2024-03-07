#include <iostream>
#include<fstream>
#include <string>
using namespace std;
class cnode
{
public:
    int number;
    char character;
    cnode* pNext;
    cnode* pdown1;
    cnode* pdown2;
    string bits;

};
class CSList
{
public:
    cnode* pHead;
    cnode* pTail;
    CSList()
    {
        pHead = NULL;
        pTail = NULL;
    }
    ~CSList()
    {
        cnode* pTrav = pHead;
        while (pHead != NULL)
        {
            pHead = pTrav->pNext;
            pTrav->pNext = NULL;
            delete pTrav;
            pTrav = pHead;
        }
        pTail = NULL;
    }
    void attatch(cnode* pnn)
    {
        if (pHead == NULL)
        {
            pHead = pnn;
            pTail = pnn;
        }
        else
        {
            pTail->pNext = pnn;
            pTail = pnn;
        }
    }
    void Insert(cnode* pnn)
    {
        if (pHead == NULL)
        {
            pHead = pnn;
        }
        else
        {
            cnode* pB = NULL;
            cnode* pTrav = pHead;

            while (pTrav != NULL && pTrav->number < pnn->number)
            {
                pB = pTrav;
                pTrav = pTrav->pNext;
            }
            if (pB != NULL)
            {
                pB->pNext = pnn;
                pnn->pNext = pTrav;
            }
            else //deeh bd5olha lw el number ely hd5lha a2l mn awl wahda f el mfeood hey ely tb2a el awl
            {
                pnn->pNext = pTrav;
                pHead = pnn;
            }
        }

    }
    void display()
    {
        cnode* pTrav = pHead;
        while (pTrav != NULL)
        {
            cout << "( " << pTrav->number << " | " << pTrav->character << " )";
            if (pTrav->pNext != NULL) { cout << "->"; }
            pTrav = pTrav->pNext;
        }
        cout << "\n";
    }

};
int checkValue(char currentChar)
{
    if (currentChar == ' ') { return 32; }
    if (currentChar == '!') { return 33; }
    if (currentChar == '"') { return 34; }
    if (currentChar == '#') { return 35; }
    if (currentChar == '$') { return 36; }
    if (currentChar == '%') { return 37; }
    if (currentChar == '&') { return 38; }
    if (currentChar == '\'') {return 39;}
    //if (currentChar == '\'') { return 39; } 
    if (currentChar == '(') { return 40; }
    if (currentChar == ')') { return 41; }
    if (currentChar == '*') { return 42; }
    if (currentChar == '+') { return 43; }
    if (currentChar == ',') { return 44; }
    if (currentChar == '-') { return 45; }
    if (currentChar == '.') { return 46; }
    if (currentChar == '/') { return 47; }
    if (currentChar == '0') { return 48; }
    if (currentChar == '1') { return 49; }
    if (currentChar == '2') { return 50; }
    if (currentChar == '3') { return 51; }
    if (currentChar == '4') { return 52; }
    if (currentChar == '5') { return 53; }
    if (currentChar == '6') { return 54; }
    if (currentChar == '7') { return 55; }
    if (currentChar == '8') { return 56; }
    if (currentChar == '9') { return 57; }
    if (currentChar == ':') { return 58; }
    if (currentChar == ';') { return 59; }
    if (currentChar == '<') { return 60; }
    if (currentChar == '=') { return 61; }
    if (currentChar == '>') { return 62; }
    if (currentChar == '?') { return 63; }
    if (currentChar == '@') { return 64; }
    if (currentChar == 'A') { return 65; }
    if (currentChar == 'B') { return 66; }
    if (currentChar == 'C') { return 67; }
    if (currentChar == 'D') { return 68; }
    if (currentChar == 'E') { return 69; }
    if (currentChar == 'F') { return 70; }
    if (currentChar == 'G') { return 71; }
    if (currentChar == 'H') { return 72; }
    if (currentChar == 'I') { return 73; }
    if (currentChar == 'J') { return 74; }
    if (currentChar == 'K') { return 75; }
    if (currentChar == 'L') { return 76; }
    if (currentChar == 'M') { return 77; }
    if (currentChar == 'N') { return 78; }
    if (currentChar == 'O') { return 79; }
    if (currentChar == 'P') { return 80; }
    if (currentChar == 'Q') { return 81; }
    if (currentChar == 'R') { return 82; }
    if (currentChar == 'S') { return 83; }
    if (currentChar == 'T') { return 84; }
    if (currentChar == 'U') { return 85; }
    if (currentChar == 'V') { return 86; }
    if (currentChar == 'W') { return 87; }
    if (currentChar == 'X') { return 88; }
    if (currentChar == 'Y') { return 89; }
    if (currentChar == 'Z') { return 90; }
    if (currentChar == '[') { return 91; }
    if (currentChar == '\\') { return 92; }
    if (currentChar == ']') { return 93; }
    if (currentChar == '^') { return 94; }
    if (currentChar == '_') { return 95; }
    if (currentChar == '`') { return 96; }
    if (currentChar == 'a') { return 97; }
    if (currentChar == 'b') { return 98; }
    if (currentChar == 'c') { return 99; }
    if (currentChar == 'd') { return 100; }
    if (currentChar == 'e') { return 101; }
    if (currentChar == 'f') { return 102; }
    if (currentChar == 'g') { return 103; }
    if (currentChar == 'h') { return 104; }
    if (currentChar == 'i') { return 105; }
    if (currentChar == 'j') { return 106; }
    if (currentChar == 'k') { return 107; }
    if (currentChar == 'l') { return 108; }
    if (currentChar == 'm') { return 109; }
    if (currentChar == 'n') { return 110; }
    if (currentChar == 'o') { return 111; }
    if (currentChar == 'p') { return 112; }
    if (currentChar == 'q') { return 113; }
    if (currentChar == 'r') { return 114; }
    if (currentChar == 's') { return 115; }
    if (currentChar == 't') { return 116; }
    if (currentChar == 'u') { return 117; }
    if (currentChar == 'v') { return 118; }
    if (currentChar == 'w') { return 119; }
    if (currentChar == 'x') { return 120; }
    if (currentChar == 'y') { return 121; }
    if (currentChar == 'z') { return 122; }
    if (currentChar == '{') { return 123; }
    if (currentChar == '|') { return 124; }
    if (currentChar == '}') { return 125; }
    if (currentChar == '~') { return 126; }
    // return 300;
     // else { cout << "character " << currentChar << " not found\n"; }
}
char returnvalue(int i)
{
    if (i == 32) { return ' '; }
    if (i == 33) { return '!'; }
    if (i == 34) { return '"'; }
    if (i == 35) { return '#'; }
    if (i == 36) { return '$'; }
    if (i == 37) { return '%'; }
    if (i == 38) { return '&'; }
    if (i == 39) { return '\''; }
    if (i == 40) { return '('; }
    if (i == 41) { return ')'; }
    if (i == 42) { return '*'; }
    if (i == 43) { return '+'; }
    if (i == 44) { return ','; }
    if (i == 45) { return '-'; }
    if (i == 46) { return '.'; }
    if (i == 47) { return '/'; }
    if (i == 48) { return '0'; }
    if (i == 49) { return '1'; }
    if (i == 50) { return '2'; }
    if (i == 51) { return '3'; }
    if (i == 52) { return '4'; }
    if (i == 53) { return '5'; }
    if (i == 54) { return '6'; }
    if (i == 55) { return '7'; }
    if (i == 56) { return '8'; }
    if (i == 57) { return '9'; }
    if (i == 58) { return ':'; }
    if (i == 59) { return ';'; }
    if (i == 60) { return '<'; }
    if (i == 61) { return '='; }
    if (i == 62) { return '>'; }
    if (i == 63) { return '?'; }
    if (i == 64) { return '@'; }
    if (i == 65) { return 'A'; }
    if (i == 66) { return 'B'; }
    if (i == 67) { return 'C'; }
    if (i == 68) { return 'D'; }
    if (i == 69) { return 'E'; }
    if (i == 70) { return 'F'; }
    if (i == 71) { return 'G'; }
    if (i == 72) { return 'H'; }
    if (i == 73) { return 'I'; }
    if (i == 74) { return 'J'; }
    if (i == 75) { return 'K'; }
    if (i == 76) { return 'L'; }
    if (i == 77) { return 'M'; }
    if (i == 78) { return 'N'; }
    if (i == 79) { return 'O'; }
    if (i == 80) { return 'P'; }
    if (i == 81) { return 'Q'; }
    if (i == 82) { return 'R'; }
    if (i == 83) { return 'S'; }
    if (i == 84) { return 'T'; }
    if (i == 85) { return 'U'; }
    if (i == 86) { return 'V'; }
    if (i == 87) { return 'W'; }
    if (i == 88) { return 'X'; }
    if (i == 89) { return 'Y'; }
    if (i == 90) { return 'Z'; }
    if (i == 91) { return '['; }
    if (i == 92) { return '\\'; }
    if (i == 93) { return ']'; }
    if (i == 94) { return '^'; }
    if (i == 95) { return '_'; }
    if (i == 96) { return '`'; }
    if (i == 97) { return 'a'; }
    if (i == 98) { return 'b'; }
    if (i == 99) { return 'c'; }
    if (i == 100) { return 'd'; }
    if (i == 101) { return 'e'; }
    if (i == 102) { return 'f'; }
    if (i == 103) { return 'g'; }
    if (i == 104) { return 'h'; }
    if (i == 105) { return 'i'; }
    if (i == 106) { return 'j'; }
    if (i == 107) { return 'k'; }
    if (i == 108) { return 'l'; }
    if (i == 109) { return 'm'; }
    if (i == 110) { return 'n'; }
    if (i == 111) { return 'o'; }
    if (i == 112) { return 'p'; }
    if (i == 113) { return 'q'; }
    if (i == 114) { return 'r'; }
    if (i == 115) { return 's'; }
    if (i == 116) { return 't'; }
    if (i == 117) { return 'u'; }
    if (i == 118) { return 'v'; }
    if (i == 119) { return 'w'; }
    if (i == 120) { return 'x'; }
    if (i == 121) { return 'y'; }
    if (i == 122) { return 'z'; }
    if (i == 123) { return '{'; }
    if (i == 124) { return '|'; }
    if (i == 125) { return '}'; }
    if (i == 126) { return '~'; }
}
void creatingbits(cnode* root, char flag, string oldbits)
{
    //1
    if (root == NULL) { return; }
    //2
    if (flag == 'L') { root->bits = oldbits += '0'; }
    if (flag == 'R') { root->bits = oldbits += '1'; }
    //3
    creatingbits(root->pdown1, 'L', root->bits);
    //4
    creatingbits(root->pdown2, 'R', root->bits);
}
void printTree(cnode* root)
{
    //1
    if (root == NULL) { return; }
    //2
    if (root->pdown1 == NULL && root->pdown2 == NULL)
    {
        cout << "( " << root->number << " | " << root->character << " ) " << "\n";
    }
    //3
    printTree(root->pdown1);
    //4
    printTree(root->pdown2);
}
void printCharactersBits(cnode* root)
{
    //1
    if (root == NULL) { return; }
    //2
    if (root->pdown1 == NULL && root->pdown2 == NULL)
    {
        cout << "( " << root->number << " | " << root->character << " ) " << " code: " << root->bits << "\n";
    }
    //3
    printCharactersBits(root->pdown1);
    //4
    printCharactersBits(root->pdown2);
}
void create_list(cnode* root, CSList& l)
{
    //1
    if (root == NULL) { return; }
    //2
    if (root->pdown1 == NULL && root->pdown2 == NULL)
    {
        l.attatch(root);
    }
    //3
    create_list(root->pdown1, l);
    //4
    create_list(root->pdown2, l);
}
int main()
{
    ////phase1////////////////////////////////////////////////////////////////////
    ifstream HoffmanVsMon3em; 
    ofstream readFile("C:/Users/abdel/OneDrive/Desktop/HoffmanVsMon3em/Read.txt");
    cnode* pnn;
    CSList l;
    string message;
    cout << "Enter a message: \n";
    getline(cin, message); int ctttttt = 0;
    for (int i = 0; i < message.length(); i++) {ctttttt++;}
    cout << "\nTotal Bytes= " << ctttttt<<"\n";
    int ct[128] = { 0 };
    for (int i = 0; i < message.length(); ++i)
    {
        char currentChar = message[i];
        int a = checkValue(currentChar);
        ct[a]++;
    }
    for (int i = 32; i < 127; i++)
    {
        if (ct[i] > 0)
        {
            char b = returnvalue(i);
            pnn = new cnode;
            pnn->number = ct[i];
            pnn->character = b;
            pnn->pNext = NULL;
            pnn->pdown1 = NULL;
            pnn->pdown2 = NULL;
            pnn->bits = "";
            l.Insert(pnn);
            // cout << "The number of \""<<b<<"\""<<" is : "<<ct[i]<<"\n";
        }
    }
  //  cout << "\n" << "The Sorted Linked List: " << "\n";
  //  l.display();
    //making the tree
    cnode* pt = NULL;
    for (pt = l.pHead; pt->pNext != NULL; pt = l.pHead)
    {
        pnn = new cnode;
        pnn->number = l.pHead->number + l.pHead->pNext->number;
        pnn->character = l.pHead->character + l.pHead->pNext->character;
        pnn->pdown1 = l.pHead;
        pnn->pdown2 = l.pHead->pNext;
        pnn->pNext = NULL;
        pnn->bits = "";
        l.pHead = l.pHead->pNext->pNext;
        pt->pNext->pNext = NULL;
        l.Insert(pnn);
    }
    //puting bits for characters
    creatingbits(l.pHead, 'N', "");
    //print
  //  cout << "\n" << "The leaf of the Tree: " << "\n";
  //  printTree(l.pHead);
    cout << "\n" << "The characters Code: " << "\n";
    printCharactersBits(l.pHead);
    cout << "\n";

    char* msg = new char[message.length() + 1];
    for (int i = 0; i < message.length(); i++)
    {
        msg[i] = message[i];
    }
    CSList l2;
    create_list(l.pHead, l2);
  //  l2.display();
    char monem; int i2 = 0; string code; int ctt = 0; int ibit = 7; char mask = 1;  char mask2 = 0b11111110; 
    int flag = 0; int ctbits = 0;
    for (int i = 0; i < message.length(); i++)
    {//1000 0000
        cnode *ptrav = l2.pHead;
        while (ptrav->character != message[i])
        {
            ptrav = ptrav->pNext;
        }
        code = ptrav->bits; 

        for (int k = 0; k < code.length(); k++)
        {
            monem = msg[i2];
            char R = monem & (mask << ibit);
            if (R != 0)//1
            {
                if (code[k] == '1')//1
                {
                    ctt++;
                }
                if (code[k] == '0') //0
                {
                    msg[i2] = msg[i2] & (mask2 << ibit);
                    ctt++;
                }
                ctbits++;
            }
            else//0
            {
                if (code[k] == '1')//1
                {
                    msg[i2] = msg[i2] | (mask << ibit);
                    ctt++;
                }
                if (code[k] == '0')//0
                {
                    ctt++;
                }
                ctbits++;

            }
            ibit--;
            if (ctt == 8)
            {
                i2++;
                ctt = 0;
            }
            if (ibit == -1)
            {
                ibit = 7;
            }
        }
    }
    if (ibit != 7)
    {
        while (ibit != -1)
        {
            msg[i2] = msg[i2] & (mask2 << ibit);
            ibit--;
        }
        i2++;
    }
    for (int i = i2; i < message.length(); i++)
    {
        msg[i] = 0;
    }
    cout << "\nCompressed:\n " << msg << "\n"<< "\ncount bytes= " << ctbits/8<<"\n";
    //////////////Decompresser////////////////////////////////////////////////////////////
    string msg2 ="";
    ibit = 7; i2 = 0; string code2="";
    for (int i = 0; i < message.length(); i++)
    {
        monem = msg[i];
        for (int k = 7; k > -1; k--)
        {
            cnode* ptrav = l2.pHead;
            char R = monem & (mask << k);
            if (R != 0)//1
            {
                code2 += "1";
                ctbits--;
            }
            else//0
            {
                code2 += "0";
                ctbits--;
            }
            while (ptrav!= NULL)
            {
                if (ptrav->bits == code2)
                {
                    msg2+= ptrav->character;
                    i2++;
                    code2 = "";
                }
                ptrav = ptrav->pNext;
            }
            if (ctbits == 0) { break; }
        }
        if (ctbits == 0) { break; }
    }
    cout << "\nDecompressed: \n"<<msg2;

    delete[] msg;
    cout << "\n\n\n";
    system("pause");
}