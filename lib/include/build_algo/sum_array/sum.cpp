template <typename T>
long long sum (T a)
{
    int rezult = 0;
    for (auto i: a)
        rezult += i;
    return rezult;
}
