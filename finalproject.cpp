#include<iostream>
using namespace std;

int change( int cash, int total){
	return cash - total;
}
int main(){
	
retry:
	
cout<<"       # ####### #     # #     # ###  #####     ######  ### ####### #######    #" <<endl;     
cout<<"       # #     # #     # ##    # ### #     #    #     #  #       #       #    # #" <<endl;    
cout<<"       # #     # #     # # #   #  #  #          #     #  #      #       #    #   #" <<endl;   
cout<<"       # #     # ####### #  #  # #    #####     ######   #     #       #    #     #" <<endl;  
cout<<" #     # #     # #     # #   # #           #    #        #    #       #     #######" <<endl;  
cout<<" #     # #     # #     # #    ##     #     #    #        #   #       #      #     #" <<endl; 
cout<<"  #####  ####### #     # #     #      #####     #       ### ####### ####### #     #" <<endl; 
cout<<"\n\n\n";
cout<<"   ___________________________________________________________________________"<<endl;
cout<<"     No.              MENU                                    PRICE"<<endl;
cout<<"     1.               Chichen Bacon Ranch                     P270"<<endl;
cout<<"     2.               Spicy Italian Meatballs                 P280"<<endl;
cout<<"     3.               Texas Heast                             P285"<<endl;
cout<<"     4.               Chicken BBQ                             P295"<<endl;
cout<<"     5.               All the Meats                           P340"<<endl;
cout<<"     6.               Fisherman's Catch                       P350"<<endl;
cout<<"     7.               La Fiesta                               P360"<<endl;
cout<<"   ___________________________________________________________________________"<<endl; 
cout<<"\n\n";
	int order, qty, total, cash;
	char ask;

	int price[7]={270,280,285,295,340,350,360};
	

do{			
	cout<<"Choice your order: ";cin>>order;

	switch(order){
		case 1:
			cout<<"How Many: ";cin>>qty;
			total+=price[0]*qty;
			cout<<"do you want to buy more?(y/n):"; cin>>ask;
			if(ask == 'y'){
			system("cls");
			goto retry;
		}else
			goto end;
				
		case 2:
			cout<<"How Many: ";cin>>qty;
			total+=price[1]*qty;
			cout<<"do you want to buy more?(y/n):"; cin>>ask;
			if(ask == 'y'){
			system("cls");
			goto retry;
		}else
			goto end;
			
		case 3:
			cout<<"How Many: ";cin>>qty;
			total+=price[2]*qty;
			cout<<"do you want to buy more?(y/n):"; cin>>ask;
			if(ask == 'y'){
			system("cls");
			goto retry;
		}else
			goto end;
			
		case 4:
			cout<<"How Many: ";cin>>qty;
			total+=price[3]*qty;
			cout<<"do you want to buy more?(y/n):"; cin>>ask;
			if(ask == 'y'){
			system("cls");
			goto retry;
		}else
			goto end;
			
		case 5:
			cout<<"How Many: ";cin>>qty;
			total+=price[4]*qty;
			cout<<"do you want to buy more?(y/n):"; cin>>ask;
			if(ask == 'y'){
			system("cls");
			goto retry;
		}else
			goto end;
			
		case 6:
			cout<<"How Many: ";cin>>qty;
			total+=price[5]*qty;
			cout<<"do you want to buy more?(y/n):"; cin>>ask;
			if(ask == 'y'){
			system("cls");
			goto retry;
		}else
			goto end;
			
		case 7:
			cout<<"How Many: ";cin>>qty;
			total+=price[6]*qty;
			cout<<"do you want to buy more?(y/n):"; cin>>ask;
			if(ask == 'y'){
			system("cls");
			goto retry;
		}else
			goto end;	
	}
}while(order != 7);
	end:
		cout<<"Total Amount is: " <<total <<endl;
		cout<<"Cash: "; cin>>cash; 
		cout<<"Change: "; 
	    cout<<change(cash,total);
		return 0;                                                                       
}
