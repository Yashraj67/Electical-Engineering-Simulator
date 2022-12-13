#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

class DC
{
protected:
    float voltage, time, resistance, capacitance, current;
    float e = 2.72;

public:
    void Inst_Voltage(string a)
    {
        cout << "Enter Maximum Voltage(V) :  " << endl;
        cin >> voltage;
        cout << "Enter time period(sec) : " << endl;
        cin >> time;
        cout << "Enter Resistance(ohm) : " << endl;
        cin >> resistance;
        cout << "Enter Capacitance(F) : " << endl;
        cin >> capacitance;
        cout << endl;
        cout << "Instanteneous Voltage = ";

        if (a == "charging" || a == "Charging")
        {
            cout << (voltage * (1 - powf(e, (-time / (resistance * capacitance))))) << endl;
        }
        if (a == "discharging" || a == "Discharging")
        {
            cout << (voltage * (powf(e, (-time / (resistance * capacitance))))) << endl;
        }
    }
    void time_const(string a)
    {
        cout << "Enter Resistance(ohm) : " << endl;
        cin >> resistance;
        cout << "Enter Capacitance(F) : " << endl;
        cin >> capacitance;
        cout << endl;
        cout << "Time Constant = ";
        cout << resistance * capacitance << endl;
    }
    void intitial_Imax(string a)
    {
        cout << "Enter Capacitance(F) : " << endl;
        cin >> capacitance;
        cout << "Enter Resistance(ohm) : " << endl;
        cin >> resistance;
        cout << endl;
        cout << "Initial max current = ";
        cout << (voltage / resistance) << endl;
    }
    void inst_current(string a)
    {
        cout << "Enter Maximum Current(Amp) :  " << endl;
        cin >> current;
        cout << "Enter time period(sec) : " << endl;
        cin >> time;
        cout << "Enter Resistance(ohm) : " << endl;
        cin >> resistance;
        cout << "Enter Capacitance(F) : " << endl;
        cin >> capacitance;
        cout << endl;
        cout << "Instanteneous current = ";

        if (a == "charging" || a == "Charging")
        {
            cout << (current * (1 - powf(e, (-time / (resistance * capacitance))))) << endl;
        }
        if (a == "discharging" || a == "Discharging")
        {
            cout << (current * (-powf(e, (-time / (resistance * capacitance))))) << endl;
        }
    }
};

class Types
{
private:
    float z, Irms, Vrms, avg_pow, Xl, Xc, L, V_capacitor, V_inductor, currentT, voltageT, resistanceT, capacitanceT, phi1, time, max_voltageT, w1;

public:
    void sub_type(int a);
    void sub_circuit(int k);
    void purely_resistive()
    {
        sub_type(1);
    }
    void purely_inductive()
    {
        sub_type(2);
    }
    void purely_capacitive()
    {
        sub_type(3);
    }
    void RL()
    {
        sub_circuit(1);
    }
    void RC()
    {
        sub_circuit(2);
    }
    void RLC()
    {
        sub_circuit(3);
    }
};

