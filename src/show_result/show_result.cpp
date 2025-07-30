#include "show_result.h"
#include <iostream>
#include <graphics.h>
#include <hello.h>
using std::cout, std::endl;

void ShowResult::drawResult()
{    
  initgraph(1000,1000);
  //Hello my_hello;
  //my_hello.say_hello();
 
  setbkcolor(WHITE);
  cleardevice();

  cout << "draw circles: " << endl;
  setlinecolor(BLACK);
  setlinestyle(PS_SOLID,4);
  circle(500,500,200);
  circle(500,500,400);

  system("pause");
  closegraph(); 
}
