class Solution {
public:
    bool isValid(string s) {
      stack<char> ans;
    for(int i=0; i<s.length(); i++) {
        
        char ch = s[i];
       
        //If opening bracket, then push in the stack
        if(ch == '(' || ch == '{' || ch == '['){
            ans.push(ch);
        }
		//check condition if we have the corresponding closing bracket
        else
        {
            //for closing bracket
            if(!ans.empty()) {
                 char top = ans.top(); //using the inbuilt top functionality of stack. if we get both closing and opening brackets, we remove the top element of the stack.
                 if( (ch == ')' && top == '(') || 
                    ( ch == '}' && top == '{') || 
                    (ch == ']' && top == '[') ) {
                     ans.pop();
                 }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            } 
        }  
    }
   
   if(ans.empty())
       return true;
   else
       return false;
}     
};