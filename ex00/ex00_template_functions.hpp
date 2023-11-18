template<typename T>
void swap(T &a, T &b)
{
	T a_backup = a;
	a = b;
	b = a_backup;
}
template<typename T>
T min(T &a, T &b)
{
	return a < b? a : b;
}
template<typename T>
T max(T &a, T &b)
{
	return a > b ? a : b;
}