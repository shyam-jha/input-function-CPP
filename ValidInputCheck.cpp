#include <iostream>
#include <string>
using namespace std;

template <typename T>
void input(T &a, int b) 
{
    string s;
    bool ValidInput = false;

    while (!ValidInput) 
    {
        cin >> s;
        try 
        {
            if (b == 1) 
            {
                int temp = stoi(s);
                string tempo = to_string(temp);
                if (tempo.length() == s.length()) 
                {
                    a = temp;
                    ValidInput = true;
                } 
                else 
                {
                    cout << "Wrong Input" << endl;
                }
            } 
            else if (b == 2) 
            {
                int temp = stol(s);
                string tempo = to_string(temp);
                if (tempo.length() == s.length()) 
                {
                    a = temp;
                    ValidInput = true;
                } 
                else 
                {
                    cout << "Wrong Input" << endl;
                }
            } 
            else if (b == 3) 
            {
                int temp1 = stoi(s);
                string temp2 = to_string(temp1);
                if (s.length() == temp2.length()) 
                {
                    a = stof(s);
                    ValidInput = true;
                } 
                else if (s[temp2.length()] == '.') 
                {
                    string temp3 = s.substr(temp2.length() + 1, s.length() - 1);
                    int temp4 = stoi(temp3);
                    string temp5 = to_string(temp4);
                    if (temp5 == temp3) 
                    {
                        a = stof(s);
                        ValidInput = true;
                    } 
                    else 
                    {
                        cout << "Wrong Input" << endl;
                    }
                } 
                else 
                {
                    cout << "Wrong Input" << endl;
                }
            } 
            else if (b == 4) 
            {
                int temp1 = stoi(s);
                string temp2 = to_string(temp1);
                if (s.length() == temp2.length()) 
                {
                    a = stod(s);
                    ValidInput = true;
                } 
                else if (s[temp2.length()] == '.') 
                {
                    string temp3 = s.substr(temp2.length() + 1, s.length() - 1);
                    int temp4 = stoi(temp3);
                    string temp5 = to_string(temp4);
                    if (temp5 == temp3) 
                    {
                        a = stod(s);
                        ValidInput = true;
                    } 
                    else 
                    {
                        cout << "Wrong Input" << endl;
                    }
                } 
                else 
                {
                    cout << "Wrong Input" << endl;
                }
            }
        } 
        catch (const invalid_argument &e) 
        {
            cerr << "Invalid argument: " << e.what() << std::endl;
        } 
        catch (const out_of_range &e) 
        {
            cerr << "Out of range: " << e.what() << std::endl;
        } 
        catch (const exception &e) 
        {
            cerr << "An error occurred: " << e.what() << std::endl;
        }
    }
}

int main()
{
    int k;
    long l;
    float f;
    double d;
    string s;

    cout<<"Enter an integer value"<<endl;
    input(k, 1);
    cout<<k<<endl;
    cout<<"Enter an long integer value"<<endl;
    input(l, 2);
    cout<<l<<endl;
    cout<<"Enter a float value"<<endl;
    input(f, 3);
    cout<<f<<endl;
    cout<<"Enter a double value"<<endl;
    input(d, 4);
    cout<<d<<endl;
}