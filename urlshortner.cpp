#include<iostream> 		// C++ program to generate short url from integer id and 
#include<algorithm> 		// integer id back from short url.
#include<string> 
using namespace std; 
  
string idToShortURL(long int n) 		// Function to generate a short url from integer ID 
{ 
    // Map to store 62 possible characters 
    char map[] = "abcdefghijklmnopqrstuvwxyzABCDEF"
                 "GHIJKLMNOPQRSTUVWXYZ0123456789"; 
  
    string shorturl; 
  
    // Convert given integer id to a base 62 number 
    while (n) 
    { 
        // use above map to store actual character 
        // in short url 
        shorturl.push_back(map[n%62]); 
        n = n/62; 
    } 
  
    // Reverse shortURL to complete base conversion 
    reverse(shorturl.begin(), shorturl.end()); 
  
    return shorturl; 
} 
  
// Function to get integer ID back from a short url 
long int shortURLtoID(string shortURL) 
{ 
    long int id = 0; // initialize result 
  
    // A simple base conversion logic 
    for (int i=0; i < shortURL.length(); i++) 
    { 
        if ('a' <= shortURL[i] && shortURL[i] <= 'z') 
          id = id*62 + shortURL[i] - 'a'; 
        if ('A' <= shortURL[i] && shortURL[i] <= 'Z') 
          id = id*62 + shortURL[i] - 'A' + 26; 
        if ('0' <= shortURL[i] && shortURL[i] <= '9') 
          id = id*62 + shortURL[i] - '0' + 52; 
    } 
    return id; 
} 
  
// Driver program to test above function 
int main() 
{ 
    int n ;
	cout<<"enter the random no. for long url";
	cin>>n; 
    string shorturl = idToShortURL(n); 
    cout << "Generated short url is " << shorturl << endl; 
    cout << "Id from url is " << shortURLtoID(shorturl); 
    return 0; 
} 
