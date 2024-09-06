
int main(){
   int n;
   cout<<"enter number : ";
   cin>>n;
  for(int i=1;i<=n;i++){
    int a=1;
    for(int k=n-i;k>=1;k--){
        cout<<" "<<" ";
    }
   for(int j=1;j<=2*i-1;j++){
    char ch =(char)(a+64);
    cout<<ch<<" ";
    a++;