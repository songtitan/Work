#ifdef MULTIPLICATIONS_EXPORTS
#define MULTIPLICATIONS_API extern "C" __declspec(dllexport)
#else
#define MULTIPLICATIONS_API extern "C" __declspec(dllimport)
#endif // SUBTRACTION_EXPORTS

MULTIPLICATIONS_API float Mul(const float &a, const float &b);