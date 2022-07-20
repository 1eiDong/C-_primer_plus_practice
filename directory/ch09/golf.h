const int Len = 40;
struct golf
{
	char fullname[Len];
	int handicap;
};

// non-interactive version:
void setgolf(golf& g, const char* name, int hc);
// interactive version:
int setgolf(golf& g);
// function resets handicap to new value
void handicap(golf& g, int hc);

void showgolf(const golf& g);