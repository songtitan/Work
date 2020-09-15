#ifdef SUBTRACTION_EXPORTS
#define SUBTRACTION_API extern "C" __declspec(dllexport)
#else
#define SUBTRACTION_API extern "C" __declspec(dllimport)
#endif // SUBTRACTION_EXPORTS

SUBTRACTION_API int Sub(const int &a, const int &b);