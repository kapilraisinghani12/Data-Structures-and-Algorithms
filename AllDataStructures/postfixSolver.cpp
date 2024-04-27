#include<iostream>
#include<stack>


using namespace std;

int main(){
   string exp = "23*54*+9-";
   
   stack<int> solver;
   for (int i = 0; i < exp.size(); i++)
   {
        if(exp[i]>=0 && exp[i]<=9){
            solver.push((exp[i] - 48));
        }
        else if(exp[i] == '*'){
            int op2 = solver.top();
            solver.pop();
            int op1 = solver.top();
            solver.pop();

            solver.push(op1 * op2);
        }
        else if(exp[i] == '+'){
            int op2 = solver.top();
            solver.pop();
            int op1 = solver.top();
            solver.pop();

            solver.push(op1 + op2);
        }
        else if(exp[i] == '-'){
            int op2 = solver.top();
            solver.pop();
            int op1 = solver.top();
            solver.pop();

            solver.push(op1 - op2);
        }
   }

   cout<<solver.top();
   
}
