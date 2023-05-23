/// @ref core
/// @file glm/ext/matrix_double2x2.hpp

#pragma once
#include "../detail/type_mat2x2.hpp"

#if !defined(GLM_CXX_MODULES) && !defined(GLM_CXX_MODULES_EXPORT)
#define GLM_CXX_MODULES_EXPORT
#endif

GLM_CXX_MODULES_EXPORT namespace glm
{
	/// @addtogroup core_matrix
	/// @{

	/// 2 columns of 2 components matrix of double-precision floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	typedef mat<2, 2, double, defaultp>		dmat2x2;

	/// 2 columns of 2 components matrix of double-precision floating-point numbers.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	typedef mat<2, 2, double, defaultp>		dmat2;

	/// @}
}//namespace glm
