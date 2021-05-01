//
// Created by Allegra Caryn on 4/23/21.
//

#ifndef EX01_ENEMY_HPP
#define EX01_ENEMY_HPP
#include <iostream>

class Enemy {
	public:
		Enemy();
		Enemy(int hp, std::string const & type);
		Enemy(const Enemy &);
		virtual	~Enemy();
		Enemy &	operator=(const Enemy & a);
		const std::string & getType() const;
		int 				getHP() const;
		virtual void 		takeDamage(int);

	private:
		int 				_hp;
		std::string 		_type;
};


#endif //EX01_ENEMY_HPP