class AC : public DC, public Types
{
protected:
    float max_current, max_voltage, w, phi, cons, angle, real, img, time1;
    int select1;

public:
    void avg_rms_current()
    {
        cout << "Enter Maximum Current(Amp) : " << endl;
        cin >> max_current;
        cout << "Average Current = " << (0.637) * (max_current) << endl;
        cout << "RMS Current = " << (0.707) * (max_current) << endl;
    }
    void avg_rms_voltage()
    {
        cout << "Enter Maximum Voltage(Amp) : " << endl;
        cin >> max_voltage;
        cout << "Average Voltage = " << (0.637) * (max_voltage) << endl;
        cout << "RMS Voltage = " << (0.707) * (max_voltage) << endl;
    }
    void inst_current()
    {
        cout << "Enter Maximum Current(Amp) : " << endl;
        cin >> max_current;
        cout << "Enter Angular Frequency(rad/sec) : " << endl;
        cin >> w;
        cout << "Enter Time Period(sec) : " << endl;
        cin >> time1;
        cout << "Enter Phase Difference(rad) : " << endl;
        cin >> phi;

        cout << "Instanteneous Current = " << (max_current * sin(((w * time1) + ((3.14 / 180) * phi)))) << endl;
    }
    void inst_voltage()
    {
        cout << "Enter Maximum Voltage(Amp) : " << endl;
        cin >> max_voltage;
        cout << "Enter Angular Frequency(rad/sec) : " << endl;
        cin >> w;
        cout << "Enter Time Period(sec) : " << endl;
        cin >> time1;

        cout << "Enter Phase Difference(rad) : " << endl;
        cin >> phi;

        cout << "Instanteneous Voltage = " << (max_voltage * sin(((w * time1) + ((3.14 / 180) * phi)))) << endl;
    }
    void polar_rec()
    {
        cout << "Enter Magnitude : " << endl;
        cin >> cons;
        cout << "Enter Angle : " << endl;
        cin >> angle;
        cout << "Rectangular form : " << (cons * cos(angle)) << " + "
             << "( " << (cons * sin(angle)) << "i"
             << " )" << endl;
    }
    void rec_polar()
    {
        cout << "Enter real part : " << endl;
        cin >> real;
        cout << "Enter imaginary : " << endl;
        cin >> img;
        cout << "Polar form : " << sqrtf(powf(real, 2) + powf(img, 2)) << " angle " << (57.30 * atanf((img / real))) << endl;
    }
    void Type_select()
    {   string tell = "yes";

        while(tell=="yes"){
        cout << endl;
        cout << "Choose the type of circuit : \n "
             << "1. Purely resistive  - Press 1\n"
             << "2. Purely inductive  - Press 2\n"
             << "3. Purely capacitive - Press 3\n"
             << "4. RL circuit        - Press 4\n"
             << "5. RC circuit        - Press 5\n"
             << "6. RLC circuit       - Press 6\n"
             << endl;

        cout << "Enter : ";
        cin >> select1;
        cout << endl;
        Types circuit;
        if (select1 == 1)
        {
            circuit.purely_resistive();
        }
        else if (select1 == 2)
        {
            circuit.purely_inductive();
        }
        else if (select1 == 3)
        {
            circuit.purely_capacitive();
        }
        else if (select1 == 4)
        {
            circuit.RL();
        }
        else if (select1 == 5)
        {
            circuit.RC();
        }
        else if (select1 == 6)
        {
            circuit.RLC();
        }
        else
        {
            cout << "wrong input!" << endl;
        }
         cout<<endl;
         cout<<"Do you have more questions about Types? : ";
         cin>>tell;
    }


    }
};
   

