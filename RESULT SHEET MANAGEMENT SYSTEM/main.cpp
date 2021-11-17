//***************************************************************
//                   HEADER FILE USED IN PROJECT
//****************************************************************
#include <iostream>            //for  cin and cout command
#include <iomanip>            //for setwidth command
#include<conio.h>           //for cls and getch command
using namespace std;
int main ()
{

	// INTRODUCTION

	cout<<"\n\n\t\t\tSIBA CAMPUS\n";
	cout<<"================================================================================";
	cout<<"\n\t\t\tRESULT SHEET MANAGEMENT SYSTEM\n";
	cout<<"================================================================================";
	cout<<"\n\n\t\t\t Welcome \n";

	// n is for no. of students and i for loop
	int n,i;
	// varibles for input the CREDIT HOURS
    int ap_ch,pf_ch,eng_ch,cal_ch,ps_ch,ict_ch,sum_ch;
    cout<<"\n====================================================================================";
    cout<<"\n\nEnter the No. of students in class  :: ";
    cin>>n;
    system("CLS");
    //  varibles for input the basic information and marks
    string name[n];
    int rollno[n],ap[n],pf[n],eng[n],cal[n],ps[n],ict[n];
	//varibles for save product of Credit Hours and Grades
   	float pr_ap[n],pr_eng[n],pr_cal[n],pr_pf[n],pr_ps[n],pr_ict[n],sum_pr[n];
   	//varibles for Grades
    string g_ap[n],g_eng[n],g_cal[n],g_pf[n],g_ps[n],g_ict[n];
	//varible for GPA
	float gpa[n];
	//num is for input main menu option
	int num;
	a:
	system("CLS");
		//main menu
	cout<<"\n\n\t\t\tMAIN MENU\n";
	cout<<"\t\t\t\"\"\"\"\"\"\"\"\"\n\n";
	cout<<"\n====================================================================================";
	cout<<"\nNOTE::(firstly press '1' and enter data then Use further options)\n\n";
	cout<<"=> Press '1' to 'Enter Students Data'  \n\n=> Press '2' to 'Modify Student Data'\n\n=> Press '3' to 'Student Result Sheet'\n\n=> Press '4' to 'Class Result Sheet'\n\n=> Press '0' to 'EXIT THE PROGRAM'       :: ";
	cin>>num;
	switch(num)
	{
		case 1:
			{
				system("CLS");

                //inut the CREDIT HOURS
                cout<<"\n\t\t\tENTER THE CREDIT HOURS OF SUBJECTS \n";
                cout<<"================================================================================";
	            cout<<"\nEnter COMPUTER GRAPHICS Credit Hours          ::  ";
            	cin>>ap_ch;
		        cout<<"\nEnter OOP CONCEPT Credit Hours                ::  ";
	            cin>>pf_ch;
		        cout<<"\nEnter English Credit Hours                    ::  ";
		        cin>>eng_ch;
		        cout<<"\nEnter WEB DEVELOPMENT  Credit Hours           ::  ";
	            cin>>cal_ch;
	          	cout<<"\nEnter ADVANCED DATABASE Credit Hours          ::  ";
	           	cin>>ps_ch;
             	cout<<"\nEnter JAVA Credit Hours                       ::  ";
		        cin>>ict_ch;



                // c is count no. of student
                int c=1;
                for(i=0;i<n;i++)
	            {        //take input from user
	            	system("CLS");
		            cout<<"\n\t\tENTER INFORMATION OF STUDENT NO. "<<c;
		            cout<<"\n\t\t-----------------------------------\n";
		            cout<<"\nNOTE::(Don't use space while writing name)\n";
					cout<<"\n\nEnter Name                  ::  ";
		            cin>>name[i];
	            	cout<<"\nEnter Roll no.                ::  ";
             	    cin>>rollno[i];
            		cout<<"\n\t\tENTER MARKS OF STUDENT NO. "<<c;
            		cout<<"\n\t\t----------------------------\n";
            		cout<<"\nEnter COMPUTER GRAPHICS (out of 100)         ::  ";
            		cin>>ap[i];
		            cout<<"\nEnter OOP CONCEPTS marks (out of 100)        ::  ";
		            cin>>pf[i];
		            cout<<"\nEnter English marks (out of 100)             ::  ";
		            cin>>eng[i];
		            cout<<"\nEnter WEB DEVELOPMENT marks  (out of 100)    ::  ";
	            	cin>>cal[i];
	            	cout<<"\nEnter ADVANCED DATABASE   (out of 100)       ::  ";
	            	cin>>ps[i];
            		cout<<"\nEnter  JAVA   (out of 100)                   ::  ";
		            cin>>ict[i];
		            c++;
	            }
	            sum_ch=ap_ch+pf_ch+eng_ch+cal_ch+ps_ch+ict_ch;
            	//calculate the Credit Hours and Grades
            	for(i=0;i<n;i++)
            	{
				    //calculate the Credit Hours and Grades
                 	if(ap[i]>=80)
                    {
            	    	g_ap[i]="A";
            	     	pr_ap[i]=ap_ch*4.0;
                	}
                	else if(ap[i]>=70)
                	{
        	        	g_ap[i]="B";
        	        	pr_ap[i]=ap_ch*3.5;
                	}
                	else if(ap[i]>=60)
                	{
	                	g_ap[i]="C";
                		pr_ap[i]=ap_ch*3.0;
                 	}
                	else if(ap[i]>=50)
                 	{
                		g_ap[i]="D";
 	                	pr_ap[i]=ap_ch*2.5;
                  	}
                  	else
                	{
                		g_ap[i]="F";
	                	pr_ap[i]=ap_ch*0;
                 	}

                 	if(pf[i]>=80)
                	{
                 		g_pf[i]="A";
                		pr_pf[i]=pf_ch*4.0;
                 	}
                	else if(pf[i]>=70)
                	{
                		g_pf[i]="B";
	                	pr_pf[i]=pf_ch*3.5;
                	}
                	else if(pf[i]>=60)
                   	{
                		g_pf[i]="C";
	                	pr_pf[i]=pf_ch*3.0;
                   	}
                 	else if(pf[i]>=50)
                	{
	                	g_pf[i]="D";
                  		pr_pf[i]=pf_ch*2.5;
                	}
                	else
                 	{
                 		g_pf[i]="F";
                		pr_pf[i]=pf_ch*0;
                 	}

                	if(eng[i]>=80)
                	{
                 		g_eng[i]="A";
                		pr_eng[i]=eng_ch*4.0;
                  	}
                	else if(eng[i]>=70)
                  	{
                  		g_eng[i]="B";
	                   	pr_eng[i]=eng_ch*3.5;
                	}
                	else if(eng[i]>=60)
                	{
	                 	g_eng[i]="C";
	                  	pr_eng[i]=eng_ch*3.0;
                	}
                	else if(eng[i]>=50)
                 	{
                		g_eng[i]="D";
	                	pr_eng[i]=eng_ch*2.5;
                	}
                	else
                  	{
                		g_eng[i]="F";
	                	pr_eng[i]=eng_ch*0;
                 	}

                	if(cal[i]>=80)
                	{
	                	g_cal[i]="A";
	                 	pr_cal[i]=cal_ch*4.0;
                 	}
                	else if(cal[i]>=70)
                	{
	                	g_cal[i]="B";
	                 	pr_cal[i]=cal_ch*3.5;
                 	}
                	else if(cal[i]>=60)
                 	{
                		g_cal[i]="C";
                		pr_cal[i]=cal_ch*3.0;
                	}
                	else if(cal[i]>=50)
                	{
                		g_cal[i]="D";
                		pr_cal[i]=cal_ch*2.5;
                 	}
                	else
                 	{
                		g_cal[i]="F";
                 		pr_cal[i]=cal_ch*0;
                 	}

                 	if(ps[i]>=80)
                	{
                 		g_ps[i]="A";
                		pr_ps[i]=ps_ch*4.0;
                	}
                 	else if(ps[i]>=70)
                 	{
                		g_ps[i]="B";
	                	pr_ps[i]=ps_ch*3.5;
                	}
                	else if(ps[i]>=60)
                	{
                   		g_ps[i]="C";
	                	pr_ps[i]=ps_ch*3.0;
                	}
                  	else if(ps[i]>=50)
                 	{
                 		g_ps[i]="D";
                		pr_ps[i]=ps_ch*2.5;
                 	}
                	else
                 	{
                 		g_ps[i]="F";
                		pr_ps[i]=ps_ch*0;
                	}

                 	if(ict[i]>=80)
                  	{
	                 	g_ict[i]="A";
	                 	pr_ict[i]=ict_ch*4.0;
                   	}
                 	else if(ict[i]>=70)
                 	{
	                 	g_ict[i]="B";
                 		pr_ict[i]=ict_ch*3.5;
                  	}
	                else if(ict[i]>=60)
                 	{
	                	g_ict[i]="C";
	                	pr_ict[i]=ict_ch*3.0;
                   	}
                	else if(ict[i]>=50)
                 	{
       	            	g_ict[i]="D";
                		pr_ict[i]=ict_ch*2.5;
                 	}
                	else
                	{
               	    	g_ict[i]="F";
                  		pr_ict[i]=ict_ch*0;
                   	}
                  	sum_pr[i]=pr_ap[i]+pr_eng[i]+pr_cal[i]+pr_pf[i]+pr_ps[i]+pr_ict[i];
                	gpa[i]=sum_pr[i]/sum_ch;

 	            }
 	            system("CLS");
              	cout<<"\n\n\tDATA ENTERED SUCCESSFULLY.......\n";
              	cout<<"\n\tPRESS ANY KEY GOTO \"MAIN MENU\"";
              	getch();
              	goto a;
	    	}
	    case 2:
	        {

	        	int rl,count=0;
		    	system("CLS");
		    	cout<<"\n\nENTER THE ROLL NO, FOR EDIT DATA  ::  ";
		    	cin>>rl;
		    	cout<<"\n====================================================================================";
		    	for(i=0;i<n;i++)
		    	{
		    		if(rollno[i]==rl)
		    		{
		    		cout<<"\n\t\tENTER INFORMATION OF STUDENT  ";
		            cout<<"\n\t\t-----------------------------------\n";
		            cout<<"\nNOTE::(Don't use space while writing name)\n";
					cout<<"\n\nEnter Name                  ::  ";
		            cin>>name[i];
            		cout<<"\n\t\tENTER MARKS OF STUDENT  ";
            		cout<<"\n\t\t----------------------------\n";
            		cout<<"\nEnter COMPUTER GRAPHICS marks (out of 100)         ::  ";
            		cin>>ap[i];
		            cout<<"\nEnter Computer graphics marks (out of 100) ::  ";
		            cin>>pf[i];
		            cout<<"\nEnter ENGLISH marks (out of 100)                  ::  ";
		            cin>>eng[i];
		            cout<<"\nEnter WEB DEVELOPMENT marks  (out of 100)                ::  ";
	            	cin>>cal[i];
	            	cout<<"\nEnter ADVANCED DATABASE marks   (out of 100)              ::  ";
	            	cin>>ps[i];
            		cout<<"\nEnter JAVA marks   (out of 100)                  ::  ";
		            cin>>ict[i];
		            count++;
		            break ;

					}
	            }
	            if(count>0)
	            {

	              //calculate the Credit Hours and Grades
            	  for(i=0;i<n;i++)
                  {
				    //calculate the Credit Hours and Grades
                 	if(ap[i]>=80)
                    {
            	    	g_ap[i]="A";
            	     	pr_ap[i]=ap_ch*4.0;
                	}
                	else if(ap[i]>=70)
                	{
        	        	g_ap[i]="B";
        	        	pr_ap[i]=ap_ch*3.5;
                	}
                	else if(ap[i]>=60)
                	{
	                	g_ap[i]="C";
                		pr_ap[i]=ap_ch*3.0;
                 	}
                	else if(ap[i]>=50)
                 	{
                		g_ap[i]="D";
 	                	pr_ap[i]=ap_ch*2.5;
                  	}
                  	else
                	{
                		g_ap[i]="F";
	                	pr_ap[i]=ap_ch*0;
                 	}

                 	if(pf[i]>=80)
                	{
                 		g_pf[i]="A";
                		pr_pf[i]=pf_ch*4.0;
                 	}
                	else if(pf[i]>=70)
                	{
                		g_pf[i]="B";
	                	pr_pf[i]=pf_ch*3.5;
                	}
                	else if(pf[i]>=60)
                   	{
                		g_pf[i]="C";
	                	pr_pf[i]=pf_ch*3.0;
                   	}
                 	else if(pf[i]>=50)
                	{
	                	g_pf[i]="D";
                  		pr_pf[i]=pf_ch*2.5;
                	}
                	else
                 	{
                 		g_pf[i]="F";
                		pr_pf[i]=pf_ch*0;
                 	}

                	if(eng[i]>=80)
                	{
                 		g_eng[i]="A";
                		pr_eng[i]=eng_ch*4.0;
                  	}
                	else if(eng[i]>=70)
                  	{
                  		g_eng[i]="B";
	                   	pr_eng[i]=eng_ch*3.5;
                	}
                	else if(eng[i]>=60)
                	{
	                 	g_eng[i]="C";
	                  	pr_eng[i]=eng_ch*3.0;
                	}
                	else if(eng[i]>=50)
                 	{
                		g_eng[i]="D";
	                	pr_eng[i]=eng_ch*2.5;
                	}
                	else
                  	{
                		g_eng[i]="F";
	                	pr_eng[i]=eng_ch*0;
                 	}

                	if(cal[i]>=80)
                	{
	                	g_cal[i]="A";
	                 	pr_cal[i]=cal_ch*4.0;
                 	}
                	else if(cal[i]>=70)
                	{
	                	g_cal[i]="B";
	                 	pr_cal[i]=cal_ch*3.5;
                 	}
                	else if(cal[i]>=60)
                 	{
                		g_cal[i]="C";
                		pr_cal[i]=cal_ch*3.0;
                	}
                	else if(cal[i]>=50)
                	{
                		g_cal[i]="D";
                		pr_cal[i]=cal_ch*2.5;
                 	}
                	else
                 	{
                		g_cal[i]="F";
                 		pr_cal[i]=cal_ch*0;
                 	}

                 	if(ps[i]>=80)
                	{
                 		g_ps[i]="A";
                		pr_ps[i]=ps_ch*4.0;
                	}
                 	else if(ps[i]>=70)
                 	{
                		g_ps[i]="B";
	                	pr_ps[i]=ps_ch*3.5;
                	}
                	else if(ps[i]>=60)
                	{
                   		g_ps[i]="C";
	                	pr_ps[i]=ps_ch*3.0;
                	}
                  	else if(ps[i]>=50)
                 	{
                 		g_ps[i]="D";
                		pr_ps[i]=ps_ch*2.5;
                 	}
                	else
                 	{
                 		g_ps[i]="F";
                		pr_ps[i]=ps_ch*0;
                	}
                 	// ict Credit Hours and Grades
                 	if(ict[i]>=80)
                  	{
	                 	g_ict[i]="A";
	                 	pr_ict[i]=ict_ch*4.0;
                   	}
                 	else if(ict[i]>=70)
                 	{
	                 	g_ict[i]="B";
                 		pr_ict[i]=ict_ch*3.5;
                  	}
	                else if(ict[i]>=60)
                 	{
	                	g_ict[i]="C";
	                	pr_ict[i]=ict_ch*3.0;
                   	}
                	else if(ict[i]>=50)
                 	{
       	            	g_ict[i]="D";
                		pr_ict[i]=ict_ch*2.5;
                 	}
                	else
                	{
               	    	g_ict[i]="F";
                  		pr_ict[i]=ict_ch*0;
                   	}
                  	sum_pr[i]=pr_ap[i]+pr_eng[i]+pr_cal[i]+pr_pf[i]+pr_ps[i]+pr_ict[i];
                	gpa[i]=sum_pr[i]/sum_ch;

 	              }
 	                system("CLS");
              	    cout<<"\n\n\tDATA UPDATE SUCCESSFULLY.......\n";
              	    cout<<"\n\tPRESS ANY KEY GOTO \"MAIN MENU\"";
              	    getch();
              	    goto a;
			    }
			    else
			    {
			    	system("CLS");
              	    cout<<"\a\n\n\tROLL NO. IS NOT MATCHED ";
              	    cout<<"\n\n\tPRESS ANY KEY GOTO \"MAIN MENU\"";
              	    getch();
              	    goto a;

				}
			}
		case 3:
		    {
		    	int rl,count=0;
		    	system("CLS");
		    	cout<<"\n\nENTER THE ROLL NO, FOR RESULT  ::  ";
		    	cin>>rl;
		    	for(i=0;i<n;i++)
		    	{
		    		if(rollno[i]==rl)
		    		{
		    			cout<<"\n\nNAME                            :: "<<name[i];
		    			cout<<"\n\nCOMPUTER GRAPHICS Grade          :: "<<g_ap[i];
		    			cout<<"\n\nENGLISH Grade                   :: "<<g_eng[i];
		    			cout<<"\n\nWEB DEVELOPMENT                 :: "<<g_cal[i];
		    			cout<<"\n\nOOP                               :: "<<g_pf[i];
		    			cout<<"\n\nADVANVED DATABASE                 :: "<<g_ps[i];
		    			cout<<"\n\nJAVA                              :: "<<g_ict[i];
		    			cout<<"\n\nGPA                             :: "<<gpa[i];
		    			count++;
		    			break;
					}

				}
				if(count>0)
		    	{
		    	    cout<<"\n\n\tPRESS ANY KEY GOTO \"MAIN MENU\"";
              	    getch();
              	    goto a;
                }
                else
                {
			    	system("CLS");
              	    cout<<"\a\n\n\tROLL NO. IS NOT MATCHED ";
              	    cout<<"\n\n\tPRESS ANY KEY GOTO \"MAIN MENU\"";
              	    getch();
              	    goto a;

				}
			}
		case 4:
		    {
		    	system("CLS");
		    	cout<<"\n\n\t\tALL STUDENTS RESULT \n\n";
   	            cout<<"================================================================\n";
   	            cout<<"R.No    Name      CG   ENG   OOP   WD   AD   JAVA     GPA"<<endl;
  	            cout<<"================================================================\n";
            	for(int i=0;i<n;i++)
            	{
                cout<<rollno[i]<<setw(5)<<"  "<<name[i]<<setw(5)<<g_ap[i]<<setw(6)<<g_eng[i]<<setw(6)<<g_cal[i]<<setw(5)<<g_pf[i]<<setw(5)<<g_ps[i]<<setw(6)<<g_ict[i]<<setw(8)<<" "<<gpa[i]<<endl;
				}

		    	cout<<"\n\n\tPRESS ANY KEY GOTO \"MAIN MENU\"";
              	getch();
              	goto a;

			}
		case 0:
			{
				break ;
			}
		default :
		    {
		        cout<<"\a";
		        system("CLS");
        		goto a;
			}
	}


    return 0;
}
