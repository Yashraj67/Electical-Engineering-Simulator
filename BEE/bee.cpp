#include<iostream>
using namespace std;


int main(){ 
  
    
  /* 1-> ac or dc
    if dc-> options   

 {  1.charging -> Vc = V(1-e^(-t/RC)) ,  take input V,t,R,C

    user will ask for { Vc , time constant = RC , intial max current , It = I(e^(-t/RC)) }

    output -> Vc , time constant = RC , intial max current , It = I(e^(-t/RC))  }
    

 {  2.discharging -> Vc = V(e^(-t/RC)) , take input V,t,R,C
    
    user will ask for { Vc , time constant = RC , intial max current , It = I(e^(-t/RC)) }

    output -> Vc , time constant = RC , intial max current , It = - I(e^(-t/RC))  }
    
    if ac -> options

    //done//
 
 {  1.Avgrage , Rms current  ->  Iavg = 0.637Imax  (Imax = V/R)
    2.Avgrage , Rms voltage  ->  Vavg = 0.637Vmax  (Vmax = IR)
    3.Current Equation     ->  I = Iosin( wt+ @ )
    4.Voltage Equation     ->  V = Vosin( wt+ @ )
    5.Rectangular to polar ->  enter
    6.Polar to Rectangular ->  enter
    7.{ Types of circuit --->
                                                                     input                      input
            1.Purely resistive --> (1)condition wise ( avg power ->(Irms,Vrms) , int power -> (Imax,Vmax,W,t) , power factor = 1 ) 

                                                                                       input                                                      input                     input                       input
            2.Purely inductive --> (1)condition wise ( avg power -> 0 , int power -> (Imax,Vmax,W,t) ,power factor = 0 , inductive reactance -> (W,L) , int current -> (Imax,W,t)  , energy stored -> (L,I)  )                                                              
           
                                                                                       input                                                      input                     input                       input
            3.Purely capacitive --> (1)condition wise ( avg power -> 0 , int power -> (Imax,Vmax,W,t) ,power factor = 0 , capacitive reactance -> (W,L) , int current -> (Imax,W,t)  , energy stored -> (C,V)  ) 
            
            4.RL circuit  -->  (1)Volatage accross resistance & inductance -> ( I,R,Xl ) , (2) total voltage -> [1] , impedance -> (R,Xl) , avg power -> ( @ , V , I ) , @ ->(Xl,R)

            5.RC circuit  -->  (1)Volatage accross resistance & inductance -> ( I,R,Xc ) , (2) total voltage -> [1] , impedance -> (R,Xc) , avg power -> ( @ , V , I ) , @ ->(Xc,R)
            
            6.RLC circuit -->  (1) Vr = [I,r] , Vl = [I,Xl] , Vc = [I,Xc] , @ = [] 
          
    

    }

 }

  */



   
    return 0;
}