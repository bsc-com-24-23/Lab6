 #include <iostream>
 #include <ctime>
 using namespace std;

 int main(){
    srand(time(NULL));

    int daysUntilexpiration = 5 +( rand() % 8);
    
    if (daysUntilexpiration >= 6 && daysUntilexpiration <= 10 )
    {
        cout << " Your subscription will expire soon. Renew now! \n";
    }
    else if ( daysUntilexpiration <= 5)
    {
        cout << "your subscription expires in " << daysUntilexpiration <<   "Renew now and save 10%!" << endl; 
    }
    else if (daysUntilexpiration == 11)
    {
        cout << "Your subscription expires within a day! Renew now and save 20%! " << endl;
    }
    
    else if (daysUntilexpiration  ==0)
    {
        cout << "your subscription has expired. " << endl;
    }
     else{
        cout << "bundle sinathe";
     }
   
cout <<  daysUntilexpiration;

    return 0;
 }
