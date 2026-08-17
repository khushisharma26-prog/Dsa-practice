 while (n != 0)
  {
    int bit = n & 1;
    ans = (bit * pow(10, i)) + ans;
    cout << "bit = " << bit << ", ans = " << ans << endl;
    n = n >> 1;
    i++;
  }