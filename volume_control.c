//‰¹—Ê‚ğ’²ß‚·‚é‚½‚ß‚ÌƒvƒƒOƒ‰ƒ€
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