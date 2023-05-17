int main() {
    // these are regular
    // declaration and
    // definition of a variable
    int x;
    x = 42; // <- this returns 42

    // this copies the value
    // of x in another memory
    // space with identifier as y
    int y = x; // <- this returns 42

    // this is the declaration of
    // pointer type int
    int *xp;

    // this stores the memory address
    // of x into the pointer xp. So now,
    // xp points to x
    xp = &x; // <- this returns a memory address

    // this copies the value of x through
    // the pointer xp into y (which has a
    // different memory address)
    y = *xp; // <- this returns 42

    return 0;
}