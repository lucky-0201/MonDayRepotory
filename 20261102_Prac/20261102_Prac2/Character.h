#pragma once


namespace Game
{
	class  Character
	{
	protected:
		int hp = 0;
		int damage = 0;
		int defens = 0;
		int heal = 0;

	public:
		Character(int initialhp);

		void Attack(Character &character);

		void TakeDamaege(int damege);

		void Defens(int defens);

		int GetHp();

		void Healing(int heal);

	private:

	};

}


