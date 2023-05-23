/// @ref core
/// @file glm/ext/vector_bool3.hpp

#pragma once
#include "../detail/type_vec3.hpp"

#if !defined(GLM_CXX_MODULES) && !defined(GLM_CXX_MODULES_EXPORT)
#define GLM_CXX_MODULES_EXPORT
#endif

GLM_CXX_MODULES_EXPORT namespace glm
{
	/// @addtogroup core_vector
	/// @{

	/// 3 components vector of boolean.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	typedef vec<3, bool, defaultp>		bvec3;

	/// @}
}//namespace glm
