#include "Peaberry.h"

Peaberry::~Peaberry() {
	
}

void Peaberry::addFixtures() {
	float width = _node->getContentSize().width * 0.6f;
    float height = _node->getContentSize().height * 0.6f;
    this->addRectangularFixture(width, height);
}

bool Peaberry::init(b2World *world, Dictionary *properties) {
    //FIXME
	_node = Sprite::createWithSpriteFrameName("man_down_right2.png");
	_node->setScale(0.4f);
	this->setType(GameObjectTypePeaBerry);

    if (!GameObject::init(world, properties))
        return false;
    
    return true;
}

void Peaberry::update(float dt) {
	GameObject::update(dt);
}