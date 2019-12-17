#include "GameObject.h"



GameObject::GameObject()
{
}


GameObject::~GameObject()
{
}

void GameObject::setPosition(Vector pos)
{
	this->pos = pos;
}

void GameObject::setVelocity(Vector pos)
{
	this->velocity = velocity;
}

void GameObject::update(float dt)
{
	//let sub classes fill these in if appropriate
}

void GameObject::updateMovement(float dt)
{
	//acceleration changes velocity
	velocity.x = velocity.x + (acceleration.x*dt);
	velocity.y = velocity.y + (acceleration.x*dt);

	//velocity changes position
	pos.x = pos.x + velocity.x * dt;
	pos.y = pos.y + velocity.y * dt;
}

void GameObject::draw()
{
}
