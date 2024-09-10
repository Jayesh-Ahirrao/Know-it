namespace Search
{
    template <typename T>
    bool search(T arr[], int size, T target)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == target)
            {
                return true;
            }
        }
        return false;
    }
}