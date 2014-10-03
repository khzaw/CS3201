#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Write the class MyStack here
template <typename T>
class MyStack {
  private:
    vector<T> vect;

  public:
    MyStack() {
    };
    T pop() {
      T element = vect.back();
      vect.pop_back();
      return element;
    }
    void push(const T & u) {
      vect.push_back(u);
    }
    T peek() {
      return vect.back();
    }
    bool empty() {
      return vect.size() == 0;
    }
};



// Do not change any code from this line onwards.
template <typename T>
void test(MyStack<T> stack);

int main(void){
    int type;
  
  cout << "Enter type (1 for int, 2 for double, 3 for string): ";
  cin >> type;
  
  switch (type){
    case 1: {
      MyStack<int> stackInteger;
      test(stackInteger);
      break; 
    }
    case 2: {
      MyStack<double> stackDouble;
      test(stackDouble);
      break; 
    }
    case 3: {
      MyStack<string> stackString;
      test(stackString);
      break; 
    }
  } 
    
    return 0;                
}

template <typename T>
void test(MyStack<T> stack){
  string cmd;
  int numCmd;
  T input;
      
  cout << "Enter number of commands: ";
  cin >> numCmd;
  
  cout << "Enter commands: ";
  
  for (int i=0; i<numCmd; i++){
    cin >> cmd;
    
    if (cmd == "pop")
      cout << stack.pop() << endl;
    else if (cmd == "peek")
      cout << stack.peek() << endl;
    else if (cmd == "empty")
      if (stack.empty())  
        cout << "true" << endl;
      else 
        cout << "false" << endl;
    else if (cmd == "push"){
      cin >> input;
      stack.push(input);
      cout << stack.peek() << endl;
    }
  }
}

