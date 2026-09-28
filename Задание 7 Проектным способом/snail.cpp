int Counter_of_days(int a, int b, int h) {
    int days = 0;

    while (h > 0) {
        h -= a;
        days++;

        if (h > 0) {
            h += b;
        }
    }

    return days;
}