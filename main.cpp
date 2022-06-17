#include <cstdlib>

#if defined(_MSC_VER)
	#if _MSC_VER >= 1930
		#error "This will be highlighted in VS2022, but shouldn't"
	#endif
#endif

#if !defined(__INTELLISENSE__) && defined(_MSC_VER)
	#if _MSC_VER >= 1930
		#error "This will NOT be highlighted in VS2022"
	#endif
#endif

int main()
{
	return _MSC_VER == 1929 ? EXIT_SUCCESS : EXIT_FAILURE;
}
