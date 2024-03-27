#include <iostream>
#include <cstdio>
#include <windows.h>
using namespace std;

void Install() {
	const char *text =
	"78.157.42.100 runtime.fivem.net\n"
	"50.7.87.85 users.cfx.re\n"
	"78.157.42.100 metrics.fivem.net\n"
	"78.157.42.100 registry-internal.fivem.net\n"
	"78.157.42.100 status.fivem.net\n"
	"78.157.42.100 servers-frontend.fivem.net\n"
	"50.7.87.85 cnl-hb-live.fivem.net\n"
	"50.7.87.85 policy-live.fivem.net\n"
	"78.157.42.100 synapse.fivem.net\n"
	"78.157.42.100 status.cfx.re\n"
	"78.157.42.100 content.cfx.re\n"
	"50.7.87.85 sentry.fivem.net\n"
	"50.7.87.85 lambda.fivem.net\n"
	"78.157.42.100 changelogs-live.fivem.net\n"
	"78.157.42.100 servers-frontend.fivem.net\n"
	"50.7.87.85 cnl-hb-live.fivem.net\n"
	"50.7.87.85 policy-live.fivem.net\n"
	"50.7.87.85 keymaster.fivem.net\n"
	"50.7.87.85 myip.is\n";
	FILE *f;
	f = fopen("C:/Windows/System32/drivers/etc/hosts", "w");
	fprintf(f,text);
	fclose(f);
}



int main() {
    HWND hwnd = GetConsoleWindow();
    SetWindowText(hwnd, "ACE RolePlay FiveM Connector | Visit us at acecommunity.ir");
    system("COLOR A");
    system("cls");
	bool inmenu = true;
	bool text = false;
	while (inmenu == true) {
		int select;
		if (text == false) {
			text = true;
			cout<<"ACE RolePlay FIVEM Connector"<<endl;
			cout<<"1.Connect - Connect To FiveM"<<endl;
			cout<<"2.Disconnect - Disconnet From FiveM"<<endl;
			cout<<"3.Quit -  Exit"<<endl;
		}
		cout<<endl<<"Program Proccess: ";
		cin>>select;
		cout<<endl;
		if (select == 1) {
			SetConsoleCP(437);
			SetConsoleOutputCP(437);
			int bar1 = 177, bar2 = 219;
			
			cout << "\n\n\n\t\t\t\tConnecting...";
			cout << "\n\n\n\t\t\t\t";
			
			for(int i = 0; i < 25; i++)
				cout << (char)bar1;
				
				cout<<"\r";
				cout<<"\t\t\t\t";
				for(int i = 0; i < 25; i++)
				{
					cout << (char)bar2;
					Sleep(150);
				}
			cout<<endl<<"Connecting...";
			Install();
			Sleep(500);
			cout<<endl<<"Done Connected!"<<endl<<endl;
			Sleep(1000);
		} else if (select == 2) {
			SetConsoleCP(437);
			SetConsoleOutputCP(437);
			int bar1 = 177, bar2 = 219;
			
			cout << "\n\n\n\t\t\t\tDisconnecting...";
			cout << "\n\n\n\t\t\t\t";
			
			for(int i = 0; i < 25; i++)
				cout << (char)bar1;
				
				cout<<"\r";
				cout<<"\t\t\t\t";
				for(int i = 0; i < 25; i++)
				{
					cout << (char)bar2;
					Sleep(150);
				}
			cout<<endl<<"Disconneting...";
			remove("C:/Windows/System32/drivers/etc/hosts");
			Sleep(500);
			cout<<endl<<"Done Disconnected!"<<endl<<endl;
			Sleep(1000);
		} else if (select == 3) {
			cout<<endl<<"Exiting...";
			Sleep(1000);
			inmenu = false;
		} else {
			cout<<endl<<"Command Inputed Wrong!"<<endl<<endl;
			Sleep(1000);
		}
		return 0;
}
	}