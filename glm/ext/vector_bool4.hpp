/// @ref core
/// @file glm/ext/vector_bool4.hpp

#pragma once
#include "../detail/type_vec4.hpp"

#if !defined(GLM_CXX_MODULES) && !defined(GLM_CXX_MODULES_EXPORT)
#define GLM_CXX_MODULES_EXPORT
#endif

namespace glm
{
	/// @addtogroup core_vector
	/// @{

	/// 4 components vector of boolean.
	///
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.5 Vectors</a>
	GLM_CXX_MODULES_EXPORT typedef vec<4, bool, defaultp>		bvec4;

	/// @}
}//namespace glm
