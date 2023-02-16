#pragma once
#include <cstdint>
#include <string>

#define LOG(...) printf(__VA_ARGS__)

namespace KGPL {
	class Window final {
		protected:
			uint32_t width, height;	
			std::string title;

		public:
			auto inline getWidth() const { return width; }
			auto inline getHeight() const { return height; }
			auto inline getTitle() const { return title; }
	};

	class Scene final {
		protected:
			Window* window;
	};

	class Renderer final {
		protected:
			Window* window;
			Scene* scene;
	};
}

