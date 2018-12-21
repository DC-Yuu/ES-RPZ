//音量を調節するためのプログラム
/*#include<>

#define
*/
int volume_control(int);

int volume_control(int button){
	switch(button){
		case '+' :
			volume++;
			break;
		case '-' :
			volume--;
	}
	return volume;
}
