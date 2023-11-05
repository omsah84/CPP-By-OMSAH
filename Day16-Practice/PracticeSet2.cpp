#include<iostram>
using namespace std;
int main(){
    int n,m,p,k,j;
    cout<<"Enter the value n, m, p, k, j: "<<endl;
    cin>>n>>k>>j>>m>>p;

    int eat_ban = m/k;
    int eat_pea = p/j;

    int rem_ban = m%k;
    int rem_pea = p%j;
    int rem_mon = n-(eat_ban + eat_pea);

    if(rem_ban == 0){

    }

    if(rem_pea == 0){

    }


    
    return 0;
}