#include <bits/stdc++.h>

using namespace std;

vector <int> cutTheSticks(vector <int> arr) {
	    vector<int> returnArray;
        while(arr.size() > 0) {
        returnArray.push_back(arr.size());
        //cout << arr.size() << endl;
        int min = *min_element(arr.begin(), arr.end());
        for(vector<int>::iterator itr = arr.begin(); itr != arr.end();) {
            if(*itr == min) arr.erase(itr);
            else itr++;
        }
    }
        return (returnArray);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    vector <int> result = cutTheSticks(arr);
    //cout<< result.size();
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;