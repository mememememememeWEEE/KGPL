#include "kgpl.h"

using namespace KGPL;

Scene::Scene() {}

Scene::~Scene() {}

void Scene::addAsset(PhysicalAsset* asset) {
    this->physicalAssets.push_back(asset);
}

void Scene::addAsset(NonphysicalAsset* asset) {
    this->nonphysicalAssets.push_back(asset);
}

void Scene::removeAsset(PhysicalAsset* asset) {
    std::remove(this->physicalAssets.begin(), this->physicalAssets.end(), asset);
}

void Scene::removeAsset(NonphysicalAsset* asset) {
    std::remove(this->nonphysicalAssets.begin(), this->nonphysicalAssets.end(), asset);
}