/// @ref ext_matrix_int4x3
/// @file glm/ext/matrix_int4x3.hpp
///
/// @see core (dependence)
///
/// @defgroup ext_matrix_int4x3 GLM_EXT_matrix_int4x3
/// @ingroup ext
///
/// Include <glm/ext/matrix_int4x3.hpp> to use the features of this extension.
///
/// Defines a number of matrices with integer types.

#pragma once

// Dependency:
#include "../mat4x3.hpp"

#if !defined(GLM_CXX_MODULES) && !defined(GLM_CXX_MODULES_EXPORT)
#define GLM_CXX_MODULES_EXPORT
#endif

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_matrix_int4x3 extension included")
#endif

GLM_CXX_MODULES_EXPORT namespace glm
{
	/// @addtogroup ext_matrix_int4x3
	/// @{

	/// Signed integer 4x3 matrix.
	///
	/// @see ext_matrix_int4x3
	typedef mat<4, 3, int, defaultp>	imat4x3;

	/// @}
}//namespace glm
