void main()
{ 
  TRISC = 0; //Configure PORTC as ouput

  TRISA.RA0=1; // Configure as input pin for negative input of Comparator 1
  TRISA.RA1=1; // Configure as input pin for negative input of Comparator 2
  TRISA.RA2=1; // Configure as input pin for positive input of Comparator 1
  TRISA.RA3=1; // Configure as input pin for positive input of Comparator 2
  TRISA.RA4=0; // Configure as output pin for output of Comparator 1
  TRISA.RA5=0; // Configure as output pin for output of Comparator 2

  CMCON=0x05; // 'Two Common Reference Comparators with Outputs' Mode

  while(1)
  {
    PORTC.F0 = CMCON.C2OUT; // Assigning output of comparator 2 to RC0
    PORTC.F1 = CMCON.C1OUT; // Assigning output of comparator 2 to RC1
    Delay_ms(100);
  }
}
