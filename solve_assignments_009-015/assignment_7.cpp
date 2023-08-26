#include <iostream>
using namespace std;

int num = 100;

int read()
{
  cout << num;
  return 0;
}

int play()
{
  int num = 200;
  read();
  return 0;
}

int main()
{
  int num = 50;
  play();
  return 0;
}