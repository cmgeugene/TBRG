// Copyright Epic Games, Inc. All Rights Reserved.

#ifndef MONSTER_H_
#define MONSTER_H_


class Monster 
{
public:
	virtual ~Monster() {}
	virtual string getName() const = 0;
	virtual int getHealth() const = 0;
	virtual int getAttack() const = 0;
	virtual void takeDamage(int damage) {}
};



#endif