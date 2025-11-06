
// Sure, here is the revised list considering the use of `using namespace std;`:

// ### Input/Output
// - `cout`, `cin`, `cerr`, `clog`
//   - Header: `<iostream>`

// ### String Manipulation
// - `string`
//   - Header: `<string>`

// ### Mathematics
// - `abs`, `sin`, `cos`, `tan`, `sqrt`, `pow`, `log`, `exp`
//   - Header: `<cmath>`

// ### Utility
// - `pair`, `make_pair`, `swap`, `move`
//   - Header: `<utility>`

// ### Container Classes
// - `vector`, `list`, `deque`, `array`
//   - Header: `<vector>`, `<list>`, `<deque>`, `<array>`
// - `map`, `unordered_map`
//   - Header: `<map>`, `<unordered_map>`
// - `set`, `unordered_set`
//   - Header: `<set>`, `<unordered_set>`

// ### Algorithms
// - `sort`, `find`, `reverse`, `min`, `max`, `accumulate`
//   - Header: `<algorithm>`
// - `transform`
//   - Header: `<algorithm>`

// ### Iterators
// - `begin`, `end`
//   - Header: `<iterator>`

// ### Exception Handling
// - `exception`, `runtime_error`, `logic_error`
//   - Header: `<stdexcept>`

// ### Input/Output Manipulators
// - `setw`, `setprecision`, `fixed`, `scientific`
//   - Header: `<iomanip>`

// ### Memory Management
// - `unique_ptr`, `shared_ptr`, `weak_ptr`
//   - Header: `<memory>`

// ### Threading
// - `thread`, `mutex`, `lock_guard`, `unique_lock`, `condition_variable`
//   - Header: `<thread>`, `<mutex>`, `<condition_variable>`

// ### Type Traits
// - `is_same`, `is_integral`, `is_floating_point`
//   - Header: `<type_traits>`

// ### Functional
// - `function`, `bind`, `placeholders`
//   - Header: `<functional>`

// ### Random Numbers
// - `rand`, `srand`
//   - Header: `<cstdlib>`
// - `mt19937`, `uniform_int_distribution`, `uniform_real_distribution`
//   - Header: `<random>`

// ### Filesystem (C++17 and later)
// - `filesystem::path`, `filesystem::exists`, `filesystem::create_directory`
//   - Header: `<filesystem>`

// This version assumes the use of `using namespace std;`, eliminating the `std::` prefix.


#include<iostream>
#include<cmath>
using namespace std;


// void sum(int a,int b){    // here a and b are formal parameters
//     cout<<a+b;
// }

int sum(int a,int b){    // here a and b are formal parameters
    return a+b;
}


int main(){
    int a,b;
//     cout<<"enter the 1st number : ";
//     cin>>a;
//     cout<<"enter the 2nd number : ";
//     cin>>b;
//    cout<<sum(a,b);   // these are called actual parameters

cout<<sqrt(9.8)<<endl;
cout<<cbrt(9.8);
}

