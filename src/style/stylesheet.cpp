#include "style/stylesheet.hpp"
#include "style/types/style_setting.hpp"
#include "style/stylesheet_segment.hpp"
#include "style/style_variant.hpp"
#include "types/rgba.hpp"

namespace FeatherVibe {

	StyleVariant getStylesheetValue( const Stylesheet& stylesheet ) {
		// Create and initialize default stylesheet segment with specificity of zero
		static const StylesheetSegment root{
			0,
			{
				{ "background-color", Rgba{ 0, 0, 0, 255 } },
				{ "background-image", "" },
				{ "border-type", StyleSetting::BORDER_NONE },
				{ "border-color", Rgba{ 0, 0, 0, 255 } },
				{ "drop-shadow", false },
				{ "drop-shadow-x", 10 },
				{ "drop-shadow-y", 10 },
				{ "drop-shadow-color", Rgba{ 0, 0, 0, 255 } },
				{ "drop-shadow-feather", 0 }
			}
		};
	}

}