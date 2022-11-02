int readNumber();
void writeAnswer(int answer);

void main()
{
	writeAnswer(readNumber() + readNumber());
}