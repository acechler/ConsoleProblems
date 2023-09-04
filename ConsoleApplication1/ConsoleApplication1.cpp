// 
// https://www.hackerrank.com/dashboard
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


const string CALL_ATTRIBUTE_REFERENCE_TAG = "~";


void inputexample() {

    string query;

    cout << "Please, enter your query: ";
    getline(cin, query);
    cout << query << endl;
}

int main()
{
    string example{};
    example.append("<tag1 value = \"value\">\n");
    example.append("<tag2 name = \"name\">\n");
    example.append("<tag3 another=\"another\" final=\"final\">\n");
    example.append("</tag3>\n");
    example.append("</tag2>\n");
    example.append("</tag1>\n");

    cout << example;



    return 0;
}