void Types ::sub_circuit(int k)
{
  
    cout << "choose your subtopic :\n"
         << "-> Voltage accross resistance  - Press 1\n";
    if (k == 1 || k == 3)
    {
        cout << "-> Volatage accross inductor   - Press 2\n";
    }
    if (k == 2 || k == 3)
    {
        cout << "-> Volatage accross capacitor  - Press 3\n";
    }
    cout << "-> Total voltage               - Press 4\n"
         << "-> Average power               - Press 5\n"
         << "-> Phase angle                 - Press 6\n";
    if (k == 3)
    {
        cout << "-> Resonant frequency          - Press 7\n ";
    }
    cout << endl;

    cout << "Enter : ";
    int select2;
    cin >> select2;


         switch (select2)
         {
     
         case 1:
             cout << "Enter Current : ";
             cin >> currentT;
             cout << "Enter resistance : ";
             cin >> resistanceT;
             cout << "Volatage accross resistance = " << (currentT * resistanceT) << endl;
             break;
     
         case 2:
             cout << "Enter current : ";
             cin >> currentT;
             cout << "Enter inductive reactance : ";
             cin >> Xl;
             cout << "Voltage accross inductor = " << (currentT * Xl) << endl;
             break;
     
         case 3:
             cout << "Enter Current : ";
             cin >> currentT;
             cout << "Enter Capacitive reactance : ";
             cin >> Xc;
             cout << "Voltage accross capacitor = " << (currentT * Xc) << endl;
             break;
     
         case 4:
             cout << "Enter Voltage accross resistor : ";
             cin >> voltageT;
             if (k == 1 || k == 3)
             {
                 cout << "Enter voltage accross inductor : ";
                 cin >> V_inductor;
             }
             else if (k == 2 || k == 3)
             {
                 cout << "Enter voltage accross capacitor : ";
                cin >> V_capacitor;
             }
             if (k == 1)
                 cout << "Total Volatge Accross RL circuit = " << sqrtf(powf(voltageT, 2) + powf(V_inductor, 2)) << endl;
             if (k == 2)
                 cout << "Total Volatge Accross RC circuit = " << sqrtf(powf(voltageT, 2) + powf(V_capacitor, 2)) << endl;
             if (k == 3)
                 cout << "Total Volatge Accross RLC circuit = " << sqrtf(powf(voltageT, 2) + powf((V_capacitor - V_inductor), 2)) << endl;
             break;
     
         case 5:
             cout << "Enter Vrms : ";
             cin >> Vrms;
             cout << "Enter Irms : ";
             cin >> Irms;
             cout << "Enter phase difference : ";
             cin >> phi1;
             cout << "Average power of circuit = " << ((Vrms * Irms) * cosf(phi1)) << endl;
             break;
     
         case 6:
             Xl = 0, Xc = 0;
             cout << "Enter resistance : ";
             cin >> resistanceT;
             if (k == 1 || k == 3)
             {
                 cout << "Enter inductive reactance : ";
                 cin >> Xl;
             }
             if (k == 2 || k == 3)
             {
                 cout << "Enter capacitive reactance : ";
                 cin >> Xc;
             }
             cout << "Phase angle is = " << atanf((Xl - Xc) / resistanceT) << endl;
             break;
     
         case 7:
             cout << "Enter capacitance : ";
             cin >> capacitanceT;
             cout << "Enter inductance : ";
             cin >> L;
             cout << "Resonant frequency is = " << (0.1592 / sqrtf(L * capacitanceT)) << endl;
             break;
         default:
             cout << "wrong input!" << endl;
         }

}

void Types ::sub_type(int a)
{
    cout << "Choose sub question :\n"
         << "1. Maximum current       - press 1\n"
         << "2. Instanteneous current - press 2\n"
         << "3. Average power         - press 3\n"
         << "4. Instanteneous power   - press 4\n"
         << "5. Power factor          - press 5\n";
    int select1;
    cout << "Enter : ";
    cin >> select1;

    switch (select1)
    {
    case 1:
        cout << "Enter max voltage : ";
        cin >> max_voltageT;
        cout << "Enter resistance / inductive reactance / capacitive reactance : ";
        cin >> resistanceT;
        cout << "Maximum current = " << (max_voltageT / resistanceT) << endl;
        break;

    case 2:
        cout << "Enter max current : ";
        cin >> currentT;
        cout << "Enter angular frequency : ";
        cin >> w1;
        cout << "Enter time period : ";
        cin >> time;
        if (a == 1)
            cout << "Instanteneous current = " << (currentT * sinf(w1 * time)) << endl;
        if (a == 2)
            cout << "Instanteneous current = " << (currentT * sinf(w1 * time - 1.571))  << endl;
        if (a == 3)
            cout << "Instanteneous current = " << (currentT * sinf(w1 * time + 1.571)) << endl;
        break;

    case 3:
        if (a == 1)
        {
            cout << "Enter Vrms : ";
            cin >> Vrms;
            cout << "Enter Irms : ";
            cin >> Irms;
            cout << "Average power = " << (Vrms * Irms) << endl;
        }
        if (a == 2 || a == 3)
        {
            cout << "Average power = 0" << endl;
        }
        break;

    case 4:
        cout << "Enter Irms  : ";
        cin >> Irms;
        cout << "Enter Vrms : ";
        cin >> Vrms;
        cout << "Enter angular frequency : ";
        cin >> w1;
        cout << "Enter time period : ";
        cin >> time;
        if (a == 1)
        {
            cout << "Instanteneous Power = " << ((Vrms * Irms) * (cosf(w1 * time))) << endl;
        }
        if (a == 2)
        {
            cout << "Instanteneous Power = " << ((Vrms * Irms) * (cosf(w1 * time - 1.571))) << endl;
        }
        if (a == 3)
        {
            cout << "Instanteneous Power = " << ((Vrms * Irms) * (cosf(w1 * time + 1.571))) << endl;
        }
        break;
    case 5:
        if (a == 1)
            cout << "Power Factor = 1" << endl;
        if (a == 2 || a == 3)
            cout << "Power factor = 0" << endl;
        break;

    default:
        cout << "Wrong input!" << endl;
        break;
    }
}

