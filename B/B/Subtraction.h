#ifdef SUBTRACTION_EXPORTS
#define SUBTRACTION_API extern "C" __declspec(dllexport)
#else
#define SUBTRACTION_API extern "C" __declspec(dllimport)
#endif // SUBTRACTION_EXPORTS

SUBTRACTION_API float Sub(const float &a, const float &b);