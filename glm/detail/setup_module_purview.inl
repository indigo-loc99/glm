// Get around glm's setup configuration's dependency on standard library utilities
#pragma once

#if GLM_HAS_MAKE_SIGNED

namespace glm{
namespace detail
{
	using std::make_unsigned;
}//namespace detail
}//namespace glm

#endif // GLM_HAS_MAKE_SIGNED

namespace glm
{
	using std::size_t;
#	if GLM_CONFIG_LENGTH_TYPE == GLM_LENGTH_SIZE_T
		export typedef size_t length_t;
#	else
		export typedef int length_t;
#	endif
}//namespace glm

#if GLM_HAS_CONSTEXPR
#	ifndef GLM_CONFIG_CONSTEXP
#		define GLM_CONFIG_CONSTEXP GLM_ENABLE
#	endif

	namespace glm
	{
		export template<typename T, std::size_t N>
		constexpr std::size_t countof(T const (&)[N])
		{
			return N;
		}
	}//namespace glm
#	define GLM_COUNTOF(arr) glm::countof(arr)
#endif // GLM_HAS_CONSTEXPR

namespace glm{
namespace detail
{
#	if GLM_HAS_EXTENDED_INTEGER_TYPE
		typedef std::uint64_t						uint64;
		typedef std::int64_t						int64;
#	endif // GLM_HAS_EXTENDED_INTEGER_TYPE

}//namespace detail
}//namespace glm

