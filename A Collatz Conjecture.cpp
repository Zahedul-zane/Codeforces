    #include <iostream>
    using namespace std;

    int main() {
        int t;
        cin >> t;

        while (t--) {
            int k, x ,y ,y1;
            cin >> k >> x;
            int X=x;
            while(k--){
            y  =  2*x;
            y1 = (x-1)/3;
            x*=2;

            }
                if(y1%2==1 && y1>0 && (X-1)%3==0){
                cout<<y1<<endl;
                }else{
                cout<<y<<endl;
                }

        }

        return 0;
    }
