#include <iostream>
using namespace std;


void numericConstant()
{
    string input;
    bool isNumeric = true;

    cout << "\nQ1: Enter input: ";
    cin >> input;

    for(int i=0; i<input.length(); i++)
    {
        if(input[i] < 48 || input[i] > 57)
        {
            isNumeric = false;
            break;
        }
    }

    if(isNumeric)
        cout << "Numeric Constant\n";
    else
        cout << "Not Numeric\n";
}



void operators()
{
    string input;

    cout << "\nQ2: Enter expression: ";
    cin >> input;

    for(int i=0; i<input.length(); i++)
    {
        if(input[i]=='+' || input[i]=='-' ||
           input[i]=='*' || input[i]=='/' ||
           input[i]=='%' || input[i]=='=')
        {
            cout << "Operator: " << input[i] << endl;
        }
    }
}



void comments()
{
    cin.ignore();

    string input;

    cout << "\nQ3: Enter line: ";
    getline(cin,input);

    if(input[0]=='/' && input[1]=='/')
        cout<<"Single Line Comment\n";

    else if(input[0]=='/' && input[1]=='*')
        cout<<"Multiple Line Comment\n";

    else
        cout<<"Not Comment\n";
}



void identifier()
{
    string id;
    bool valid = true;

    cout << "\nQ4: Enter identifier: ";
    cin >> id;

    if(!((id[0]>='A' && id[0]<='Z') ||
         (id[0]>='a' && id[0]<='z') ||
         id[0]=='_'))
    {
        valid = false;
    }

    for(int i=1;i<id.length();i++)
    {
        if(!((id[i]>='A'&&id[i]<='Z')||
             (id[i]>='a'&&id[i]<='z')||
             (id[i]>='0'&&id[i]<='9')||
             id[i]=='_'))
        {
            valid=false;
            break;
        }
    }

    if(valid)
        cout<<"Valid Identifier\n";
    else
        cout<<"Invalid Identifier\n";
}



void average()
{
    int n,sum=0;

    cout<<"\nQ5: Enter array size: ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }

    cout<<"Average = "<<(float)sum/n<<endl;
}



void minMax()
{
    int n;

    cout<<"\nQ6: Enter array size: ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int min=arr[0];
    int max=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];

        if(arr[i]>max)
            max=arr[i];
    }

    cout<<"Minimum = "<<min<<endl;
    cout<<"Maximum = "<<max<<endl;
}



void fullName()
{
    string first,last;

    cout<<"\nQ7: Enter First Name: ";
    cin>>first;

    cout<<"Enter Last Name: ";
    cin>>last;

    cout<<"Full Name = "<<first+" "+last<<endl;
}



int main()
{
    numericConstant();

    operators();

    comments();

    identifier();

    average();

    minMax();

    fullName();

    return 0;
}
