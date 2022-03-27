#pragma once

class Random
{
private:

public:
    Random();
    int next();
    int nextInRange(int from, int to);
};