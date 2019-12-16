#pragma once

#include "style/style_variant.hpp"
#include <unordered_map>
#include <string>

namespace FeatherVibe {
	struct StylesheetSegment {
		int specificity = 0;
		std::unordered_map< std::string, StyleVariant > attributes;
	};
}