void tree_build(di a, int v, int l, int r)
{
    if (l == r)
    {
        tree [v] = a [l];
        return;
    }
    int mid = (l + r) / 2;
    tree_build(a, v * 2, l, mid);
    tree_build(a, v * 2 + 1, mid + 1, r);
    tree [v] = tree [v * 2] + tree [v * 2 + 1];
}
void tree_build(int a [], int v, int l, int r)
{
    if (l == r)
    {
        tree[v] = a[l];
        return;
    }
    int mid = (l + r) / 2;
    tree_build (a, v * 2, l, mid);
    tree_build (a, v * 2 + 1, mid + 1, r);
    tree [v] = tree [v * 2] + tree [v * 2 + 1];
}