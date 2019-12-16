#pragma once

#include "style/types/style_setting.hpp"
#include "types/rgba.hpp"
#include <variant>
#include <string>

namespace FeatherVibe {
	using StyleVariant = std::variant<
		int,
		float,
		bool,
		std::string,
		StyleSetting,
		Rgba
	>;
}