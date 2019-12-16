#pragma once

#include "style/stylesheet.hpp"
#include "style/style_variant.hpp"
#include <vector>
#include <string>

namespace FeatherVibe {
	struct Node {
		const std::string tag;
		std::string id;
		std::vector< std::string > classes;
		Stylesheet style;
	};

	Node createNew( const std::string& tag, const std::string& id, const std::vector< std::string >& classes );
}