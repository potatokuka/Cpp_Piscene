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
	/* protected: */
	/* 	int			_attMax; */
	/* 	int			_blockMax; */
	public:
		int			_attMax;
		int			_blockMax;
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
					std::cout << "Slipper Slap Champ has been crowned\n";
					break;
				}
				if (Battle::GetAttackResult(warrior2, warrior1).compare("Game Over") == 0)
				{
					std::cout << "Slipper Slap Champ has been crowned\n";
					break;
				}
			}

		}
		static std::string	GetAttackResult(Warrior& warriorA, Warrior& warriorB){
			if (warriorA.name == "Liene")
			{
				int special = (std::rand() % 100);
				if (special > 50)
				{
					int Calling = (std::rand() % 100);
					Calling = (Calling <= 0) ? 1 : Calling;
					if (Calling)
					{
						if (Calling > 35)
						{
							int warriorAAttkAmt = warriorA._attMax;
							int warriorBBlockAmt = warriorB.Block();
							int damage2WarriorB = ceil(warriorAAttkAmt - warriorBBlockAmt);
							damage2WarriorB = (damage2WarriorB <= 0) ? 0 : damage2WarriorB;
							warriorB.health = warriorB.health - damage2WarriorB;


							printf("%s HAS INSANE CALLING %s and deals a whopping %d damage\n",
								warriorA.name.c_str(),
								warriorB.name.c_str(),
								damage2WarriorB);
							printf("%s is down to %d health\n",
								warriorB.name.c_str(),
								warriorB.health);
							if(warriorB.health <= 0)
							{
								printf("%s has his asshole ripped in two  %s is VICTORIOUS\n",
									warriorB.name.c_str(),
									warriorA.name.c_str());
									return ("Game Over");
							}
							else
								return ("Fight On");

						}
						else
						{
							int damage2WarriorB = 0;
							printf("%s HAS HIT THE GOOCH %s and deals %d damage\n",
								warriorA.name.c_str(),
								warriorB.name.c_str(),
								damage2WarriorB);
							if(warriorB.health <= 0)
							{
								printf("%s has been slapped with the slipper %s is VICTORIOUS\n",
									warriorB.name.c_str(),
									warriorA.name.c_str());
									return ("Game Over");
							}
							else
								return ("Fight On");
						}
					}
				}
			}
			int warriorAAttkAmt = warriorA.Attack();
			int warriorBBlockAmt = warriorB.Block();
			int damage2WarriorB = ceil(warriorAAttkAmt - warriorBBlockAmt);
			damage2WarriorB = (damage2WarriorB <= 0) ? 0 : damage2WarriorB;
			warriorB.health = warriorB.health - damage2WarriorB;

			printf("%s slaps %s and deals %d damage\n",
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
