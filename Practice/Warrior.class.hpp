/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Warrior.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 18:51:14 by greed         #+#    #+#                 */
/*   Updated: 2020/07/25 18:51:15 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

class Warrior{
	private:
		int			_attMax;
		int			_blockMax;
	public:
		std::string	name;
		int			health;
		Warrior(std::string name, int health,
				int _attMax, int _blockMax){
			this->name = name;
			this->health = health;
			this->_attMax = _attMax;
			this->_blockMax = _blockMax;
		}
		int			Attack(){
			return (std::rand() % this->_attMax);
		}
		int			Block(){
			return (std::rand() % this->_blockMax);
		}
};

class Battle{
	public:
		static void StartFight(Warrior& warrior1, Warrior& warrior2){
			while (true)
			{
				if (Battle::GetAttackResult(warrior1, warrior2).compare("Game Over") == 0)
				{
					std::cout << "Game Over\n";
					break;
				}
				if (Battle::GetAttackResult(warrior2, warrior1).compare("Game Over") == 0)
				{
					std::cout << "Game Over\n";
					break;
				}
			}

		}
		static std::string	GetAttackResult(Warrior& warriorA, Warrior& warriorB){
			int warriorAAttkAmt = warriorA.Attack();
			int warriorBBlockAmt = warriorB.Block();
			int damage2WarriorB = ceil(warriorAAttkAmt - warriorBBlockAmt);
			damage2WarriorB = (damage2WarriorB <= 0) ? 0 : damage2WarriorB;
			warriorB.health = warriorB.health - damage2WarriorB;

			printf("%s attacks %s and deals %d damage\n",
					warriorA.name.c_str(),
					warriorB.name.c_str(),
					damage2WarriorB);
			printf("%s is down to %d health\n",
					warriorB.name.c_str(),
					warriorB.health);
			if(warriorB.health <= 0)
			{
				printf("%s has Died and %s is the winner\n",
					warriorB.name.c_str(),
					warriorA.name.c_str());
				return ("Game Over");
			}
			else
				return ("Fight Again");
		}
};
