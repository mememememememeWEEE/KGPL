#pragma once
#include <cstdint>
#include <string>
#include <cstdio>
#include <vector>

#define LOG(...) printf(__VA_ARGS__)

namespace KGPL {
	class Window final {
		protected:
			uint32_t width, height;	
			std::string title;

		public:
			Window();
			~Window();

			auto inline getWidth() const { return width; }
			auto inline getHeight() const { return height; }
			auto inline getTitle() const { return title; }
	};

	class Asset final {

	};

	class Scene final {
		protected:
			Window* window;
			std::vector<Asset*> assets;
	};

	class Renderer final {
		protected:
			Window* window;
			Scene* scene;
	};
}

