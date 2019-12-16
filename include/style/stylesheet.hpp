#pragma once

#include "style/stylesheet_segment.hpp"
#include "style/style_variant.hpp"
#include <vector>

namespace FeatherVibe {
	using Stylesheet = std::vector< StylesheetSegment >;

	StyleVariant getStylesheetValue( const Stylesheet& stylesheet );
}
