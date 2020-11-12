#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"
#include "include/substr.h"

int kmain()
{
	clearScreen();
	
	print("It is my first kernel\n");
	while(1)
	{
		print("myOS> ");
		
		string ch = readStr();
		if(strEql(ch,"cmd"))
		{
			print("\nIt is cmd\n");
		}
		else if(strEql(ch,"clear"))
		{
			clearScreen();
		}
		else if(strEql(ch,"shutdown"))
		{
			print("Turning off my OS!\n");
			break;
		}
		else if(strEql(ch,"print"))
		{
			print("\n Give input: ");
			
			string nw=readStr();
			print("\n output: ");
			print(nw);
			print("\n");
		}
		else if (strEql(ch,"sub"))
		{
			print("\n Input:\n");
			ch=readStr();
			print("\n");
			sub(ch);
			
		}
			
		else
		{
			print("\nCommand not found\n");
		}
		
		//print("\n");
	}
}
