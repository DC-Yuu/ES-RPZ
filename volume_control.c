//���ʂ𒲐߂��邽�߂̃v���O����
#include<>

#define 

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