#include <iostream>

using namespace std;

int StartPPS;
int EndPPS;
int AccelSteps;
int DecelSteps;

double AccelTime;
int Accelpps;
double DecelTime;
int Decelpps;

int PPS;
double Time;

int accel_table[512];
int calc_accel_table[512];
int decel_table[512];
int calc_decel_table[512];

int main()
{
	cout << "StartPPS   : ";
	cin >> StartPPS;
	cout << "EndPPS     : ";
	cin >> EndPPS;
	cout << "AccelSteps : ";
	cin >> AccelSteps;
    cout << "DecelSteps : ";
    cin >> DecelSteps;

	AccelTime = (AccelSteps * 1000) / double((StartPPS + EndPPS) / 2);	// same in both side
	Accelpps = (EndPPS - StartPPS) / (AccelTime * 0.001);		// same in both side
	cout << "AccelTime  : " << AccelTime << endl;
	cout << "Accelpps   : " << Accelpps << endl;

	DecelTime = (DecelSteps * 1000) / double((StartPPS + EndPPS) / 2);	// same in both side
	Decelpps = (StartPPS - EndPPS) / (DecelTime * 0.001);		// same in both side
	cout << "DecelTime  : " << DecelTime << endl;
	cout << "Decelpps   : " << Decelpps << endl;

	printf("\r\n|Step|Time   |PPS |");

	for (int i = 0; i < AccelSteps; i++)
	{
		if (i == 0)
		{
			PPS = StartPPS;
			Time = 1 / double(StartPPS);
			accel_table[i] = PPS;
			calc_accel_table[i] = 48000000 / 8 / 1 / accel_table[i];
			printf("\r\n|%4d|%.5f|%4d|%5d|", i + 1, Time, accel_table[i], calc_accel_table[i]);
		}
		else
		{
            /*Accel Table*/
            if ((Accelpps * Time) + StartPPS >= EndPPS)
            {
                PPS = EndPPS;
            }
            else
            {
                PPS = (Accelpps * Time) + StartPPS;
            }

			if (i == (AccelSteps-1))
			{
				PPS = EndPPS;
			}

			accel_table[i] = PPS;
			calc_accel_table[i] = 48000000 / 8 / 1 / accel_table[i];
			Time += (1 / double(accel_table[i]));
			printf("\r\n|%4d|%.5f|%4d|%5d|", i + 1, Time, accel_table[i], calc_accel_table[i]);
		}
	}
	cout << endl;

    for (int i = 0; i < DecelSteps; i++)
	{
		if (i == 0)
		{
			PPS = EndPPS;
			Time = 1 / double(EndPPS);
			decel_table[i] = PPS;
			calc_decel_table[i] = 48000000 / 8 / 1 / decel_table[i];
			printf("\r\n|%4d|%.5f|%4d|%5d|", i + 1, Time, decel_table[i], calc_decel_table[i]);
		}
		else
		{
            /*Decel Table*/
            if ((Decelpps * Time) + EndPPS <= StartPPS)
            {
                PPS = StartPPS;
            }
            else
            {
                PPS = (Decelpps * Time) + EndPPS;
            }

			if (i == (DecelSteps-1))
			{
				PPS = StartPPS;
			}

			decel_table[i] = PPS;
			calc_decel_table[i] = 48000000 / 8 / 1 / decel_table[i];
			Time += (1 / double(decel_table[i]));
			printf("\r\n|%4d|%.5f|%4d|%5d|", i + 1, Time, decel_table[i], calc_decel_table[i]);
		}
	}
	cout << endl;
    
	return 0;
}
