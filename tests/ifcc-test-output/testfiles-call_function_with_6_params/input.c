int function(int x, int y, int z, int t, int w, int p ){
    int res = x + y + z + t + w + p;
    return res;
}

int main(){
    int x = 2;
    int y = 3;
    int z = 4;
    int a = function(x,y,z,x,y,z);
    return a;
}