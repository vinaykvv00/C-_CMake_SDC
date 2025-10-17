
#include <iostream>
using namespace std;
 
class Demo{
    public:
        Demo(int n){
            demo1 = n;
        }
        int getDemo(){
            return demo1;
        }
    private:
        int demo1;
};
 
void getDemoExternally(Demo demo){
    cout << demo.getDemo();
}

int main()
{
    getDemoExternally(10);
    return 0;
}
