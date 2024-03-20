int function(int x, int y, int z, int t, int w){
    int res = x + y + z + t + w;
    return res;
}

int main(){
    int x = 2;
    int y = 3;
    int z = 4;
    int t = 4;
    int w = 4;
    int a = function(x,y,z,t,w);
    return a;
}