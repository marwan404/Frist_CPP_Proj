#include <iostream>
using namespace std;

enum enBlocks {Block1 = 1, Block2 = 2, Block3 = 3};
enum enBlock1Formulas{Speed = 1, Distance = 2, Time = 3, acceleration = 4, volume =5, };

//nesting points
void ShowBlock1Formulas()
{
	cout << "************************" << endl;
	cout << "        Formulas" << endl;
	cout << "************************" << endl;
	cout << "1: Speed" << endl;
	cout << "2: Distance" << endl;
	cout << "3: Time" << endl;
	cout << "4: Acceleration" << endl;
	cout << "5: Volume" << endl;
	cout << "************************" << endl;
	cout << "What is your formula ";
}
enBlock1Formulas ReadBlock1Formula()
{
	int Formula;
	cin >> Formula;
	cout << endl;
	return (enBlock1Formulas)Formula;
}
void DisplayBlock1FormulaParameters(int formula)
{
	float distance, time, speed, speed2, length, width, hight, volume, acceleration;
	if (formula == enBlock1Formulas::Speed)
	{
		cout << "enter the following:" << endl;
		cout << "Distance: ";
		cin >> distance;
		cout << endl;
		cout << "Time: ";
		cin >> time;
		cout << endl;
		cout << "************************" << endl;
		speed= distance / time;
		cout << "The speed is " << speed << endl;
	}
	else if(formula == enBlock1Formulas::Distance)
	{
		cout << "enter the following:" << endl;
		cout << endl;
		cout << "Speed: ";
		cout << endl;
		cout << "Time: ";
		cin >> time;
		cout << "************************" << endl;
		distance = speed * time;
		cout << "The distance is " << distance << endl;
	}
	else if (formula == enBlock1Formulas::Time)
	{
		cout << "enter the following:" << endl;
		cout << "Distance: ";
		cin >> distance;
		cout << endl;
		cout << "Speed: ";
		cin >> speed;
		cout << endl;
		cout << "************************" << endl;
		time = speed / distance;
		cout << "The time is " << time << endl;
	}
	else if (formula == enBlock1Formulas::acceleration)
	{
		cout << "enter the following:" << endl;
		cout << "Intitial speed: ";
		cin >> speed;
		cout << endl;
		cout << "Final speed: ";
		cin >> speed2;
		cout << endl;
		cout << "time: ";
		cin >> time;
		cout << endl;
		cout << "************************" << endl;
		acceleration = (speed2 - speed) / time;
		cout << "The acceleration is " << acceleration << endl;
	}
	else if (formula == enBlock1Formulas::volume)
	{
		cout << "enter the following:" << endl;
		cout << "Length: ";
		cin >> length;
		cout << endl;
		cout << "Width: ";
		cin >> width;
		cout << endl;
		cout << "Hight: ";
		cin >> hight;
		cout << endl;
		cout << "************************" << endl;
		volume = length*width*hight;
		cout << "The volume is " << volume << endl;
	}
	else
	{
		cout << "invalid" << endl;
	}
}

//main
void ShowBlocksMenue()
{
	cout << "************************" << endl;
	cout << "         Blocks" << endl;
	cout << "************************" << endl;
	cout << "1: Block 1" << endl;
	cout << "2: Block 2" << endl;
	cout << "************************" << endl;
	cout << "Where is your formula ";
}
enBlocks ReadBlockChoice()
{
	int BlockChoice;
	cin >> BlockChoice;
	cout << endl;
	return (enBlocks)BlockChoice;
}
void CheckBlock(int readblock)
{
	if (readblock == enBlocks::Block1)
	{
		ShowBlock1Formulas();
		DisplayBlock1FormulaParameters(ReadBlock1Formula());
	}
	else if(readblock == enBlocks::Block2)
	{
		cout << "not yet"<< endl;
		ShowBlocksMenue();
		CheckBlock(ReadBlockChoice());
	}
}
void renderprogram()
{
	ShowBlocksMenue();
	CheckBlock(ReadBlockChoice());
}

int main()
{
	renderprogram();
}