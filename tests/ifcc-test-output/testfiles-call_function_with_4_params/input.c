int function(int x, int y, int z, int t){
    int res = x + y + z + t;
    return res;
}

int main(){
    int x = 2;
    int y = 3;
    int z = 4;
    int t = 5;
    int a = function(x,y,z,t);
    return a;
}