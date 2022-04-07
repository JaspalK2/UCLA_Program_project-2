#include <iostream>
#include <string>
using namespace std;
// do not start a variable name has to be a lettter not a number
int main(){
    string iphone, colors;
    int memory;
    cout << "What type of iphone do you want? ";// asks for the model
    
    getline( cin, iphone);
    cout << "What color do you want? ";//color
    getline( cin, colors);
    cout << "how much memory do you want? "; // memory of ram
    cin >> memory;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2); // this and the previous two statements help the output answers to show 2 decimal places after the number in order to make it look realistic
    
    
    
    if (iphone  == "iphone 12"){
        if (colors == "White"||colors == "Black"||colors == "Blue"|| colors == "Green"||colors == "Red"|| colors == "Purple"){//while looking king of complicated, this is just a bunch of or statements that request what kind of color was chosen and if the color was any one of the ones listed above, then procceed to the next part
            if (memory == 64){
                cout << "Your " << colors << " iphone 12"<<" costs $" << 799.00<<"."<<endl;// these statements are the final statements that are changed only by price depending on the memory they chose to get
            }
            else if(memory == 128){
                cout << "Your " << colors << " iphone 12"<<" costs $" << 849.00<<"."<<endl;
                
            }
            else if(memory == 256){
                cout << "Your " << colors << " iphone 12"<<" costs $" << 949.00<<"."<< endl;
            }
            else{
                cout << "Your memory selection is not valid!"<<endl; // else statemnet is embeedded in the memory if statement in which if they type the wrong statement, the error will show
            }
        }
        else{
            cout << "Your color selection is not valid!"<<endl; // same thing here, as soon as they do not choose one of the correct colors, after al the inputs have been requested this statement will run
        }
    }
    // anythign beyond this point is quite litereally the same deisgn only different values with no varaition in structure so it is quite predictable what each and every part of the next few if and else statements will do. 
    else if(iphone  == "iphone 12 Mini"){
        if (colors == "White"||colors == "Black"||colors == "Blue"|| colors == "Green"||colors == "Red"||colors == "Purple"){
            if (memory == 64){
                cout << "Your " << colors << " iphone 12 Mini"<<" costs $" << 699.00<<"." << endl;
            }
            else if(memory == 128){
                cout << "Your " << colors << " iphone 12 Mini"<<" costs $" << 749.00 <<"."<< endl;
                
            }
            else if(memory == 256){
                cout << "Your " << colors << " iphone 12 Mini"<<" costs $" << 849.00 <<"."<< endl;
            }
            else{
                cout << "Your memory selection is not valid"<<endl;
            }
        }
        
    }
    else if(iphone  == "iphone 12 Pro"){
            if (colors == "Graphite"|| colors == "Silver"|| colors == "Gold" || colors == "Blue"){
                if (memory == 128){
                    cout << "Your " << colors << " iphone 12 Pro"<<" costs $"<<999.00<<"."<<endl;
                }
                else if(memory == 256){
                    cout << "Your " << colors << " iphone 12 Pro"<<" costs $"<<1099.00<<"."<<endl;
                    
                }
                else if(memory == 512){
                    cout << "Your " << colors << " iphone 12 Pro"<<" costs $"<<1299.00<<"."<<endl;
                }
                else{
                    cout << "Your memory selection is not valid"<<endl;
                }
            }
            else{
                cout << "Your color selection is not valid!"<<endl;
            }
    }
    else if(iphone  == "iphone 12 Pro Max"){
            if (colors == "Graphite"|| colors == "Silver"|| colors == "Gold" || colors == "Blue"){
                if (memory == 128){
                    cout << "Your " << colors << " iphone 12 Pro Max"<<" costs $"<<1099.00<<"."<<endl;
                }
                else if(memory == 256){
                    cout << "Your " << colors << " iphone 12 Pro Max"<<" costs $"<<1139.00<<"."<<endl;
                    
                }
                else if(memory == 512){
                    cout << "Your " << colors << " iphone 12 Pro Max"<<" costs $"<<1399.00<<"."<<endl;
                }
                else{
                    cout << "Your memory selection is not valid"<<endl;
                }
            }
            else{
                cout << "Your color selection is not valid!"<<endl;
            }
    }
    else{
        cout << "Your model selection was not valid!"<<endl;
    }
   
                    
                    
    
    
}
