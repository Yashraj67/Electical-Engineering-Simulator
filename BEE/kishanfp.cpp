#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;
class Circuits {
    public :
    int s,rechoice,choice;
    double r,l,c,i,f,xl,xc,tz,z,v,cf,sf;
    double pavg,pactive, preactive, papparent;

    Circuits () {
         cout << "\t  AC CIRCUITS\n\n";
    }


void mainheadings () {
    system("Color 07");
    cout << "Press 1 for purely Resistive circuit\n";
    cout << "Press 2 for purely Inductive circuit\n";
    cout << "Press 3 for purely Capacitive circuit\n";
    cout << "Press 4 for series R-L circuit\n";
    cout << "Press 5 for series R-C circuit\n";
    cout << "Press 6 for series R-L-C circuit\n";
    cout << "\nEnter your Choice :";
    label :
    cin >> choice;
      if(choice==1){
    pResistive ();
 }
 else if(choice==2){
    pInductive ();
 }
 else if(choice==3){
    pCapacitive ();
 }
 else if(choice==4){
    seriesRL ();
 }

 else if(choice==5){
    seriesRC ();
 }

 else if(choice==6){
    seriesRLC ();
 }
    else {
        cout << "Invalid Choice, Please Re-Enter Correct choice only";
       goto label;
    }
}
void pResistive () {
    system ("Color 01");
    cout<<"Enter the value of rms voltage in volts:";
    cin>>v;
    cout<<"\nEnter the value of rms current in amperes:";
    cin>>i;
    r=v/i;
    z=r;
    pavg=v*i;
    label1:
    cout << "\nPress 1 if you want to know Impendence of the given Circuit\n";
    cout << "Press 2 if you want to find Avg Power generated from the given Circuit\n";
    cout << "Press 3 if you want to know Power factor of given circuit\n";
    label11 :
    cin >> s;
    if(s==1){
    cout<<"The Impendence of the circuit is : "<<r << " Ohm";
}
    else if (s==2){
    cout << "The average Power generated from the given circuit is: " << pavg << " Watt";
    }
    else if (s==3){
        cout << "Power factor of given circuit is : 1";
    }
    else {
        cout << "Invalid Choice, Please enter correct choice:";
        goto label11;
    }
    cout << "\n\nPress 1 to Continue\n";
    cout << "Press 2 for Main Menu\n";
    cout << "Press 3 to Exit\n";
    label111:
    cin >>  rechoice;
        if (rechoice==1){
            goto label1;
        }
        else if (rechoice==2){
            mainheadings ();
        }
        else if(rechoice ==3){
            cout << "THANK YOU";
        }
        else {
            cout << "Invalid Choice, Please enter correct choice:";
            goto label111;
        }
}

void pInductive () {
    system("Color 02");
    cout<<"Enter the value of Inductance in henry:";
    cin>>l;
    cout<<"Enter the value of frequency in hertz:";
    cin>>f;
    xl=(2*22*f*l)/7;
    label2:
    cout << "\nPress 1 if you want to know Impendence of the given Circuit\n";
    cout << "Press 2 if you want to find Avg Power generated from the given Circuit\n";
    cout << "Press 3 if you want to know Power factor of given circuit\n";
    label22 :
    cin >> s;
    if(s==1){
    cout<<"The Impendence of the circuit is: "<<xl << " Ohm";
}
    else if (s==2){
    cout << "The average power generated from the given circuit is: 0 Watt";
    }
    else if (s==3){
        cout << "Power factor of given circuit is : 0";
    }
    else {
        cout << "Invalid Choice, Please enter correct choice:";
        goto label22;
    }
    cout << "\n\nPress 1 to Continue\n";
    cout << "Press 2 for Main Menu\n";
    cout << "Press 3 to Exit\n";
    label222 :
    cin >>  rechoice;
        if (rechoice==1){
            goto label2;
        }
        else if (rechoice==2){
            mainheadings ();
        }
        else if(rechoice ==3){
            cout << "THANK YOU";
        }
        else {
            cout << "Invalid Choice, Please enter correct choice:";
            goto label222;
        }

}

void pCapacitive () {
    system("Color 03");
    cout<<"Enter the value of capacitance in micro farad:";
    cin>>c;
    cout<<"Enter the value of frequency in hertz:";
    cin>>f;
    xc=7/(2*22*f*c*pow(10,-6));
     label3:
    cout << "\nPress 1 if you want to know Impendence of the given Circuit\n";
    cout << "Press 2 if you want to find Avg Power generated from the given Circuit\n";
    cout << "Press 3 if you want to know Power factor of given circuit\n";
    label33 :
    cin >> s;

    if(s==1){
    cout<<"The Impendence of the circuit is: "<<xc << " Ohm";
}
    else if (s==2){
    cout << "The average power generated from the given circuit is: 0 Watt";
    }
    else if (s==3){
        cout << "Power factor of given circuit is : 0";
    }
    else {
        cout << "Invalid Choice, Please Re-Enter Correct choice only";
        goto label33 ;
    }
    cout << "\n\nPress 1 to Continue\n";
    cout << "Press 2 for Main Menu\n";
    cout << "Press 3 to Exit\n";
    label333 :
    cin >>  rechoice;
        if (rechoice==1){
            goto label3;
        }
        else if (rechoice==2){
            mainheadings ();
        }
        else if(rechoice ==3){
            cout << "THANK YOU";
        }
        else {
            cout << "Invalid Choice, Please Re-Enter Correct choice only";
            goto label333;
        }

}


void seriesRL () {
    system("Color 04");
    cout << "Enter the value of Resistance in Ohm:";
    cin >> r;
    cout << "Enter the value of Inductance in Henry:";
    cin >> l;
    cout << "Enter the value of RMS Current in Ampere flowing through the circuit:";
    cin >> i;
    cout << "Enter the value of Frequency in Hz:";
    cin >> f;
    xl= (2*22*f*l)/7;
    tz= (r*r) + (xl*xl);
    z=sqrt(tz);
    cf= r/z;
    sf=xl/z;
    v = i*z;
    pactive = v*i*cf;
    preactive = v*i*sf;
    papparent = v*i;
    label4:
    cout << "\nPress 1 if you want to know Impendance of the given Circuit\n";
    cout << "Press 2 if you want to find Power generated from the given Circuit\n";
    cout << "Press 3 if you want to know Power factor of given circuit\n";
    label44 :
    cin >> s;
    if (s==1){
        cout << "Impedence of given Circuit is = " << z << " Ohm";
    }
    else if (s==2){
        cout << "--------------------------";
        cout << "\nApparent Power = " << papparent << " Watt";
        cout << "\nActive Power = " << pactive << " Watt";
        cout << "\nReactive Power = " << preactive << " Watt";
        cout << "\n-------------------------";
    }
    else if (s==3){
        cout << "Power factor of given circuit is : " << cf;
    }
    else {
        cout << "Invalid Choice, Please Re-Enter Correct choice only";
        goto label44 ;
    }
    cout << "\n\nPress 1 to Continue\n";
    cout << "Press 2 for Main Menu\n";
    cout << "Press 3 to Exit\n";
    label444 :
    cin >>  rechoice;
        if (rechoice==1){
            goto label4;
        }
        else if (rechoice==2){
            mainheadings ();
        }
        else if(rechoice ==3){
            cout << "THANK YOU";
        }
        else {
            cout << "Invalid Choice, Please Re-Enter Correct choice only";
            goto label444 ;
        }
}


void seriesRC () {
    system("Color 05");
    cout << "Enter the value of Resistance in Ohm:";
    cin >> r;
    cout << "Enter the value of Capacitor in micro Farad:";
    cin >> c;
    cout << "Enter the RMS value of Current in Ampere flowing through the circuit:";
    cin >> i;
    cout << "Enter the value of Frequency in Hz:";
    cin >> f;
    xc = 7/(2*22*f*c*(pow(10,-6)));
    tz= (r*r) + (xc*xc);
    z=sqrt(tz);
    cf= r/z;
    sf= xc/z;
    v = i*z;
    pactive = v*i*cf;
    preactive = v*i*sf;
    papparent = v*i;
    label5 :
    cout << "\nPress 1 if you want to know Impendance of the given Circuit\n";
    cout << "Press 2 if you want to find Power generated from the given Circuit\n";
    cout << "Press 3 if you want to know Power factor of given circuit\n";
    label55 :
    cin >> s;
    if (s==1){
        cout << "Impedance of given Circuit is = " << z << " Ohm";
    }
    else if (s==2){
        cout << "--------------------------";
        cout << "\nApparent Power = " << papparent << " Watt";
        cout << "\nActive Power = " << pactive << " Watt" ;
        cout << "\nReactive Power = " << preactive << " Watt";
        cout << "\n-------------------------";
    }
    else if (s==3){
        cout << "Power factor of given circuit is : " << cf;
    }
    else {
        cout << "Invalid Choice, Please Re-Enter Correct choice only";
        goto label55 ;
    }
    cout << "\n\nPress 1 to Continue\n";
    cout << "Press 2 for Main Menu\n";
    cout << "Press 3 to Exit\n";
    label555 :
    cin >>  rechoice;
        if (rechoice==1){
            goto label5;
        }
        else if (rechoice==2){
            mainheadings ();
        }
        else if(rechoice ==3){
            cout << "THANK YOU";
    }
    else {
        cout << "Invalid Choice, Please Re-Enter Correct choice only";
        goto label555 ;
    }
}

void seriesRLC () {
    system("Color 06");
    cout << "Enter the value of Resistance in Ohm:";
    cin >> r;
    cout << "Enter the value of Inductor in Henry:";
    cin >> l;
    cout << "Enter the value of Capacitor in micro Farad:";
    cin >> c;
    cout << "Enter the RMS value of Current in Ampere flowing through the circuit:";
    cin >> i;
    cout << "Enter the value of Frequency in Hz:";
    cin >> f;
    xl= (2*22*f*l)/7;
    xc = 7/(2*22*f*c*(pow(10,-6)));
    tz= (r*r) + (xc-xl)*(xc-xl);
    z=sqrt(tz);
    cf= r/z;
    if ((xl-xc)> (xc-xl)){
        sf=(xl-xc)/z;
    }
    else {
    sf= (xc-xl)/z;
    }
    v = i*z;
    pactive = v*i*cf;
    preactive = v*i*sf;
    papparent = v*i;
    label6:
    cout << "\nPress 1 if you want to know Impendance of the given Circuit\n";
    cout << "Press 2 if you want to find Power generated from the given Circuit\n";
    cout << "Press 3 if you want to know Power factor of given circuit\n";
    label66 :
    cin >> s;
    if (s==1){
        cout << "Impedence of given Circuit is = " << z << " Ohm";
    }
    else if (s==2){
        cout << "--------------------------";
        cout << "\nApparent Power = " << papparent << " Watt";
        cout << "\nActive Power = " << pactive << " Watt";
        cout << "\nReactive Power = " << preactive << " Watt";
        cout << "\n-------------------------";
    }
    else if (s==3){
        cout << "Power factor of given circuit is : " << cf;
    }
    else {
        cout << "Invalid Choice, Please Re-Enter Correct choice only";
        goto label66;
    }
    cout << "\n\nPress 1 to Continue\n";
    cout << "Press 2 for Main Menu\n";
    cout << "Press 3 to Exit\n";
    label666 :
    cin >>  rechoice;
        if (rechoice==1){
            goto label6;
        }
      else   if (rechoice==2){
            mainheadings ();
        }
        else if(rechoice ==3){
            cout << "THANK YOU";
    }
    else {
        cout << "Invalid Choice, Please Re-Enter Correct choice only";
        goto label666 ;
    }
}
};

int main()
{
  Circuits c1;
  c1.mainheadings();
    return 0;
}