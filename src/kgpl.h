#pragma once
#include <cstdint>
#include <stdint.h>
#include <string>
#include <cstdio>
#include <vector>

#include "../lib/glfw3.h"

#define LOG(...) fprintf(stdout, __VA_ARGS__)

namespace KGPL {

	class Window final {
		protected:
			GLFWwindow* window;
			uint32_t width, height;	
			std::string title;

		public:
			Window(uint32_t width, uint32_t height, const std::string& title);
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
