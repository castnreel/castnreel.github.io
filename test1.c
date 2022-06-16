#pragma config(Motor,  port1,           dtr,           tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port5,           claw,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          dtl,           tmotorVex393_HBridge, openLoop)


task main(){
	 while(1 == 1)
	 {
   motor[port1]=(vexRT[Ch3];
   motor[port10]=(vexRt[Ch2];


   if(vexRT[Btn5U] == 1)       	
		{
			motor[port5] = 127;  		
		}
		else if(vexRT[Btn5D] == 1)  	
		{
			motor[port5] = -127; 		
		}
		else                      		
		{
			motor[port5] = 0;    	
		}


		}

}
