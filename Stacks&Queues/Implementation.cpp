// Stack using Array
Class st{
int top = -1;
int st[10];
push(x){
if(top >= 10) cout<<"array is full" ;
top = top + 1;
st[top] = x;
}
int top(){
  if(top == -1) cout<< "no element in stack";
return st[top];
}
pop(){
  if(top == -1) cout<< "no element in stack";
top = top -1;
}
size(){
return top + 1;
}
};

// Queue using Array

Class q{
  int size = 10;
int start = -1; 
int end = -1;
int currsize = 0;
int q[size];
push(x){
 if(currsize == size) cout<<"queue is fill" ;
if(currsize == 0){
start = end = 0;
}
else{
end = (end + 1) % size;
q[end] = x;
currsize = currsize + 1;
}
}
int pop(){
if(currsize == 0) cout<<"no element to pop";
int el = q[start];
if(currsize == 1) start = end = -1;
else{
start = (start + 1) % size;
currsize = currsize -1;
}
return el;
}
int top(){
  if(currsize == 0) cout<<"no element to pop";
return q[start];
}
int size(){
  return currsize();
}
};
