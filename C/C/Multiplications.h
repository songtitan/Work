#ifdef MULTIPLICATIONS_EXPORTS
#define MULTIPLICATIONS_API extern "C" __declspec(dllexport)
#else
#define MULTIPLICATIONS_API extern "C" __declspec(dllimport)
#endif // SUBTRACTION_EXPORTS

MULTIPLICATIONS_API int Mul(const int &a, const int &b);