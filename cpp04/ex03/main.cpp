#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void	test()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
}

void	test1CommonCases()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("dummy");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(5, *bob);
	delete bob;
	delete me;
	delete src;
}

void	test2CopyAssignment()
{
	ICharacter* bob = new Character("bob");

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	Character* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << me->getName() << " has equiped 2 materias\n";

	delete src;
	std::cout << "Materia source has been freed\n";

	std::cout << "Adress of Character object:            " << &me << std::endl;
	Character *you = new Character(*me);
	std::cout << "Deep copy of Character object \"me\"\n";
	delete me;
	std::cout << "Character object \"me\" has been deleted\n";
	std::cout << "Adress of new copied Character object: " << &you << std::endl;
	you->use(0, *bob);
	you->use(1, *bob);
	delete you;
	delete bob;
}

int main()
{
	test();
//	test1CommonCases();
//	test2CopyAssignment();
//	while (1);
	return 0;
}
