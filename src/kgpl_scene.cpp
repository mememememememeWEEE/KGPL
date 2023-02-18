#include "kgpl.h"

using namespace KGPL;

Scene::Scene() {

}

Scene::~Scene() {
}

void Scene::addAsset(Asset* asset) {
    this->assets.push_back(asset);
}

void Scene::removeAsset(Asset* asset) {
    std::remove(this->assets.begin(), this->assets.end(), asset);
}