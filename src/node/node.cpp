#include "node/node.hpp"

namespace FeatherVibe {

	Node createNew( const std::string& tag, const std::string& id, const std::vector< std::string >& classes ) {
		Node result{
			tag,
			id,
			classes,
			{}
		};

		return result;
	}

}