void in_DC_data(string c)
{
    int press;
    DC a;
    cout << " Choose your Question :" << endl
         << " 1. Instantaneous Voltage - Press 1 " << endl
         << " 2. Time Constant         - Press 2 " << endl
         << " 3. Intial max current    - Press 3 " << endl
         << " 4. Instanteneous Current - Press 4 " << endl
         << endl;
    cout << "Enter : ";
    cout << endl;
    cin >> press;
    if (press == 1)
    {
        a.Inst_Voltage(c);
    }
    else if (press == 2)
    {
        a.time_const(c);
    }
    else if (press == 3)
    {
        a.intitial_Imax(c);
    }
    else if (press == 4)
    {
        a.inst_current(c);
    }
    else
    {
        cout << "wrong input!" << endl;
    }
}

void re_DC(string name)
{
    if (name == "DC" || name == "dc")
    {
        cout << "Choose your subtopic ( Charging or Discharging ) : ";
        string sub_topic;

        cin >> sub_topic;

        if (sub_topic == "Charging" || sub_topic == "charging")
        {
            in_DC_data(sub_topic);
        }
        if (sub_topic == "Discharging" || sub_topic == "discharging")
        {
            in_DC_data(sub_topic);
        }
        
    }
    else
    {
        cout << "wrong input!" << endl;
    }
}

void in_AC_data();
void re_AC(string name)
{
    if (name == "AC" || name == "ac")
    {
        in_AC_data();
    }
    else
    {
        cout << "wrong input!" << endl;
    }
}

void in_AC_data()
{
    int press;
    AC a;
    cout << "Choose your question : \n"
         << "1. Average , Rms current  - Press 1\n"
         << "2. Average , Rms voltage  - Press 2\n"
         << "3. Instanteneous current  - Press 3\n"
         << "4. Instanteneous voltage  - Press 4\n"
         << "5. Rectangular to Polar   - Press 5\n"
         << "6. Polar to Rectangular   - Press 6\n"
         << "7. Types of circuit       - Press 7\n"
         << endl;
    cout << "Enter : ";
    cin >> press;

    if (press == 1)
    {
        a.avg_rms_current();
    }
    else if (press == 2)
    {
        a.avg_rms_voltage();
    }
    else if (press == 3)
    {
        a.inst_current();
    }
    else if (press == 4)
    {
        a.inst_voltage();
    }
    else if (press == 5)
    {
        a.rec_polar();
    }
    else if (press == 6)
    {
        a.polar_rec();
    }
    else if (press == 7)
    {
        a.Type_select();
    }
    else
    {
        cout << "wrong input!" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    
    string name;
    string note = "yes";
    cout << endl;
    cout << "<<< Welcome to AC-DC Circuit Assistant >>> " << endl
         << endl
         << " Which circuit do you want to explore ? " << endl
         << endl
         << " Enter your choice ( AC or DC ) : ";
    cin >> name;
    cout << endl;
    while (note == "yes")
    {   if((name == "DC" || name == "dc")){
        re_DC(name);
        cout<<endl;
        cout << "Do you have more questions about DC ? : ";
        cin >> note;
        cout << endl;
        }
        if((name == "AC" || name == "ac")){
            re_AC(name);
        cout<<endl;
        cout << "Do you have more questions about AC ? : ";
        cin >> note;
        cout << endl;
        }
    }
    if (note == "No" || note == "no")
    {
        cout << "Thanks!!" << endl;
    }
    else
    {
        cout << "wrong input!" << endl;
    }

    return 0;
    
}