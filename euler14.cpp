int main()
{
    auto collatz = [](size_t n) {
        size_t i = 0;
        while (true)
        {
            if (n % 2 == 0)
            {
                n /= 2;
                i++;
            }
            else if (n == 1)
            {
                i++;
                break;
            }
            else
            {
                n = 3 * n + 1;
                i++;
            }
        }

        return i;
    };

    size_t max = 0, max_n;
    for (size_t n = 1; n < 1000000; n++)
    {
        auto steps = collatz(n);
        max = steps > max ? steps : max;
    }

    std::cout << max << std::endl;

    return 0;
}