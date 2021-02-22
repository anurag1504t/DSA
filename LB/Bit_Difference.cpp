// Function to find number of bits needed to be flipped to convert A to B
int countBitsFlip(int a, int b){
    int ans = 0;
    while(a||b)
    {
        if(a%2 != b%2)
        {
            ans++;
        }
        a/=2;
        b/=2;
    }
    return ans;
}

int countBitsFlip(int a, int b){
    int ans = 0;
    int ans_xor = a^b;
    while(ans_xor)
    {
        ans+=ans_xor%2;
        ans_xor/=2;
    }
    return ans;
}
