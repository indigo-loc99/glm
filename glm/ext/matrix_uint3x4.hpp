/// @ref ext_matrix_uint3x4
/// @file glm/ext/matrix_uint3x4.hpp
///
/// @see core (dependence)
///
/// @defgroup ext_matrix_uint3x4 GLM_EXT_matrix_uint3x4
/// @ingroup ext
///
/// Include <glm/ext/matrix_uint3x4.hpp> to use the features of this extension.
///
/// Defines a number of matrices with integer types.

#pragma once

// Dependency:
#include "../mat3x4.hpp"

#if !defined(GLM_CXX_MODULES) && !defined(GLM_CXX_MODULES_EXPORT)
#define GLM_CXX_MODULES_EXPORT
#endif

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_matrix_uint3x4 extension included")
#endif

GLM_CXX_MODULES_EXPORT namespace glm
{
	/// @addtogroup ext_matrix_uint3x4
	/// @{

	/// Signed integer 3x4 matrix.
	///
	/// @see ext_matrix_uint3x4
	typedef mat<3, 4, uint, defaultp>	umat3x4;

	/// @}
}//namespace glm
