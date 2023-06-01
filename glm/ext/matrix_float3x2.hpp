/// @ref core
/// @file glm/ext/matrix_float3x2.hpp

#pragma once
#include "../detail/type_mat3x2.hpp"

#if !defined(GLM_CXX_MODULES) && !defined(GLM_CXX_MODULES_EXPORT)
#define GLM_CXX_MODULES_EXPORT
#endif

GLM_CXX_MODULES_EXPORT namespace glm
{
	/// @addtogroup core_matrix
	/// @{

	/// 3 columns of 2 components matrix of single-precision floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	typedef mat<3, 2, float, defaultp>			mat3x2;

	/// @}
}//namespace glm
