// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.



// Решить проблему пользовательского ввода в int переменные - см ниже
#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>

using namespace std;

double PlayerCastleCondition = 800;
double EnemyCastleCondition = 0;

//resources
int PlayerGold = 0;
int PlayerLumber = 0;
int PlayerIron = 0;
int PlayerStone = 0;
int PlayerPeople = 0;
int PlayerPeopleLimit = 10;
int PlayerHorses = 5;
int PlayerArmyLimit = 10;
int PlayerWallsLimit = 10;
int PlayerPowder = 0;
int PlayerResourceLimit = 500;
int EnemyGold = 0;
int EnemyLumber = 0;
int EnemyIron = 0;
int EnemyStone = 0;
int EnemyPeople = 10;
int EnemyHorses = 5;
int EnemyArmyLimit = 10;
int EnemyWallsLimit = 10;
int EnemyPowder = 0;
int EnemyResourceLimit = 500;


//building levels
int PlayerGMlvl = 1;
int PlayerLMlvl = 1;
int PlayerIMlvl = 1;
int PlayerSQlvl = 1;
int PlayerSHlvl = 1;
int PlayerHlvl = 1;
int PlayerBlvl = 1;
int PlayerWlvl = 1;
int PlayerSlvl = 1;

int EnemyGMlvl = 1;
int EnemyLMlvl = 1;
int EnemyIMlvl = 1;
int EnemySQlvl = 1;
int EnemySHlvl = 1;
int EnemyHlvl = 1;
int EnemyBlvl = 1;
int EnemyWlvl = 1;
int EnemySlvl = 1;

//upgrade costs for buildings
int Player_GM_Up_Gold = PlayerGMlvl * 20;
int Player_GM_Up_Iron = PlayerGMlvl * 20;
int Player_GM_Up_Lumber = PlayerGMlvl * 20;

int Player_LM_Up_Gold = PlayerLMlvl * 20;
int Player_LM_Up_Iron = PlayerLMlvl * 20;
int Player_LM_Up_Lumber = PlayerLMlvl * 20;
int Player_LM_Up_Stone = PlayerLMlvl * 20;

int Player_IM_Up_Gold = PlayerIMlvl * 20;
int Player_IM_Up_Iron = PlayerIMlvl * 20;
int Player_IM_Up_Lumber = PlayerIMlvl * 20;

int Player_SQ_Up_Gold = PlayerSQlvl * 20;
int Player_SQ_Up_Iron = PlayerSQlvl * 20;
int Player_SQ_Up_Lumber = PlayerSQlvl * 20;

int Player_SH_Up_Gold = PlayerSHlvl * 20;
int Player_SH_Up_Iron = PlayerSHlvl * 20;
int Player_SH_Up_Lumber = PlayerSHlvl * 20;
int Player_SH_Up_Stone = PlayerSHlvl * 20;

int Player_H_Up_Gold = PlayerHlvl * 20;
int Player_H_Up_Iron = PlayerHlvl * 20;
int Player_H_Up_Lumber = PlayerHlvl * 20;
int Player_H_Up_Stone = PlayerHlvl * 20;

int Player_B_Up_Gold = PlayerBlvl * 20;
int Player_B_Up_Iron = PlayerBlvl * 20;
int Player_B_Up_Lumber = PlayerBlvl * 20;
int Player_B_Up_Stone = PlayerBlvl * 20;

int Player_W_Up_Gold = PlayerWlvl * 20;
int Player_W_Up_Iron = PlayerWlvl * 20;
int Player_W_Up_Lumber = PlayerWlvl * 20;
int Player_W_Up_Stone = PlayerWlvl * 60;

int Player_S_Up_Gold = PlayerSlvl * 20;
int Player_S_Up_Iron = PlayerSlvl * 20;
int Player_S_Up_Lumber = PlayerSlvl * 20;
int Player_S_Up_Stone = PlayerSlvl * 20;


//army
int PlayerArchers = 0;
int PlayerSpearmans = 0;
int PlayerCavalry = 0;
int PlayerCatapults = 0;

int EnemyArchers = 0;
int EnemySpearmans = 0;
int EnemyCavalry = 0;
int EnemyCatapults = 0;

const int PeopleArchers = 1;
const int PeopleSpearmans = 1;
const int PeopleCavalry = 1;
const int PeopleCatapults = 2;
const int GoldArchers = 20;
const int GoldSpearmans = 20;
const int GoldCavalry = 20;
const int GoldCatapults = 40;
const int LumberArchers = 40;
const int LumberSpearmans = 20;
const int LumberCatapults = 40;
const int IronSpearmans = 20;
const int IronCavalry = 20;
const int StoneCatapults = 40;
const int HorsesCavalry = 1;

double ArchersDamage = 10;
double SpearmansDamage = 10;
double CavalryDamage = 10;
double CatapultsDamage = 10;

double ArchersHealth = 10;
double SpearmansHealth = 10;
double CavalryHealth = 10;
double CatapultsHealth = 10;

//Player
int PArchersDamageLvl = 1;
int PArchersHealthLvl = 1;
int PSpearmansDamageLvl = 1;
int PSpearmansHealthLvl = 1;
int PCavalryDamageLvl = 1;
int PCavalryHealthLvl = 1;
int PCatapultsDamageLvl = 1;
int PCatapultsHealthLvl = 1;

//Enemy
int EArchersDamageLvl = 1;
int EArchersHealthLvl = 1;
int ESpearmansDamageLvl = 1;
int ESpearmansHealthLvl = 1;
int ECavalryDamageLvl = 1;
int ECavalryHealthLvl = 1;
int ECatapultsDamageLvl = 1;
int ECatapultsHealthLvl = 1;

//Player
int PArchers_Up_Damage_L = PArchersDamageLvl * 40;
int PArchers_Up_Health_G = PArchersHealthLvl * 40;

int PSpearmans_Up_Damage_L = PSpearmansDamageLvl * 20;
int PSpearmans_Up_Damage_I = PSpearmansDamageLvl * 20;
int PSpearmans_Up_Health_G = PSpearmansHealthLvl * 40;

int PCavalry_Up_Damage_I = PCavalryDamageLvl * 40;
int PCavalry_Up_Health_G = PCavalryHealthLvl * 40;

int PCatapults_Up_Damage_L = PCatapultsDamageLvl * 40;
int PCatapults_Up_Damage_S = PCatapultsDamageLvl * 40;
int PCatapults_Up_Health_G = PCatapultsHealthLvl * 80;

//Enemy
int EArchers_Up_Damage_L = EArchersDamageLvl * 40;
int EArchers_Up_Health_G = EArchersHealthLvl * 40;

int ESpearmans_Up_Damage_L = ESpearmansDamageLvl * 20;
int ESpearmans_Up_Damage_I = ESpearmansDamageLvl * 20;
int ESpearmans_Up_Health_G = ESpearmansHealthLvl * 40;

int ECavalry_Up_Damage_I = ECavalryDamageLvl * 40;
int ECavalry_Up_Health_G = ECavalryHealthLvl * 40;

int ECatapults_Up_Damage_L = ECatapultsDamageLvl * 40;
int ECatapults_Up_Damage_S = ECatapultsDamageLvl * 40;
int ECatapults_Up_Health_G = ECatapultsHealthLvl * 80;


//other integers
int Turn = 0;
int CicleNumber = 0;
int HireArmyCicle = 0;
int UpgradeArmyCicle = 0;

int GMIturn = 0;
int LMIturn = 0;
int IMIturn = 0;
int SQIturn = 0;


//Using word "Base" for standart null-action-word
string SkipTutorial = "Base";
string dificulty = "Base";
string FirstChoice = "Base";
string UpgradeChoice = "Base";
string UpgradeAsk = "Base";
string ArmyChoice = "Base";
string FirstArmyChoice = "Base";
string HireArmyChoice = "Base";
string ArmyUpgradeChoise = "Base";
string MarketChoice = "Base";
string BuyChoise = "Base";
string SellChoise = "Base";
string DarkStoreChoise = "Base";
string DarkStoreTemp = "Base";
string MagicChoice = "Base";
string OffenceMagicChoice = "Base";
string DefenceMagicChoice = "Base";
string MagicTemp = "Base";

bool BuyGoldBack = false;
bool BuyLumberBack = false;
bool BuyIronBack = false;
bool BuyStoneBack = false;
bool SellGoldBack = false;
bool SellLumberBack = false;
bool SellIronBack = false;
bool SellStoneBack = false;
bool PlayerSpy = false;
bool PlayerArchersEnchance = false;
bool PlayerSpearmansEnchance = false;
bool PlayerCavalryEnchance = false;
bool PlayerArmourEnchance = false;
bool WeakOffenciveSpell = false;
bool MediumOffenciveSpell = false;
bool PowerfulOffenciveSpell = false;
bool DestructiveOffenciveSpell = false;
bool WeakDefensiveRunes = false;
bool MediumDefensiveRunes = false;
bool PowerfulDefensiveRunes = false;
bool GreatDefensiveRunes = false;
bool GoldMineImprovement = false;
bool LumbermillImprovement = false;
bool IronMineImprovement = false;
bool StoneQuarryImprovement = false;

bool EnemyArchersEnchance = false;
bool EnemySpearmansEnchance = false;
bool EnemyCavalryEnchance = false;
bool EnemyArmourEnchance = false;

//integers that should be debugged
int BuyAmouth = 0;
int SellAmouth = 0;
int HireArchers = 0;
int HireSpearmans = 0;
int HireCavalry = 0;
int HireCatapults = 0;


//Functions
int SendSoldiersNumber();

void hewo();
void clear();
void UpgradeAskCout();
void YourResourses();
void YourResoursesForArmy();
void Income();
void Battle();
void Pause();

int main()
{
	hewo();
	
	//Start of the game (at least i think so)
	system("cls");
	cout << "\nPlease, choose the dificulty.\n\n";

	//dificulty choose
	cout << "1) easy (500 HP for enemy castle)\n";
	cout << "2) normal (800 HP for enemy castle)\n";
	cout << "3) hard (1300 HP for enemy castle)\n";
	while (true)
	{
		if (GetAsyncKeyState(0x31))
		{
			Sleep(500);
			dificulty = "Easy";
			break;
		}

		if (GetAsyncKeyState(0x32))
		{
			Sleep(500);
			dificulty = "Normal";
			break;
		}

		if (GetAsyncKeyState(0x33))
		{
			Sleep(500);
			dificulty = "Hard";
			break;
		}
	}

	if (dificulty == "Easy")
	{
		EnemyCastleCondition = 500;
	}
	else if (dificulty == "Normal")
	{
		EnemyCastleCondition = 800;
	}
	else if (dificulty == "Hard")
	{
		EnemyCastleCondition = 1300;
	}
	while (PlayerCastleCondition > 0 && EnemyCastleCondition > 0)
	{
		system("cls");
		Turn += 1;

		PlayerSpy = false;
		PlayerArchersEnchance = false;
		PlayerSpearmansEnchance = false;
		PlayerCavalryEnchance = false;
		PlayerArmourEnchance = false;

		Income();
		FirstChoice = "Base";
		while (FirstChoice != "Continue")
		{
			cout << "Turn:" << Turn << endl;
			cout << "The condition of your castle - " << PlayerCastleCondition << endl;
			cout << "The condition of enemy castle - " << EnemyCastleCondition << endl;
			YourResourses();
			cout << "People: " << PlayerPeople << "/" << PlayerPeopleLimit << endl;

			cout << "\nWhat are you gonna do, Sir?\n\n";
			cout << "1) Upgrades\n";
			cout << "2) Army\n";
			cout << "3) Market\n";
			cout << "4) Magic\n";
			cout << "5) Continue\n";
			while (true)
			{
				if (GetAsyncKeyState(0x31))
				{
					Sleep(500);
					FirstChoice = "Upgrades";
					break;
				}

				if (GetAsyncKeyState(0x32))
				{
					Sleep(500);
					FirstChoice = "Army";
					break;
				}

				if (GetAsyncKeyState(0x33))
				{
					Sleep(500);
					FirstChoice = "Market";
					break;
				}

				if (GetAsyncKeyState(0x34))
				{
					Sleep(500);
					FirstChoice = "Magic";
					break;
				}

				if (GetAsyncKeyState(0x35))
				{
					Sleep(500);
					FirstChoice = "Continue";
					break;
				}
			}
			if (FirstChoice == "Upgrades")
			{
				system("cls");
				UpgradeChoice = "Base";
				cout << "Which building do you wanna to upgrade, Sir?\n\n";
				CicleNumber = 0;
				while (UpgradeChoice != "Back")
				{
					clear();
					UpgradeChoice = "Base";
					UpgradeAsk = "Base";
					cout << "1) Gold mine - " << PlayerGMlvl;
					if (PlayerGMlvl == 12)
					{
						cout << " - max";
					}
					cout << "\n2) Lumbermill - " << PlayerLMlvl;
					if (PlayerLMlvl == 12)
					{
						cout << " - max";
					}
					cout << "\n3) Iron mine - " << PlayerIMlvl;
					if (PlayerIMlvl == 12)
					{
						cout << " - max";
					}
					cout << "\n4) Stone quarry - " << PlayerSQlvl;
					if (PlayerSQlvl == 12)
					{
						cout << " - max";
					}
					cout << "\n5) Storehouse - " << PlayerSHlvl;
					if (PlayerSHlvl == 12)
					{
						cout << " - max";
					}
					cout << "\n6) Houses - " << PlayerHlvl;
					if (PlayerHlvl == 12)
					{
						cout << " - max";
					}
					cout << "\n7) Barracks - " << PlayerBlvl;
					if (PlayerBlvl == 12)
					{
						cout << " - max";
					}
					cout << "\n8) Walls - " << PlayerWlvl;
					if (PlayerWlvl == 12)
					{
						cout << " - max";
					}
					cout << "\n9) Stable - " << PlayerSlvl;
					if (PlayerSlvl == 12)
					{
						cout << " - max";
					}
					cout << "\nESC - Back " << endl;

					while (true)
					{
						if (GetAsyncKeyState(0x31))
						{
							Sleep(500);
							UpgradeChoice = "Gold mine";
							break;
						}

						if (GetAsyncKeyState(0x32))
						{
							Sleep(500);
							UpgradeChoice = "Lumbermill";
							break;
						}

						if (GetAsyncKeyState(0x33))
						{
							Sleep(500);
							UpgradeChoice = "Iron mine";
							break;
						}

						if (GetAsyncKeyState(0x34))
						{
							Sleep(500);
							UpgradeChoice = "Stone quarry";
							break;
						}

						if (GetAsyncKeyState(0x35))
						{
							Sleep(500);
							UpgradeChoice = "Storehouse";
							break;
						}

						if (GetAsyncKeyState(0x36))
						{
							Sleep(500);
							UpgradeChoice = "Houses";
							break;
						}

						if (GetAsyncKeyState(0x37))
						{
							Sleep(500);
							UpgradeChoice = "Barracks";
							break;
						}

						if (GetAsyncKeyState(0x38))
						{
							Sleep(500);
							UpgradeChoice = "Walls";
							break;
						}

						if (GetAsyncKeyState(0x39))
						{
							Sleep(500);
							UpgradeChoice = "Stable";
							break;
						}

						if (GetAsyncKeyState(VK_ESCAPE))
						{
							Sleep(500);
							UpgradeChoice = "Back";
							break;
						}
					}
					if (UpgradeChoice == "Gold mine")
					{
						if (PlayerGMlvl == 12)
						{
							cout << "\nGold mine has been already fully upgraded, Sir" << endl << endl;
							Pause();
						}
						while (UpgradeAsk != "Back" && PlayerGMlvl < 12)
						{
							system("cls");
							cout << "\nGold mine:" << endl;
							cout << "Current level: " << PlayerGMlvl;
							Player_GM_Up_Gold = PlayerGMlvl * 20;
							Player_GM_Up_Iron = PlayerGMlvl * 20;
							Player_GM_Up_Lumber = PlayerGMlvl * 20;
							cout << "\nUpgrade cost: " << endl;
							cout << "\nGold: " << Player_GM_Up_Gold << endl;
							cout << "Iron: " << Player_GM_Up_Iron << endl;
							cout << "Lumber: " << Player_GM_Up_Lumber << endl;
							YourResourses();
							UpgradeAskCout();
							if (UpgradeAsk == "Upgrade")
							{
								UpgradeAsk = "Base";
								if (PlayerGold >= Player_GM_Up_Gold)
								{
									if (PlayerIron >= Player_GM_Up_Iron)
									{
										if (PlayerLumber >= Player_GM_Up_Lumber)
										{
											PlayerGMlvl += 1;
											PlayerGold -= Player_GM_Up_Gold;
											PlayerIron -= Player_GM_Up_Iron;
											PlayerLumber -= Player_GM_Up_Lumber;
											cout << "\nCastle gold mine has been succesefully upgraded, Sir." << endl << endl;
											Pause();
										}
										else
										{
											cout << "\nNot enough lumber, Sir." << endl << endl;
											Pause();
										}
									}
									else
									{
										cout << "\nNot enough iron, Sir." << endl << endl;
										Pause();
									}
								}
								else
								{
									cout << "\nNot enough gold, Sir." << endl << endl;
									Pause();
								}
							}
						}
					}
					else if (UpgradeChoice == "Lumbermill")
					{
						if (PlayerLMlvl == 12)
						{
							cout << "\nLumbermill has been already fully upgraded, Sir" << endl << endl;
							Pause();
						}
						while (UpgradeAsk != "Back" && PlayerLMlvl < 12)
						{
							system("cls");
							cout << "\nLumbermill:" << endl;
							cout << "Current level: " << PlayerLMlvl << endl;

							Player_LM_Up_Gold = PlayerLMlvl * 20;
							Player_LM_Up_Iron = PlayerLMlvl * 20;
							Player_LM_Up_Lumber = PlayerLMlvl * 20;
							Player_LM_Up_Stone = PlayerLMlvl * 20;
							cout << "\nUpgrade cost: " << endl;
							cout << "\nGold: " << Player_LM_Up_Gold << endl;
							cout << "Iron: " << Player_LM_Up_Iron << endl;
							cout << "Lumber: " << Player_LM_Up_Lumber << endl;
							cout << "Stone: " << Player_LM_Up_Stone << endl;
							YourResourses();
							UpgradeAskCout();
							if (UpgradeAsk == "Upgrade")
							{
								UpgradeAsk = "Base";
								if (PlayerGold >= Player_LM_Up_Gold)
								{
									if (PlayerIron >= Player_LM_Up_Iron)
									{
										if (PlayerLumber >= Player_LM_Up_Lumber)
										{
											if (PlayerStone >= Player_LM_Up_Stone)
											{
												PlayerLMlvl += 1;
												PlayerGold -= Player_LM_Up_Gold;
												PlayerIron -= Player_LM_Up_Iron;
												PlayerLumber -= Player_LM_Up_Lumber;
												PlayerStone -= Player_LM_Up_Stone;
												cout << "\nCastle lumbermill has been succesefully upgraded, Sir." << endl << endl;
												Pause();
											}
											else
											{
												cout << "\nNot enough stone, Sir." << endl << endl;
												Pause();
											}
										}
										else
										{
											cout << "\nNot enough lumber, Sir." << endl << endl;
											Pause();
										}
									}
									else
									{
										cout << "\nNot enough iron, Sir." << endl << endl;
										Pause();
									}
								}
								else
								{
									cout << "\nNot enough gold, Sir." << endl << endl;
									Pause();
								}
							}

						}
					}
					else if (UpgradeChoice == "Iron mine")
					{
						if (PlayerIMlvl == 12)
						{
							cout << "\nIron mine has been already fully upgraded, Sir" << endl << endl;
							Pause();
						}
						while (UpgradeAsk != "Back" && PlayerIMlvl < 12)
						{
							system("cls");
							cout << "\nIron mine:" << endl;
							cout << "Current level: " << PlayerIMlvl << endl;

							Player_IM_Up_Gold = PlayerIMlvl * 20;
							Player_IM_Up_Iron = PlayerIMlvl * 20;
							Player_IM_Up_Lumber = PlayerIMlvl * 20;
							cout << "\nUpgrade cost: " << endl;
							cout << "\nGold: " << Player_IM_Up_Gold << endl;
							cout << "Iron: " << Player_IM_Up_Iron << endl;
							cout << "Lumber: " << Player_IM_Up_Lumber << endl;
							YourResourses();
							UpgradeAskCout();
							if (UpgradeAsk == "Upgrade")
							{
								UpgradeAsk = "Base";
								if (PlayerGold >= Player_IM_Up_Gold)
								{
									if (PlayerIron >= Player_IM_Up_Iron)
									{
										if (PlayerLumber >= Player_IM_Up_Lumber)
										{
											PlayerIMlvl += 1;
											PlayerGold -= Player_IM_Up_Gold;
											PlayerIron -= Player_IM_Up_Iron;
											PlayerLumber -= Player_IM_Up_Lumber;
											cout << "\nCastle iron mine has been succesefully upgraded, Sir." << endl << endl;
											Pause();
										}
										else
										{
											cout << "\nNot enough lumber, Sir." << endl << endl;
											Pause();
										}
									}
									else
									{
										cout << "\nNot enough iron, Sir." << endl << endl;
										Pause();
									}
								}
								else
								{
									cout << "\nNot enough gold, Sir." << endl << endl;
									Pause();
								}
							}
						}
					}
					else if (UpgradeChoice == "Stone quarry")
					{
						if (PlayerSQlvl == 12)
						{
							cout << "\nStone quarry has been already fully upgraded, Sir" << endl << endl;
							Pause();
						}
						while (UpgradeAsk != "Back" && PlayerSQlvl < 12)
						{
							system("cls");
							cout << "\nStone quarry:" << endl;
							cout << "Current level: " << PlayerSQlvl << endl;

							Player_SQ_Up_Gold = PlayerSQlvl * 20;
							Player_SQ_Up_Iron = PlayerSQlvl * 20;
							Player_SQ_Up_Lumber = PlayerSQlvl * 20;
							cout << "\nUpgrade cost: " << endl;
							cout << "\nGold: " << Player_SQ_Up_Gold << endl;
							cout << "Iron: " << Player_SQ_Up_Iron << endl;
							cout << "Lumber: " << Player_SQ_Up_Lumber << endl;
							YourResourses();
							UpgradeAskCout();
							if (UpgradeAsk == "Upgrade")
							{
								UpgradeAsk = "Base";
								if (PlayerGold >= Player_SQ_Up_Gold)
								{
									if (PlayerIron >= Player_SQ_Up_Iron)
									{
										if (PlayerLumber >= Player_SQ_Up_Lumber)
										{
											PlayerSQlvl += 1;
											PlayerGold -= Player_SQ_Up_Gold;
											PlayerIron -= Player_SQ_Up_Iron;
											PlayerLumber -= Player_SQ_Up_Lumber;
											cout << "\nCastle stone quarry has been succesefully upgraded, Sir." << endl << endl;
											Pause();
										}
										else
										{
											cout << "\nNot enough lumber, Sir." << endl << endl;
											Pause();
										}
									}
									else
									{
										cout << "\nNot enough iron, Sir." << endl << endl;
										Pause();
									}
								}
								else
								{
									cout << "\nNot enough gold, Sir." << endl << endl;
									Pause();
								}
							}
						}
					}
					else if (UpgradeChoice == "Storehouse")
					{
						if (PlayerSHlvl == 12)
						{
							cout << "\nStorehouse has been already fully upgraded, Sir" << endl << endl;
							Pause();
						}
						while (UpgradeAsk != "Back" && PlayerSHlvl < 12)
						{
							system("cls");
							cout << "\nStorehouse:" << endl;
							cout << "Current level: " << PlayerSHlvl << endl;

							Player_SH_Up_Gold = PlayerSHlvl * 20;
							Player_SH_Up_Iron = PlayerSHlvl * 20;
							Player_SH_Up_Lumber = PlayerSHlvl * 20;
							Player_SH_Up_Stone = PlayerSHlvl * 20;
							cout << "\nUpgrade cost: " << endl;
							cout << "\nGold: " << Player_SH_Up_Gold << endl;
							cout << "Iron: " << Player_SH_Up_Iron << endl;
							cout << "Lumber: " << Player_SH_Up_Lumber << endl;
							cout << "Stone: " << Player_SH_Up_Stone << endl;
							YourResourses();
							UpgradeAskCout();
							if (UpgradeAsk == "Upgrade")
							{
								UpgradeAsk = "Base";
								if (PlayerGold >= Player_SH_Up_Gold)
								{
									if (PlayerIron >= Player_SH_Up_Iron)
									{
										if (PlayerLumber >= Player_SH_Up_Lumber)
										{
											if (PlayerStone >= Player_SH_Up_Stone)
											{
												PlayerSHlvl += 1;
												PlayerGold -= Player_SH_Up_Gold;
												PlayerIron -= Player_SH_Up_Iron;
												PlayerLumber -= Player_SH_Up_Lumber;
												PlayerStone -= Player_SH_Up_Stone;
												PlayerResourceLimit = 500 + 150 * PlayerSHlvl;
												cout << "\nCastle storehouse has been succesefully upgraded, Sir." << endl << endl;
												Pause();
											}
											else
											{
												cout << "\nNot enough stone, Sir." << endl << endl;
												Pause();
											}
										}
										else
										{
											cout << "\nNot enough lumber, Sir." << endl << endl;
											Pause();
										}
									}
									else
									{
										cout << "\nNot enough iron, Sir." << endl << endl;
										Pause();
									}
								}
								else
								{
									cout << "\nNot enough gold, Sir." << endl << endl;
									Pause();
								}
							}
						}
					}
					else if (UpgradeChoice == "Houses")
					{
						if (PlayerHlvl == 12)
						{
							cout << "\nCastle houses has been already fully upgraded, Sir" << endl << endl;
							Pause();
						}
						while (UpgradeAsk != "Back" && PlayerHlvl < 12)
						{
							system("cls");
							cout << "\nHouses:" << endl;
							cout << "Current level: " << PlayerHlvl << endl;

							Player_H_Up_Gold = PlayerHlvl * 20;
							Player_H_Up_Iron = PlayerHlvl * 20;
							Player_H_Up_Lumber = PlayerHlvl * 20;
							Player_H_Up_Stone = PlayerHlvl * 20;
							cout << "\nUpgrade cost: " << endl;
							cout << "\nGold: " << Player_H_Up_Gold << endl;
							cout << "Iron: " << Player_H_Up_Iron << endl;
							cout << "Lumber: " << Player_H_Up_Lumber << endl;
							cout << "Stone: " << Player_H_Up_Stone << endl;
							YourResourses();
							UpgradeAskCout();
							if (UpgradeAsk == "Upgrade")
							{
								UpgradeAsk = "Base";
								if (PlayerGold >= Player_H_Up_Gold)
								{
									if (PlayerIron >= Player_H_Up_Iron)
									{
										if (PlayerLumber >= Player_H_Up_Lumber)
										{
											if (PlayerStone >= Player_H_Up_Stone)
											{
												PlayerHlvl += 1;
												PlayerGold -= Player_H_Up_Gold;
												PlayerIron -= Player_H_Up_Iron;
												PlayerLumber -= Player_H_Up_Lumber;
												PlayerStone -= Player_H_Up_Stone;
												PlayerPeopleLimit = 10 * PlayerHlvl;
												cout << "\nCastle houses has been succesefully upgraded, Sir." << endl << endl;
												Pause();
											}
											else
											{
												cout << "\nNot enough stone, Sir." << endl << endl;
												Pause();
											}
										}
										else
										{
											cout << "\nNot enough lumber, Sir." << endl << endl;
											Pause();
										}
									}
									else
									{
										cout << "\nNot enough iron, Sir." << endl << endl;
										Pause();
									}
								}
								else
								{
									cout << "\nNot enough gold, Sir." << endl << endl;
									Pause();
								}
							}
						}
					}
					else if (UpgradeChoice == "Barracks")
					{
						if (PlayerBlvl == 12)
						{
							cout << "\nBarracks has been already fully upgraded, Sir" << endl << endl;
							Pause();
						}
						while (UpgradeAsk != "Back" && PlayerBlvl < 12)
						{
							system("cls");
							cout << "\nBarracks:" << endl;
							cout << "Current level: " << PlayerBlvl << endl;

							Player_B_Up_Gold = PlayerBlvl * 20;
							Player_B_Up_Iron = PlayerBlvl * 20;
							Player_B_Up_Lumber = PlayerBlvl * 20;
							Player_B_Up_Stone = PlayerBlvl * 20;
							cout << "\nUpgrade cost: " << endl;
							cout << "\nGold: " << Player_B_Up_Gold << endl;
							cout << "Iron: " << Player_B_Up_Iron << endl;
							cout << "Lumber: " << Player_B_Up_Lumber << endl;
							cout << "Stone: " << Player_B_Up_Stone << endl;
							YourResourses();
							UpgradeAskCout();
							if (UpgradeAsk == "Upgrade")
							{
								UpgradeAsk = "Base";
								if (PlayerGold >= Player_B_Up_Gold)
								{
									if (PlayerIron >= Player_B_Up_Iron)
									{
										if (PlayerLumber >= Player_B_Up_Lumber)
										{
											if (PlayerStone >= Player_B_Up_Stone)
											{
												PlayerBlvl += 1;
												PlayerGold -= Player_B_Up_Gold;
												PlayerIron -= Player_B_Up_Iron;
												PlayerLumber -= Player_B_Up_Lumber;
												PlayerStone -= Player_B_Up_Stone;
												PlayerArmyLimit = 10 * PlayerBlvl;
												cout << "\nCastle barracks has been succesefully upgraded, Sir." << endl << endl;
												Pause();
											}
											else
											{
												cout << "\nNot enough stone, Sir." << endl << endl;
												Pause();
											}
										}
										else
										{
											cout << "\nNot enough lumber, Sir." << endl << endl;
											Pause();
										}
									}
									else
									{
										cout << "\nNot enough iron, Sir." << endl << endl;
										Pause();
									}
								}
								else
								{
									cout << "\nNot enough gold, Sir." << endl << endl;
									Pause();
								}
							}
						}
					}
					else if (UpgradeChoice == "Walls")
					{
						if (PlayerWlvl == 12)
						{
							cout << "\nCastle walls has been already fully upgraded, Sir" << endl << endl;
							Pause();
						}
						while (UpgradeAsk != "Back" && PlayerWlvl < 12)
						{
							system("cls");
							cout << "\nWallss:" << endl;
							cout << "Current level: " << PlayerWlvl << endl;

							Player_W_Up_Gold = PlayerWlvl * 20;
							Player_W_Up_Iron = PlayerWlvl * 20;
							Player_W_Up_Lumber = PlayerWlvl * 20;
							Player_W_Up_Stone = PlayerWlvl * 60;
							cout << "\nUpgrade cost: " << endl;
							cout << "\nGold: " << Player_W_Up_Gold << endl;
							cout << "Iron: " << Player_W_Up_Iron << endl;
							cout << "Lumber: " << Player_W_Up_Lumber << endl;
							cout << "Stone: " << Player_W_Up_Stone << endl;
							YourResourses();
							UpgradeAskCout();
							if (UpgradeAsk == "Upgrade")
							{
								UpgradeAsk = "Base";
								if (PlayerGold >= Player_W_Up_Gold)
								{
									if (PlayerIron >= Player_W_Up_Iron)
									{
										if (PlayerLumber >= Player_W_Up_Lumber)
										{
											if (PlayerStone >= Player_W_Up_Stone)
											{
												PlayerWlvl += 1;
												PlayerGold -= Player_W_Up_Gold;
												PlayerIron -= Player_W_Up_Iron;
												PlayerLumber -= Player_W_Up_Lumber;
												PlayerStone -= Player_W_Up_Stone;
												PlayerWallsLimit = PlayerWlvl * 10;
												cout << "\nCastle walls has been succesefully upgraded, Sir." << endl << endl;
												Pause();
											}
											else
											{
												cout << "\nNot enough stone, Sir." << endl << endl;
												Pause();
											}
										}
										else
										{
											cout << "\nNot enough lumber, Sir." << endl << endl;
											Pause();
										}
									}
									else
									{
										cout << "\nNot enough iron, Sir." << endl << endl;
										Pause();
									}
								}
								else
								{
									cout << "\nNot enough gold, Sir." << endl << endl;
									Pause();
								}
							}
						}
					}
					else if (UpgradeChoice == "Stable")
					{
						if (PlayerSlvl == 12)
						{
							cout << "\nStable has been already fully upgraded, Sir" << endl << endl;
							Pause();
						}
						while (UpgradeAsk != "Back" && PlayerSlvl < 12)
						{
							system("cls");
							cout << "\nStable:" << endl;
							cout << "Current level: " << PlayerSlvl << endl;

							Player_S_Up_Gold = PlayerSlvl * 20;
							Player_S_Up_Gold = PlayerSlvl * 20;
							Player_S_Up_Lumber = PlayerSlvl * 20;
							Player_S_Up_Stone = PlayerSlvl * 20;
							cout << "\nUpgrade cost: " << endl;
							cout << "\nGold: " << PlayerSlvl * 20 << endl;
							cout << "Iron: " << PlayerSlvl * 20 << endl;
							cout << "Lumber: " << PlayerSlvl * 20 << endl;
							cout << "Stone: " << PlayerSlvl * 20 << endl;
							YourResourses();
							UpgradeAskCout();
							if (UpgradeAsk == "Upgrade")
							{
								UpgradeAsk = "Base";
								if (PlayerGold >= Player_S_Up_Gold)
								{
									if (PlayerIron >= Player_S_Up_Iron)
									{
										if (PlayerLumber >= Player_S_Up_Lumber)
										{
											if (PlayerStone >= Player_S_Up_Stone)
											{
												PlayerSlvl += 1;
												PlayerGold -= Player_S_Up_Gold;
												PlayerIron -= Player_S_Up_Iron;
												PlayerLumber -= Player_S_Up_Lumber;
												PlayerStone -= Player_S_Up_Stone;
												PlayerHorses = 5 * PlayerSlvl;
												cout << "\nCastle stable has been succesefully upgraded, Sir." << endl << endl;
												Pause();
											}
											else
											{
												cout << "\nNot enough stone, Sir." << endl << endl;
												Pause();
											}
										}
										else
										{
											cout << "\nNot enough lumber, Sir." << endl << endl;
											Pause();
										}
									}
									else
									{
										cout << "\nNot enough iron, Sir." << endl << endl;
										Pause();
									}
								}
								else
								{
									cout << "\nNot enough gold, Sir." << endl << endl;
									Pause();
								}
							}
						}
					}
					CicleNumber += 1;
				}
			}
			else if (FirstChoice == "Army")
			{
				ArmyChoice = "Base";

				while (ArmyChoice != "Back")
				{
					FirstArmyChoice = "Base";
					ArmyUpgradeChoise = "Base";
					system("cls");
					cout << "Your army, Sir:\n\n";
					cout << "Total units: " << PlayerArchers + PlayerSpearmans + PlayerCavalry + PlayerCatapults << endl;
					cout << "Archers: " << PlayerArchers << endl;
					cout << "Spearmans: " << PlayerSpearmans << endl;
					cout << "Cavalry: " << PlayerCavalry << endl;
					cout << "Catapults: " << PlayerCatapults << endl;

					ArmyChoice = "Base";
					cout << "\n1) Hire" << endl;
					cout << "2) Upgrade army" << endl;
					cout << "ESC - Back" << endl;
					while (true)
					{
						if (GetAsyncKeyState(0x31))
						{
							Sleep(500);
							ArmyChoice = "Hire";
							break;
						}

						if (GetAsyncKeyState(0x32))
						{
							Sleep(500);
							ArmyChoice = "Upgrade";
							break;
						}

						if (GetAsyncKeyState(VK_ESCAPE))
						{
							Sleep(500);
							ArmyChoice = "Back";
							break;
						}
					}

					if (ArmyChoice == "Hire")
					{
						while (FirstArmyChoice != "Back")
						{
							FirstArmyChoice = "Base";
							HireArmyChoice = "Base";
							HireArmyCicle = 0;

							system("cls");
							cout << "Your army, Sir:\n\n";
							cout << "Total units: " << PlayerArchers + PlayerSpearmans + PlayerCavalry + PlayerCatapults << endl;
							cout << "Archers: " << PlayerArchers << endl;
							cout << "Spearmans: " << PlayerSpearmans << endl;
							cout << "Cavalry: " << PlayerCavalry << endl;
							cout << "Catapults: " << PlayerCatapults << endl;

							YourResoursesForArmy();
							cout << "\n1) Archers: " << endl;
							cout << "Gold: " << GoldArchers << ", Lumber: " << LumberArchers << ", People: " << PeopleArchers << endl;
							cout << "\n2) Spearmans: " << endl;
							cout << "Gold: " << GoldSpearmans << ", Lumber: " << LumberSpearmans << ", Iron: " << IronSpearmans << ", People: " << PeopleSpearmans << endl;
							cout << "\n3) Cavalry: " << endl;
							cout << "Gold: " << GoldCavalry << ", Iron: " << IronCavalry << ", People: " << PeopleCavalry << ", Horses: " << HorsesCavalry << endl;
							cout << "\n4) Catapults: " << endl;
							cout << "Gold: " << GoldCatapults << ", Lumber: " << LumberCatapults << ", Stone: " << StoneCatapults << ", People: " << PeopleCatapults << endl;
							cout << "\nESC - Back" << endl << endl;

							while (true)
							{
								if (GetAsyncKeyState(0x31))
								{
									Sleep(500);
									FirstArmyChoice = "Archers";
									break;
								}

								if (GetAsyncKeyState(0x32))
								{
									Sleep(500);
									FirstArmyChoice = "Spearmans";
									break;
								}

								if (GetAsyncKeyState(0x33))
								{
									Sleep(500);
									FirstArmyChoice = "Cavalry";
									break;
								}

								if (GetAsyncKeyState(0x34))
								{
									Sleep(500);
									FirstArmyChoice = "Catapults";
									break;
								}

								if (GetAsyncKeyState(VK_ESCAPE))
								{
									Sleep(500);
									FirstArmyChoice = "Back";
									break;
								}
							}

							if (FirstArmyChoice == "Archers" || FirstArmyChoice == "Spearmans" || FirstArmyChoice == "Cavalry" || FirstArmyChoice == "Catapults")
							{
								while (HireArmyChoice != "Back")
								{
									if (HireArmyCicle == 0)
									{
										system("cls");
									}
									if (FirstArmyChoice == "Archers")
									{
										HireArchers = 0;
										YourResoursesForArmy();
										cout << "\nResourses needed for 1 archer:" << endl;
										cout << "Gold: " << GoldArchers << ", Lumber: " << LumberArchers << ", People: " << PeopleArchers << endl;

										cout << "\nHow much archers do you want to hire, Sir?" << endl;
										cout << "1) 1 arhcer" << endl;
										cout << "2) 3 archers" << endl;
										cout << "3) 5 archers" << endl;
										cout << "4) 10 archers" << endl;
										cout << "5) 25 archers" << endl;
										cout << "ESC - back" << endl << endl;

										while (true)
										{
											if (GetAsyncKeyState(0x31))
											{
												Sleep(500);
												HireArchers = 1;
												break;
											}

											if (GetAsyncKeyState(0x32))
											{
												Sleep(500);
												HireArchers = 3;
												break;
											}

											if (GetAsyncKeyState(0x33))
											{
												Sleep(500);
												HireArchers = 5;
												break;
											}

											if (GetAsyncKeyState(0x34))
											{
												Sleep(500);
												HireArchers = 10;
												break;
											}

											if (GetAsyncKeyState(0x35))
											{
												Sleep(500);
												HireArchers = 25;
												break;
											}

											if (GetAsyncKeyState(VK_ESCAPE))
											{
												Sleep(500);
												HireArmyChoice = "Back";
												break;
											}
										}
										if ((HireArchers > 0) && (PlayerGold >= (HireArchers * GoldArchers)) && (PlayerLumber >= (HireArchers * LumberArchers)) && (PlayerPeople >= (HireArchers * PeopleArchers)) && ((HireArchers + PlayerArchers + PlayerSpearmans + PlayerCavalry + PlayerCatapults) <= PlayerArmyLimit))
										{
											system("cls");
											PlayerArchers += HireArchers;
											PlayerGold -= (HireArchers * GoldArchers);
											PlayerLumber -= (HireArchers * LumberArchers);
											PlayerPeople -= (HireArchers * PeopleArchers);
											cout << "\nYou have succesefully hired " << HireArchers << " archers, Sir." << endl;
											cout << "Now we have " << PlayerArchers << " archers, Sir." << endl << endl;
										}
										else if (PlayerGold < (HireArchers * GoldArchers))
										{
											system("cls");

											cout << "\nNot enough gold, Sir." << endl;
										}
										else if (PlayerLumber < (HireArchers * LumberArchers))
										{
											system("cls");
											cout << "\nNot enough lumber, Sir." << endl;
										}
										else if (PlayerPeople < (HireArchers * PeopleArchers))
										{
											system("cls");
											cout << "\nNot enough people, Sir" << endl;
										}
										else if ((HireArchers + PlayerArchers + PlayerSpearmans + PlayerCavalry + PlayerCatapults) > PlayerArmyLimit)
										{
											system("cls");
											cout << "\nWe can't afford more than " << PlayerArmyLimit << " soldiers, Sir." << endl;
										}
									}
									else if (FirstArmyChoice == "Spearmans")
									{
										HireSpearmans = 0;
										YourResoursesForArmy();
										cout << "\nResourses needed for 1 spearman:" << endl;
										cout << "Gold: " << GoldSpearmans << ", Lumber: " << LumberSpearmans << ", Iron: " << IronSpearmans << ", People: " << PeopleSpearmans << endl;

										cout << "\n How much spearmans do you want to hire, Sir?" << endl;
										cout << "1) 1 spearman" << endl;
										cout << "2) 3 spearmans" << endl;
										cout << "3) 5 spearmans" << endl;
										cout << "4) 10 spearmans" << endl;
										cout << "5) 25 spearmans" << endl;
										cout << "ESC - back" << endl << endl;

										while (true)
										{
											if (GetAsyncKeyState(0x31))
											{
												Sleep(500);
												HireSpearmans = 1;
												break;
											}

											if (GetAsyncKeyState(0x32))
											{
												Sleep(500);
												HireSpearmans = 3;
												break;
											}

											if (GetAsyncKeyState(0x33))
											{
												Sleep(500);
												HireSpearmans = 5;
												break;
											}

											if (GetAsyncKeyState(0x34))
											{
												Sleep(500);
												HireSpearmans = 10;
												break;
											}

											if (GetAsyncKeyState(0x35))
											{
												Sleep(500);
												HireSpearmans = 25;
												break;
											}

											if (GetAsyncKeyState(VK_ESCAPE))
											{
												Sleep(500);
												HireArmyChoice = "Back";
												break;
											}
										}

										if ((HireSpearmans > 0) && (PlayerGold >= (HireSpearmans * GoldSpearmans)) && (PlayerLumber >= (HireSpearmans * LumberSpearmans)) && (PlayerIron >= (HireSpearmans * IronSpearmans)) && (PlayerPeople >= (HireSpearmans * PeopleSpearmans)) && ((HireSpearmans + PlayerArchers + PlayerSpearmans + PlayerCavalry + PlayerCatapults) <= PlayerArmyLimit))
										{
											system("cls");
											PlayerSpearmans += HireSpearmans;
											PlayerGold -= (HireSpearmans * GoldSpearmans);
											PlayerLumber -= (HireSpearmans * LumberSpearmans);
											PlayerIron -= (HireSpearmans * IronSpearmans);
											PlayerPeople -= (HireSpearmans * PeopleSpearmans);
											cout << "\nYou have succesefully hired " << HireSpearmans << " spearmans, Sir." << endl;
											cout << "Now we have " << PlayerSpearmans << " spearmans, Sir." << endl << endl;
										}
										else if (PlayerGold < (HireSpearmans * GoldSpearmans))
										{
											system("cls");
											cout << "\nNot enough gold, Sir." << endl;
										}
										else if (PlayerLumber < (HireSpearmans * LumberSpearmans))
										{
											system("cls");
											cout << "\nNot enough lumber, Sir." << endl;
										}
										else if (PlayerIron < (HireSpearmans * IronSpearmans))
										{
											system("cls");
											cout << "\nNot enough iron, Sir." << endl;
										}
										else if (PlayerPeople < (HireSpearmans * PeopleSpearmans))
										{
											system("cls");
											cout << "\nNot enough people, Sir" << endl;
										}
										else if ((HireSpearmans + PlayerArchers + PlayerSpearmans + PlayerCavalry + PlayerCatapults) > PlayerArmyLimit)
										{
											system("cls");
											cout << "\nWe can't afford more than " << PlayerArmyLimit << " soldiers, Sir." << endl;
										}
									}
									else if (FirstArmyChoice == "Cavalry")
									{

										HireCavalry = 0;
										YourResoursesForArmy();
										cout << "\nResourses needed for 1 cavalry unit:" << endl;
										cout << "Gold: " << GoldCavalry << ", Iron: " << IronCavalry << ", People: " << PeopleCavalry << ", Horses: " << HorsesCavalry << endl;

										cout << "\n How much cavalry units do you want to hire, Sir?" << endl;
										cout << "1) 1 unit" << endl;
										cout << "2) 3 units" << endl;
										cout << "3) 5 units" << endl;
										cout << "4) 10 units" << endl;
										cout << "5) 25 units" << endl;
										cout << "ESC - back" << endl << endl;

										while (true)
										{
											if (GetAsyncKeyState(0x31))
											{
												Sleep(500);
												HireCavalry = 1;
												break;
											}

											if (GetAsyncKeyState(0x32))
											{
												Sleep(500);
												HireCavalry = 3;
												break;
											}

											if (GetAsyncKeyState(0x33))
											{
												Sleep(500);
												HireCavalry = 5;
												break;
											}

											if (GetAsyncKeyState(0x34))
											{
												Sleep(500);
												HireCavalry = 10;
												break;
											}

											if (GetAsyncKeyState(0x35))
											{
												Sleep(500);
												HireCavalry = 25;
												break;
											}

											if (GetAsyncKeyState(VK_ESCAPE))
											{
												Sleep(500);
												HireArmyChoice = "Back";
												break;
											}
										}
										if ((HireCavalry > 0) && (PlayerGold >= (HireCavalry * GoldCavalry)) && (PlayerIron >= (HireCavalry * IronCavalry)) && (PlayerPeople >= (HireCavalry * PeopleCavalry)) && ((HireCavalry + PlayerCavalry) <= PlayerHorses) && ((HireCavalry + PlayerArchers + PlayerSpearmans + PlayerCavalry + PlayerCatapults) <= PlayerArmyLimit))
										{
											system("cls");
											PlayerCavalry += HireCavalry;
											PlayerGold -= (HireCavalry * GoldCavalry);
											PlayerIron -= (HireCavalry * IronCavalry);
											PlayerPeople -= (HireCavalry * PeopleCavalry);
											cout << "\nYou have succesefully hired " << HireCavalry << " cavalry units, Sir." << endl;
											cout << "Now we have " << PlayerCavalry << " cavalry units, Sir." << endl << endl;

										}
										else if (PlayerGold < (HireCavalry * GoldCavalry))
										{
											system("cls");
											cout << "\nNot enough gold, Sir." << endl;
										}
										else if (PlayerIron < (HireCavalry * IronCavalry))
										{
											system("cls");
											cout << "\nNot enough iron, Sir." << endl;
										}
										else if (PlayerPeople < (HireCavalry * PeopleCavalry))
										{
											system("cls");
											cout << "\nNot enough people, Sir" << endl;
										}
										else if ((HireCavalry + PlayerCavalry) > PlayerHorses)
										{
											system("cls");
											cout << "\nWe don't have horses anymore, Sir." << endl;
										}
										else if ((HireCavalry + PlayerArchers + PlayerSpearmans + PlayerCavalry + PlayerCatapults) > PlayerArmyLimit)
										{
											system("cls");
											cout << "\nWe can't afford more than " << PlayerArmyLimit << " soldiers, Sir." << endl;
										}
									}
									else if (FirstArmyChoice == "Catapults")
									{
										HireCatapults = 0;
										YourResoursesForArmy();
										cout << "\nResourses needed for 1 catapult:" << endl;
										cout << "Gold: " << GoldCatapults << ", Lumber: " << LumberCatapults << ", Stone: " << StoneCatapults << ", People: " << PeopleCatapults << endl;

										cout << "\n How much catapults do you want to hire, Sir?" << endl << endl;
										cout << "1) 1 catapult" << endl;
										cout << "2) 3 catapults" << endl;
										cout << "3) 5 catapults" << endl;
										cout << "4) 10 catapults" << endl;
										cout << "ESC - back" << endl << endl;

										while (true)
										{
											if (GetAsyncKeyState(0x31))
											{
												Sleep(500);
												HireCatapults = 1;
												break;
											}

											if (GetAsyncKeyState(0x32))
											{
												Sleep(500);
												HireCatapults = 3;
												break;
											}

											if (GetAsyncKeyState(0x33))
											{
												Sleep(500);
												HireCatapults = 5;
												break;
											}

											if (GetAsyncKeyState(0x34))
											{
												Sleep(500);
												HireCatapults = 10;
												break;
											}

											if (GetAsyncKeyState(VK_ESCAPE))
											{
												Sleep(500);
												HireArmyChoice = "Back";
												break;
											}
										}

										if ((HireCatapults > 0) && (PlayerGold >= (HireCatapults * GoldCatapults)) && (PlayerLumber >= (HireCatapults * LumberCatapults)) && ((PlayerStone) >= (HireCatapults * StoneCatapults)) && (PlayerPeople >= (HireCatapults * PeopleCatapults)) && ((HireCatapults + PlayerArchers + PlayerSpearmans + PlayerCavalry + PlayerCatapults) <= PlayerArmyLimit))
										{
											system("cls");
											PlayerCatapults += HireCatapults;
											PlayerGold -= (HireCatapults * GoldCatapults);
											PlayerLumber -= (HireCatapults * LumberCatapults);
											PlayerStone -= (HireCatapults * StoneCatapults);
											PlayerPeople -= (HireCatapults * PeopleCatapults);
											cout << "\nYou have succesefully hired " << HireCatapults << " catapults, Sir." << endl;
											cout << "Now we have " << PlayerCatapults << " catapults, Sir." << endl << endl;
										}
										else if (PlayerGold < (HireCatapults * GoldCatapults))
										{
											system("cls");
											cout << "\nNot enough gold, Sir." << endl;
										}
										else if (PlayerLumber < (HireCatapults * LumberCatapults))
										{
											system("cls");
											cout << "\nNot enough lumber, Sir." << endl;
										}
										else if (PlayerStone < (HireCatapults * StoneCatapults))
										{
											system("cls");
											cout << "\nNot enough stone, Sir." << endl;
										}
										else if (PlayerPeople < (HireCatapults * PeopleCatapults))
										{
											system("cls");
											cout << "\nNot enough people, Sir" << endl;
										}
										else if ((HireCatapults + PlayerArchers + PlayerSpearmans + PlayerCavalry + PlayerCatapults) > PlayerArmyLimit)
										{
											system("cls");
											cout << "\nWe can't afford more than " << PlayerArmyLimit << " soldiers, Sir." << endl;
										}
									}
									HireArmyCicle += 1;
								}
							}
						}
					}
					else if (ArmyChoice == "Upgrade")
					{
						UpgradeArmyCicle = 0;

						while (ArmyUpgradeChoise != "Back")
						{
							ArmyUpgradeChoise = "Base";
							
							PArchers_Up_Damage_L = PArchersDamageLvl * 40;
							PArchers_Up_Health_G = PArchersHealthLvl * 40;
							PSpearmans_Up_Damage_L = PSpearmansDamageLvl * 20;
							PSpearmans_Up_Damage_I = PSpearmansDamageLvl * 20;
							PSpearmans_Up_Health_G = PSpearmansHealthLvl * 40;
							PCavalry_Up_Damage_I = PCavalryDamageLvl * 40;
							PCavalry_Up_Health_G = PCavalryHealthLvl * 40;
							PCatapults_Up_Damage_L = PCatapultsDamageLvl * 40;
							PCatapults_Up_Damage_S = PCatapultsDamageLvl * 40;
							PCatapults_Up_Health_G = PCatapultsHealthLvl * 80;

							if (UpgradeArmyCicle == 0)
							{
								system("cls");
							}

							cout << "Your army upgrades, Sir:" << endl << endl;
							cout << "Archers: \nDamage = " << (ArchersDamage * PArchersDamageLvl) << ", Health = " << (ArchersHealth * PArchersHealthLvl) << endl << endl;
							cout << "Spearmans: \nDamage = " << (SpearmansDamage * PSpearmansDamageLvl) << ", Health = " << (SpearmansHealth * PSpearmansHealthLvl) << endl << endl;
							cout << "Cavalry: \nDamage = " << (CavalryDamage * PCavalryDamageLvl) << ", Health = " << (CavalryHealth * PCavalryHealthLvl) << endl << endl;
							cout << "Catapults: \nDamage = " << (CatapultsDamage * PCatapultsDamageLvl) << ", Health = " << (CatapultsHealth * PCatapultsHealthLvl) << endl << endl;

							YourResourses();

							cout << "\nChoose the upgrade, Sir:" << endl << endl;
							cout << "1) Archers Damage: " << PArchers_Up_Damage_L << " Lumber" << endl;
							cout << "2) Archers Health: " << PArchers_Up_Health_G << " Gold" << endl << endl;
							cout << "3) Spearmans Damage: " << PSpearmans_Up_Damage_L << " Lumber, " << PSpearmans_Up_Damage_I << " Iron" << endl;
							cout << "4) Spearmans Health: " << PSpearmans_Up_Health_G << " Gold" << endl << endl;
							cout << "5) Cavalry Damage: " << PCavalry_Up_Damage_I << " Iron" << endl;
							cout << "6) Cavalry Health: " << PCavalry_Up_Health_G << " Gold" << endl << endl;
							cout << "7) Catapults Damage: " << PCatapults_Up_Damage_L << " Lumber, " << PCatapults_Up_Damage_S << " Stone" << endl;
							cout << "8) Catapults Health: " << PCatapults_Up_Health_G << " Gold" << endl << endl;
							cout << "ESC - Back" << endl << endl;

							while (true)
							{
								if (GetAsyncKeyState(0x31))
								{
									Sleep(500);
									ArmyUpgradeChoise = "Archers damage";
									break;
								}

								if (GetAsyncKeyState(0x32))
								{
									Sleep(500);
									ArmyUpgradeChoise = "Archers health";
									break;
								}

								if (GetAsyncKeyState(0x33))
								{
									Sleep(500);
									ArmyUpgradeChoise = "Spearmans damage";
									break;
								}

								if (GetAsyncKeyState(0x34))
								{
									Sleep(500);
									ArmyUpgradeChoise = "Spearmans health";
									break;
								}

								if (GetAsyncKeyState(0x35))
								{
									Sleep(500);
									ArmyUpgradeChoise = "Cavalry damage";
									break;
								}

								if (GetAsyncKeyState(0x36))
								{
									Sleep(500);
									ArmyUpgradeChoise = "Cavalry health";
									break;
								}

								if (GetAsyncKeyState(0x37))
								{
									Sleep(500);
									ArmyUpgradeChoise = "Catapults damage";
									break;
								}

								if (GetAsyncKeyState(0x38))
								{
									Sleep(500);
									ArmyUpgradeChoise = "Catapults health";
									break;
								}

								if (GetAsyncKeyState(VK_ESCAPE))
								{
									Sleep(500);
									ArmyUpgradeChoise = "Back";
									break;
								}
							}

							if (ArmyUpgradeChoise == "Archers damage")
							{
								system("cls");

								if (PlayerLumber >= PArchers_Up_Damage_L)
								{
									PArchersDamageLvl += 1;
									PlayerLumber -= PArchers_Up_Damage_L;
									cout << "\nWe have succesefully upgraded the weapon of our archers, Sir!" << endl << endl;
								}
								else
								{
									cout << "\nNot enough lumber, Sir." << endl << endl;
								}
							}
							else if (ArmyUpgradeChoise == "Archers health")
							{
								system("cls");

								if (PlayerGold >= PArchers_Up_Health_G)
								{
									PArchersHealthLvl += 1;
									PlayerGold -= PArchers_Up_Health_G;
									cout << "\nWe have succesefully upgraded the armour of our archers, Sir!" << endl << endl;
								}
								else
								{
									cout << "\nNot enough gold, Sir." << endl << endl;
								}
							}
							else if (ArmyUpgradeChoise == "Spearmans damage")
							{
								system("cls");

								if (PlayerLumber >= PSpearmans_Up_Damage_L && PlayerIron >= PSpearmans_Up_Damage_I)
								{
									PSpearmansDamageLvl += 1;
									PlayerLumber -= PSpearmans_Up_Damage_L;
									PlayerIron -= PSpearmans_Up_Damage_I;
									cout << "\nWe have succesefully upgraded the weapon of our spearmans, Sir!" << endl << endl;
								}
								else if (PlayerLumber < PSpearmans_Up_Damage_L)
								{
									cout << "\nNot enough lumber, Sir." << endl << endl;
								}
								else if (PlayerIron < PSpearmans_Up_Damage_I)
								{
									cout << "\nNot enough iron, Sir." << endl << endl;
								}
							}
							else if (ArmyUpgradeChoise == "Spearmans health")
							{
								system("cls");

								if (PlayerGold >= PSpearmans_Up_Health_G)
								{
									PSpearmansHealthLvl += 1;
									PlayerGold -= PSpearmans_Up_Health_G;
									cout << "\nWe have succesefully upgraded the armour of our spearmans, Sir!" << endl << endl;
								}
								else
								{
									cout << "\nNot enough gold, Sir." << endl << endl;
								}
							}
							else if (ArmyUpgradeChoise == "Cavalry damage")
							{
								system("cls");

								if (PlayerIron >= PCavalry_Up_Damage_I)
								{
									PCavalryDamageLvl += 1;
									PlayerIron -= PCavalry_Up_Damage_I;
									cout << "\nWe have succesefully upgraded the weapon of our cavalry units, Sir!" << endl << endl;
								}
								else
								{
									cout << "\nNot enough iron, Sir." << endl << endl;
								}
							}
							else if (ArmyUpgradeChoise == "Cavalry health")
							{
								system("cls");

								if (PlayerGold >= PCavalry_Up_Health_G)
								{
									PCavalryHealthLvl += 1;
									PlayerGold -= PCavalry_Up_Health_G;
									cout << "\nWe have succesefully upgraded the armour of our cavalry units, Sir!" << endl << endl;
								}
								else
								{
									cout << "\nNot enough gold, Sir." << endl << endl;
								}
							}
							else if (ArmyUpgradeChoise == "Catapults damage")
							{
								system("cls");

								if (PlayerLumber >= PCatapults_Up_Damage_L && PlayerStone >= PCatapults_Up_Damage_S)
								{
									PCatapultsDamageLvl += 1;
									PlayerLumber -= PCatapults_Up_Damage_L;
									PlayerIron -= PCatapults_Up_Damage_S;
									cout << "\nWe have succesefully upgraded the destructive ability of our catapults, Sir!" << endl << endl;
								}
								else if (PlayerLumber < PCatapults_Up_Damage_L)
								{
									cout << "\nNot enough lumber, Sir." << endl << endl;
								}
								else if (PlayerStone < PCatapults_Up_Damage_S)
								{
									cout << "\nNot enough stone, Sir." << endl << endl;
								}
							}
							else if (ArmyUpgradeChoise == "Catapults health")
							{
								system("cls");

								if (PlayerGold >= PCatapults_Up_Health_G)
								{
									PCatapultsHealthLvl += 1;
									PlayerGold -= PCatapults_Up_Health_G;
									cout << "\nWe have succesefully upgraded the armour of our catapults, Sir!" << endl << endl;
								}
								else
								{
									cout << "\nNot enough gold, Sir." << endl << endl;
								}
							}

							UpgradeArmyCicle += 1;
						}
					}
				}
			}
			else if (FirstChoice == "Market")
			{
				MarketChoice = "Base";
				while (MarketChoice != "Back")
				{
					system("cls");
					MarketChoice = "Base";
					BuyChoise = "Base";
					BuyAmouth = 0;
					SellChoise = "Base";
					SellAmouth = 0;
					DarkStoreChoise = "Base";
					cout << "Don't hurry, look around, Sir." << endl << endl;
					YourResourses();
					cout << "Powder: " << PlayerPowder << "/" << PlayerResourceLimit << endl << endl;

					cout << "1) Buy resourses" << endl;
					cout << "2) Sell resourses" << endl;
					cout << "3) Dark store" << endl;
					cout << "ESC - Back" << endl << endl;

					while (true)
					{
						if (GetAsyncKeyState(0x31))
						{
							Sleep(500);
							MarketChoice = "Buy resourses";
							break;
						}

						if (GetAsyncKeyState(0x32))
						{
							Sleep(500);
							MarketChoice = "Sell resourses";
							break;
						}

						if (GetAsyncKeyState(0x33))
						{
							Sleep(500);
							MarketChoice = "Dark store";
							break;
						}

						if (GetAsyncKeyState(VK_ESCAPE))
						{
							Sleep(500);
							MarketChoice = "Back";
							break;
						}
					}

					system("cls");
					if (MarketChoice == "Buy resourses")
					{
						while (BuyChoise != "Back")
						{
							BuyChoise = "Base";
							BuyAmouth = 0;

							BuyGoldBack = false;
							BuyLumberBack = false;
							BuyIronBack = false;
							BuyStoneBack = false;

							YourResourses();
							cout << "Powder: " << PlayerPowder << "/" << PlayerResourceLimit << endl << endl;

							cout << "What do you want to buy, Sir?" << endl << endl;
							cout << "Exchange course 2 powder => 1 resourse" << endl;
							cout << "1) Gold" << endl;
							cout << "2) Lumber" << endl;
							cout << "3) Iron" << endl;
							cout << "4) Stone" << endl;
							cout << "ESC - Back" << endl << endl;

							while (true)
							{
								if (GetAsyncKeyState(0x31))
								{
									Sleep(500);
									BuyChoise = "Gold";
									break;
								}

								if (GetAsyncKeyState(0x32))
								{
									Sleep(500);
									BuyChoise = "Lumber";
									break;
								}

								if (GetAsyncKeyState(0x33))
								{
									Sleep(500);
									BuyChoise = "Iron";
									break;
								}

								if (GetAsyncKeyState(0x34))
								{
									Sleep(500);
									BuyChoise = "Stone";
									break;
								}

								if (GetAsyncKeyState(VK_ESCAPE))
								{
									Sleep(500);
									BuyChoise = "Back";
									break;
								}
							}

							if (BuyChoise == "Gold")
							{
								system("cls");
								while (BuyGoldBack != true)
								{
									BuyAmouth = 0;

									cout << "Powder: " << PlayerPowder << "/" << PlayerResourceLimit << endl;
									cout << "Gold: " << PlayerGold << "/" << PlayerResourceLimit << endl << endl;
									cout << "How much gold do you want to buy, Sir?" << endl << endl;
									cout << "1) 5 gold (10 powder)" << endl;
									cout << "2) 10 gold (20 powder)" << endl;
									cout << "3) 25 gold (50 powder)" << endl;
									cout << "4) 50 gold (100 powder)" << endl;
									cout << "5) 100 gold (200 powder)" << endl;
									cout << "ESC - Back" << endl << endl;

									while (true)
									{
										if (GetAsyncKeyState(0x31))
										{
											Sleep(500);
											BuyAmouth = 5;
											break;
										}

										if (GetAsyncKeyState(0x32))
										{
											Sleep(500);
											BuyAmouth = 10;
											break;
										}

										if (GetAsyncKeyState(0x33))
										{
											Sleep(500);
											BuyAmouth = 25;
											break;
										}

										if (GetAsyncKeyState(0x34))
										{
											Sleep(500);
											BuyAmouth = 50;
											break;
										}

										if (GetAsyncKeyState(0x35))
										{
											Sleep(500);
											BuyAmouth = 100;
											break;
										}

										if (GetAsyncKeyState(VK_ESCAPE))
										{
											Sleep(500);
											BuyGoldBack = true;
											break;
										}
									}

									if (BuyAmouth > 0)
									{
										if (PlayerPowder >= BuyAmouth * 2)
										{
											PlayerPowder -= BuyAmouth * 2;
											PlayerGold += BuyAmouth;
											system("cls");
											cout << "You have succesefully bought " << BuyAmouth << " gold, Sir" << endl << endl;
										}
										else
										{
											system("cls");
											cout << "We have not enough powder, Sir" << endl << endl;
										}
									}
								}
							}
							else if (BuyChoise == "Lumber")
							{
								system("cls");
								while (BuyLumberBack != true)
								{
									BuyAmouth = 0;

									cout << "Powder: " << PlayerPowder << "/" << PlayerResourceLimit << endl;
									cout << "Lumber: " << PlayerLumber << "/" << PlayerResourceLimit << endl << endl;
									cout << "How much lumber do you want to buy, Sir?" << endl << endl;
									cout << "1) 5 lumber (10 powder)" << endl;
									cout << "2) 10 lumber (20 powder)" << endl;
									cout << "3) 25 lumber (50 powder)" << endl;
									cout << "4) 50 lumber (100 powder)" << endl;
									cout << "5) 100 lumber (200 powder)" << endl;
									cout << "ESC - Back" << endl << endl;

									while (true)
									{
										if (GetAsyncKeyState(0x31))
										{
											Sleep(500);
											BuyAmouth = 5;
											break;
										}

										if (GetAsyncKeyState(0x32))
										{
											Sleep(500);
											BuyAmouth = 10;
											break;
										}

										if (GetAsyncKeyState(0x33))
										{
											Sleep(500);
											BuyAmouth = 25;
											break;
										}

										if (GetAsyncKeyState(0x34))
										{
											Sleep(500);
											BuyAmouth = 50;
											break;
										}

										if (GetAsyncKeyState(0x35))
										{
											Sleep(500);
											BuyAmouth = 100;
											break;
										}

										if (GetAsyncKeyState(VK_ESCAPE))
										{
											Sleep(500);
											BuyLumberBack = true;
											break;
										}
									}

									if (BuyAmouth > 0)
									{
										if (PlayerPowder >= BuyAmouth * 2)
										{
											PlayerPowder -= BuyAmouth * 2;
											PlayerLumber += BuyAmouth;
											system("cls");
											cout << "You have succesefully bought " << BuyAmouth << " lumber, Sir" << endl << endl;
										}
										else
										{
											system("cls");
											cout << "We have not enough powder, Sir" << endl << endl;
										}
									}
								}
							}
							else if (BuyChoise == "Iron")
							{
								system("cls");
								while (BuyIronBack != true)
								{
									BuyAmouth = 0;

									cout << "Powder: " << PlayerPowder << "/" << PlayerResourceLimit << endl;
									cout << "Iron: " << PlayerIron << "/" << PlayerResourceLimit << endl << endl;
									cout << "How much Iron do you want to buy, Sir?" << endl << endl;
									cout << "1) 5 iron (10 powder)" << endl;
									cout << "2) 10 iron (20 powder)" << endl;
									cout << "3) 25 iron (50 powder)" << endl;
									cout << "4) 50 iron (100 powder)" << endl;
									cout << "5) 100 iron (200 powder)" << endl;
									cout << "ESC - Back" << endl << endl;

									while (true)
									{
										if (GetAsyncKeyState(0x31))
										{
											Sleep(500);
											BuyAmouth = 5;
											break;
										}

										if (GetAsyncKeyState(0x32))
										{
											Sleep(500);
											BuyAmouth = 10;
											break;
										}

										if (GetAsyncKeyState(0x33))
										{
											Sleep(500);
											BuyAmouth = 25;
											break;
										}

										if (GetAsyncKeyState(0x34))
										{
											Sleep(500);
											BuyAmouth = 50;
											break;
										}

										if (GetAsyncKeyState(0x35))
										{
											Sleep(500);
											BuyAmouth = 100;
											break;
										}

										if (GetAsyncKeyState(VK_ESCAPE))
										{
											Sleep(500);
											BuyIronBack = true;
											break;
										}
									}
									if (BuyAmouth > 0)
									{
										if (PlayerPowder >= BuyAmouth * 2)
										{
											PlayerPowder -= BuyAmouth * 2;
											PlayerIron += BuyAmouth;
											system("cls");
											cout << "You have succesefully bought " << BuyAmouth << " Iron, Sir" << endl << endl;
										}
										else
										{
											system("cls");
											cout << "We have not enough powder, Sir" << endl << endl;
										}
									}
								}
							}
							else if (BuyChoise == "Stone")
							{
								system("cls");
								while (BuyStoneBack != true)
								{
									BuyAmouth = 0;

									cout << "Powder: " << PlayerPowder << "/" << PlayerResourceLimit << endl;
									cout << "Stone: " << PlayerStone << "/" << PlayerResourceLimit << endl << endl;
									cout << "How much stone do you want to buy, Sir?" << endl << endl;
									cout << "1) 5 stone (10 powder)" << endl;
									cout << "2) 10 stone (20 powder)" << endl;
									cout << "3) 25 stone (50 powder)" << endl;
									cout << "4) 50 stone (100 powder)" << endl;
									cout << "5) 100 stone (200 powder)" << endl;
									cout << "ESC - Back" << endl << endl;

									while (true)
									{
										if (GetAsyncKeyState(0x31))
										{
											Sleep(500);
											BuyAmouth = 5;
											break;
										}

										if (GetAsyncKeyState(0x32))
										{
											Sleep(500);
											BuyAmouth = 10;
											break;
										}

										if (GetAsyncKeyState(0x33))
										{
											Sleep(500);
											BuyAmouth = 25;
											break;
										}

										if (GetAsyncKeyState(0x34))
										{
											Sleep(500);
											BuyAmouth = 50;
											break;
										}

										if (GetAsyncKeyState(0x35))
										{
											Sleep(500);
											BuyAmouth = 100;
											break;
										}

										if (GetAsyncKeyState(VK_ESCAPE))
										{
											Sleep(500);
											BuyStoneBack = true;
											break;
										}
									}

									if (BuyAmouth > 0)
									{
										if (PlayerPowder >= BuyAmouth * 2)
										{
											PlayerPowder -= BuyAmouth * 2;
											PlayerStone += BuyAmouth;
											system("cls");
											cout << "You have succesefully bought " << BuyAmouth << " stone, Sir" << endl << endl;
										}
										else
										{
											system("cls");
											cout << "We have not enough powder, Sir" << endl << endl;
										}
									}
								}
							}
						}
					}
					else if (MarketChoice == "Sell resourses")
					{
						while (SellChoise != "Back")
						{
							system("cls");

							SellGoldBack = false;
							SellLumberBack = false;
							SellIronBack = false;
							SellStoneBack = false;

							SellChoise = "Base";

							SellAmouth = 0;

							YourResourses();
							cout << "Powder: " << PlayerPowder << "/" << PlayerResourceLimit << endl << endl;

							cout << "What do you want to sell, Sir?" << endl << endl;
							cout << "Exchange course 1 resource => 1 powder" << endl;
							cout << "1) Gold" << endl;
							cout << "2) Lumber" << endl;
							cout << "3) Iron" << endl;
							cout << "4) Stone" << endl;
							cout << "ESC - Back" << endl << endl;

							while (true)
							{
								if (GetAsyncKeyState(0x31))
								{
									Sleep(500);
									SellChoise = "Gold";
									break;
								}

								if (GetAsyncKeyState(0x32))
								{
									Sleep(500);
									SellChoise = "Lumber";
									break;
								}

								if (GetAsyncKeyState(0x33))
								{
									Sleep(500);
									SellChoise = "Iron";
									break;
								}

								if (GetAsyncKeyState(0x34))
								{
									Sleep(500);
									SellChoise = "Stone";
									break;
								}

								if (GetAsyncKeyState(VK_ESCAPE))
								{
									Sleep(500);
									SellChoise = "Back";
									break;
								}
							}

							if (SellChoise == "Gold")
							{
								system("cls");
								while (SellGoldBack != true)
								{
									SellAmouth = 0;

									cout << "Powder: " << PlayerPowder << "/" << PlayerResourceLimit << endl;
									cout << "Gold: " << PlayerGold << "/" << PlayerResourceLimit << endl << endl;
									cout << "How much gold do you want to sell, Sir?" << endl << endl;
									cout << "1) 10 gold (10 powder)" << endl;
									cout << "2) 20 gold (20 powder)" << endl;
									cout << "3) 50 gold (50 powder)" << endl;
									cout << "4) 100 gold (100 powder)" << endl;
									cout << "5) 200 gold (200 powder)" << endl;
									cout << "ESC - Back" << endl << endl;

									while (true)
									{
										if (GetAsyncKeyState(0x31))
										{
											Sleep(500);
											SellAmouth = 10;
											break;
										}

										if (GetAsyncKeyState(0x32))
										{
											Sleep(500);
											SellAmouth = 20;
											break;
										}

										if (GetAsyncKeyState(0x33))
										{
											Sleep(500);
											SellAmouth = 50;
											break;
										}

										if (GetAsyncKeyState(0x34))
										{
											Sleep(500);
											SellAmouth = 100;
											break;
										}

										if (GetAsyncKeyState(0x35))
										{
											Sleep(500);
											SellAmouth = 200;
											break;
										}

										if (GetAsyncKeyState(VK_ESCAPE))
										{
											Sleep(500);
											SellGoldBack = true;
											break;
										}
									}

									if (SellAmouth > 0)
									{
										if (PlayerGold >= SellAmouth)
										{
											PlayerPowder += SellAmouth;
											PlayerGold -= SellAmouth;
											system("cls");
											cout << "We have succesefully received " << SellAmouth << " powder, Sir" << endl << endl;
										}
										else
										{
											system("cls");
											cout << "We have not enough gold, Sir" << endl << endl;
										}
									}
								}
							}
							else if (SellChoise == "Lumber")
							{
								system("cls");
								while (SellLumberBack != true)
								{
									SellAmouth = 0;

									cout << "Powder: " << PlayerPowder << "/" << PlayerResourceLimit << endl;
									cout << "Lumber: " << PlayerLumber << "/" << PlayerResourceLimit << endl << endl;
									cout << "How much lumber do you want to sell, Sir?" << endl << endl;
									cout << "1) 10 lumber (10 powder)" << endl;
									cout << "2) 20 lumber (20 powder)" << endl;
									cout << "3) 50 lumber (50 powder)" << endl;
									cout << "4) 100 lumber (100 powder)" << endl;
									cout << "5) 200 lumber (200 powder)" << endl;
									cout << "ESC - Back" << endl << endl;

									while (true)
									{
										if (GetAsyncKeyState(0x31))
										{
											Sleep(500);
											SellAmouth = 10;
											break;
										}

										if (GetAsyncKeyState(0x32))
										{
											Sleep(500);
											SellAmouth = 20;
											break;
										}

										if (GetAsyncKeyState(0x33))
										{
											Sleep(500);
											SellAmouth = 50;
											break;
										}

										if (GetAsyncKeyState(0x34))
										{
											Sleep(500);
											SellAmouth = 100;
											break;
										}

										if (GetAsyncKeyState(0x35))
										{
											Sleep(500);
											SellAmouth = 200;
											break;
										}

										if (GetAsyncKeyState(VK_ESCAPE))
										{
											Sleep(500);
											SellLumberBack = true;
											break;
										}
									}

									if (SellAmouth > 0)
									{
										if (PlayerLumber >= SellAmouth)
										{
											PlayerPowder += SellAmouth;
											PlayerLumber -= SellAmouth;
											system("cls");
											cout << "We have succesefully received " << SellAmouth << " powder, Sir" << endl << endl;
										}
										else
										{
											system("cls");
											cout << "We have not enough lumber, Sir" << endl << endl;
										}
									}
								}
							}
							else if (SellChoise == "Iron")
							{
								system("cls");
								while (SellIronBack != true)
								{
									SellAmouth = 0;

									cout << "Powder: " << PlayerPowder << "/" << PlayerResourceLimit << endl;
									cout << "Iron: " << PlayerIron << "/" << PlayerResourceLimit << endl << endl;
									cout << "How much Iron do you want to buy, Sir?" << endl << endl;
									cout << "How much lumber do you want to sell, Sir?" << endl << endl;
									cout << "1) 10 iron (10 powder)" << endl;
									cout << "2) 20 iron (20 powder)" << endl;
									cout << "3) 50 iron (50 powder)" << endl;
									cout << "4) 100 iron (100 powder)" << endl;
									cout << "5) 200 iron (200 powder)" << endl;
									cout << "ESC - Back" << endl << endl;

									while (true)
									{
										if (GetAsyncKeyState(0x31))
										{
											Sleep(500);
											SellAmouth = 10;
											break;
										}

										if (GetAsyncKeyState(0x32))
										{
											Sleep(500);
											SellAmouth = 20;
											break;
										}

										if (GetAsyncKeyState(0x33))
										{
											Sleep(500);
											SellAmouth = 50;
											break;
										}

										if (GetAsyncKeyState(0x34))
										{
											Sleep(500);
											SellAmouth = 100;
											break;
										}

										if (GetAsyncKeyState(0x35))
										{
											Sleep(500);
											SellAmouth = 200;
											break;
										}

										if (GetAsyncKeyState(VK_ESCAPE))
										{
											Sleep(500);
											SellIronBack = true;
											break;
										}
									}


									if (SellAmouth > 0)
									{
										if (PlayerIron >= SellAmouth)
										{
											PlayerPowder += SellAmouth;
											PlayerIron -= SellAmouth;
											system("cls");
											cout << "We have succesefully received " << SellAmouth << " powder, Sir" << endl << endl;
										}
										else
										{
											system("cls");
											cout << "We have not enough Iron, Sir" << endl << endl;
										}
									}
								}
							}
							else if (SellChoise == "Stone")
							{
								system("cls");
								while (SellStoneBack != true)
								SellAmouth = 0;

								cout << "Powder: " << PlayerPowder << "/" << PlayerResourceLimit << endl;
								cout << "Stone: " << PlayerStone << "/" << PlayerResourceLimit << endl << endl;
								cout << "How much stone do you want to buy, Sir?" << endl << endl;
								cout << "1) 10 stone (10 powder)" << endl;
								cout << "2) 20 stone (20 powder)" << endl;
								cout << "3) 50 stone (50 powder)" << endl;
								cout << "4) 100 stone (100 powder)" << endl;
								cout << "5) 200 stone (200 powder)" << endl;
								cout << "ESC - Back" << endl << endl;

								while (true)
								{
									if (GetAsyncKeyState(0x31))
									{
										Sleep(500);
										SellAmouth = 10;
										break;
									}

									if (GetAsyncKeyState(0x32))
									{
										Sleep(500);
										SellAmouth = 20;
										break;
									}

									if (GetAsyncKeyState(0x33))
									{
										Sleep(500);
										SellAmouth = 50;
										break;
									}

									if (GetAsyncKeyState(0x34))
									{
										Sleep(500);
										SellAmouth = 100;
										break;
									}

									if (GetAsyncKeyState(0x35))
									{
										Sleep(500);
										SellAmouth = 200;
										break;
									}

									if (GetAsyncKeyState(VK_ESCAPE))
									{
										Sleep(500);
										SellStoneBack = true;
										break;
									}
								}


								if (SellAmouth > 0)
								{
									if (PlayerStone >= SellAmouth)
									{
										PlayerPowder += SellAmouth;
										PlayerStone -= SellAmouth;
										system("cls");
										cout << "We have succesefully received " << SellAmouth << " powder, Sir" << endl << endl;
									}
									else
									{
										system("cls");
										cout << "We have not enough Stone, Sir" << endl << endl;
									}
								}
							}
						}
					}
					else if (MarketChoice == "Dark store")
					{
						system("cls");
						while (DarkStoreChoise != "Back")
						{
							DarkStoreChoise = "Base";
							DarkStoreTemp = "Base";

							cout << "Looking for something special, Sir?" << endl << endl;
							cout << "Powder: " << PlayerPowder << "/" << PlayerResourceLimit << endl << endl;

							cout << "1) Hire spies - 50 powder";
							if (PlayerSpy == true)
							{
								cout << " - hired";
							}
							cout << "\n2) Enchant bows - 75 powder";
							if (PlayerArchersEnchance == true)
							{
								cout << " - enchanced";
							}
							cout << "\n3) Enchant spears - 75 powder";
							if (PlayerSpearmansEnchance == true)
							{
								cout << " - enchanced";
							}
							cout << "\n4) Enchant cavalry weapon - 75 powder";
							if (PlayerCavalryEnchance == true)
							{
								cout << " - enchanced";
							}
							cout << "\n5) Enchant armour - 125 powder";
							if (PlayerArmourEnchance == true)
							{
								cout << " - enchanced";
							}
							cout << "\nESC - Back" << endl << endl;

							while (true)
							{
								if (GetAsyncKeyState(0x31))
								{
									Sleep(500);
									DarkStoreChoise = "Hire spies";
									break;
								}

								if (GetAsyncKeyState(0x32))
								{
									Sleep(500);
									DarkStoreChoise = "Enchant bows";
									break;
								}

								if (GetAsyncKeyState(0x33))
								{
									Sleep(500);
									DarkStoreChoise = "Enchant spears";
									break;
								}

								if (GetAsyncKeyState(0x34))
								{
									Sleep(500);
									DarkStoreChoise = "Enchant cavalry weapon";
									break;
								}

								if (GetAsyncKeyState(0x35))
								{
									Sleep(500);
									DarkStoreChoise = "Enchant armour";
									break;
								}

								if (GetAsyncKeyState(VK_ESCAPE))
								{
									Sleep(500);
									DarkStoreChoise = "Back";
									break;
								}
							}

							if (DarkStoreChoise == "Hire spies")
							{
								if (PlayerSpy == false)
								{
									cout << "\nAllows you to see the information about enemy catsle untill the next turn." << endl;
									while (DarkStoreTemp != "Yes" && DarkStoreTemp != "No")
									{
										cout << "\nAre you sure, Sir?" << endl << endl;
										cout << "1) Yes" << endl;
										cout << "2) No" << endl << endl;

										while (true)
										{
											if (GetAsyncKeyState(0x31))
											{
												Sleep(500);
												DarkStoreTemp = "Yes";
												break;
											}

											if (GetAsyncKeyState(0x32))
											{
												Sleep(500);
												DarkStoreTemp = "No";
												break;
											}
										}
										if (DarkStoreTemp == "Yes")
										{
											system("cls");
											if (PlayerPowder >= 50)
											{
												PlayerPowder -= 50;
												PlayerSpy = true;
												cout << "\nWe have succesefully hired the spies at the enemy castle for this turn, Sir" << endl << endl;
											}
											else
											{
												cout << "\nWe have not enough powder, Sir" << endl << endl;
											}
										}
										else
										{
											system("cls");
										}
									}
								}
								else
								{
									system("cls");
									cout << "\nWe have already hired the spies for this turn, Sir" << endl << endl;
								}
							}
							else if (DarkStoreChoise == "Enchant bows")
							{
								if (PlayerArchersEnchance == false)
								{
									cout << "\nIncreases the damage of your archers for 20% untill the next turn" << endl;
									while (DarkStoreTemp != "Yes" && DarkStoreTemp != "No")
									{
										cout << "\nAre you sure, Sir?" << endl << endl;
										cout << "1) Yes" << endl;
										cout << "2) No" << endl << endl;

										while (true)
										{
											if (GetAsyncKeyState(0x31))
											{
												Sleep(500);
												DarkStoreTemp = "Yes";
												break;
											}

											if (GetAsyncKeyState(0x32))
											{
												Sleep(500);
												DarkStoreTemp = "No";
												break;
											}
										}
										if (DarkStoreTemp == "Yes")
										{
											system("cls");
											if (PlayerPowder >= 75)
											{
												PlayerPowder -= 75;
												PlayerArchersEnchance = true;
												cout << "\nWe have succesefully enchanced the weapon of our archers for this turn, Sir" << endl << endl;
											}
											else
											{
												cout << "\nWe have not enough powder, Sir" << endl << endl;
											}
										}
										else
										{
											system("cls");
										}
									}
								}
								else
								{
									system("cls");
									cout << "\nWe have already enchanced the weapon of our archers for this turn, Sir" << endl << endl;
								}
							}
							else if (DarkStoreChoise == "Enchant spears")
							{
								if (PlayerSpearmansEnchance == false)
								{
									cout << "\nIncreases the damage of your spearmans for 20% untill the next turn" << endl;
									while (DarkStoreTemp != "Yes" && DarkStoreTemp != "No")
									{
										cout << "\nAre you sure, Sir?" << endl << endl;
										cout << "1) Yes" << endl;
										cout << "2) No" << endl << endl;

										while (true)
										{
											if (GetAsyncKeyState(0x31))
											{
												Sleep(500);
												DarkStoreTemp = "Yes";
												break;
											}

											if (GetAsyncKeyState(0x32))
											{
												Sleep(500);
												DarkStoreTemp = "No";
												break;
											}
										}
										if (DarkStoreTemp == "Yes")
										{
											system("cls");
											if (PlayerPowder >= 75)
											{
												PlayerPowder -= 75;
												PlayerSpearmansEnchance = true;
												cout << "\nWe have succesefully enchanced the weapon of our spearmans for this turn, Sir" << endl << endl;
											}
											else
											{
												cout << "\nWe have not enough powder, Sir" << endl << endl;
											}
										}
										else
										{
											system("cls");
										}
									}
								}
								else
								{
									system("cls");
									cout << "\nWe have already enchanced the weapon of our spearmans for this turn, Sir" << endl << endl;
								}
							}
							else if (DarkStoreChoise == "Enchant cavalry weapon")
							{
								if (PlayerCavalryEnchance == false)
								{
									cout << "\nIncreases the damage of your cavalry units for 20% untill the next turn" << endl;
									while (DarkStoreTemp != "Yes" && DarkStoreTemp != "No")
									{
										cout << "\nAre you sure, Sir?" << endl << endl;
										cout << "1) Yes" << endl;
										cout << "2) No" << endl << endl;

										while (true)
										{
											if (GetAsyncKeyState(0x31))
											{
												Sleep(500);
												DarkStoreTemp = "Yes";
												break;
											}

											if (GetAsyncKeyState(0x32))
											{
												Sleep(500);
												DarkStoreTemp = "No";
												break;
											}
										}
										if (DarkStoreTemp == "Yes")
										{
											system("cls");
											if (PlayerPowder >= 75)
											{
												PlayerPowder -= 75;
												PlayerCavalryEnchance = true;
												cout << "\nWe have succesefully enchanced the weapon of our cavalry for this turn, Sir" << endl << endl;
											}
											else
											{
												cout << "\nWe have not enough powder, Sir" << endl << endl;
											}
										}
										else
										{
											system("cls");
										}
									}
								}
								else
								{
									system("cls");
									cout << "\nWe have already enchanced the weapon of our cavalry for this turn, Sir" << endl << endl;
								}
							}
							else if (DarkStoreChoise == "Enchant armour")
							{
								if (PlayerArmourEnchance == false)
								{
									cout << "\nIncreases the health of your army for 20% untill the next turn" << endl;
									while (DarkStoreTemp != "Yes" && DarkStoreTemp != "No")
									{
										cout << "\nAre you sure, Sir?" << endl << endl;
										cout << "1) Yes" << endl;
										cout << "2) No" << endl << endl;

										while (true)
										{
											if (GetAsyncKeyState(0x31))
											{
												Sleep(500);
												DarkStoreTemp = "Yes";
												break;
											}

											if (GetAsyncKeyState(0x32))
											{
												Sleep(500);
												DarkStoreTemp = "No";
												break;
											}
										}

										if (DarkStoreTemp == "Y")
										{
											system("cls");
											if (PlayerPowder >= 125)
											{
												PlayerPowder -= 125;
												PlayerArmourEnchance = true;
												cout << "\nWe have succesefully enchanced the armour of our army for this turn, Sir" << endl << endl;
											}
											else
											{
												cout << "\nWe have not enough powder, Sir" << endl << endl;
											}
										}
										else
										{
											system("cls");
										}
									}
								}
								else
								{
									system("cls");
									cout << "\nWe have already enchanced the armour of our army for this turn, Sir" << endl << endl;
								}
							}
						}
					}
				}

			}
			else if (FirstChoice == "Magic")
			{
				MagicChoice = "Base";
				system("cls");
				while (MagicChoice != "Back")
				{
					MagicChoice = "Base";
					OffenceMagicChoice = "Base";
					DefenceMagicChoice = "Base";
					MagicTemp = "Base";

					cout << "Welcome, Sir, how can I help you?" << endl << endl;
					cout << "Powder: " << PlayerPowder << "/" << PlayerResourceLimit << endl << endl;
					cout << "1) Offence magic";
					if (WeakOffenciveSpell == true || MediumOffenciveSpell == true || PowerfulOffenciveSpell == true || DestructiveOffenciveSpell == true)
					{
						cout << " - Activated: ";
						if (WeakOffenciveSpell == true)
						{
							cout << "Weak, ";
						}
						if (MediumOffenciveSpell == true)
						{
							cout << "Medium, ";
						}
						if (PowerfulOffenciveSpell == true)
						{
							cout << "Powerful, ";
						}
						if (DestructiveOffenciveSpell == true)
						{
							cout << "Destructive";
						}
					}
					cout << "\n2) Defence runes";
					if (WeakDefensiveRunes == true || MediumDefensiveRunes == true || PowerfulDefensiveRunes == true || GreatDefensiveRunes == true)
					{
						cout << " - Activated: ";
						if (WeakDefensiveRunes == true)
						{
							cout << "Weak, ";
						}
						if (MediumDefensiveRunes == true)
						{
							cout << "Medium, ";
						}
						if (PowerfulDefensiveRunes == true)
						{
							cout << "Powerful, ";
						}
						if (GreatDefensiveRunes == true)
						{
							cout << "Great";
						}
					}
					cout << "\n3) Gold mine improvement - 75 powder";
					if (GMIturn > 0)
					{
						cout << " - " << GMIturn << " turns remaining";
					}
					cout << "\n4) Lumbermill improvement - 75 powder";
					if (LMIturn > 0)
					{
						cout << " - " << LMIturn << " turns remaining";
					}
					cout << "\n5) Iron mine improvement - 75 powder";
					if (IMIturn > 0)
					{
						cout << " - " << IMIturn << " turns remaining";
					}
					cout << "\n6) Stone quarry improvement - 75 powder";
					if (SQIturn > 0)
					{
						cout << " - " << SQIturn << " turns remaining";
					}
					cout << "\nESC - Back" << endl << endl;

					while (true)
					{
						if (GetAsyncKeyState(0x31))
						{
							Sleep(500);
							MagicChoice = "Offence magic";
							break;
						}

						if (GetAsyncKeyState(0x32))
						{
							Sleep(500);
							MagicChoice = "Defence runes";
							break;
						}

						if (GetAsyncKeyState(0x33))
						{
							Sleep(500);
							MagicChoice = "Gold mine improvement";
							break;
						}

						if (GetAsyncKeyState(0x34))
						{
							Sleep(500);
							MagicChoice = "Lumbermill improvement";
							break;
						}

						if (GetAsyncKeyState(0x35))
						{
							Sleep(500);
							MagicChoice = "Iron mine improvement";
							break;
						}

						if (GetAsyncKeyState(0x36))
						{
							Sleep(500);
							MagicChoice = "Stone quarry improvement";
							break;
						}

						if (GetAsyncKeyState(VK_ESCAPE))
						{
							Sleep(500);
							MagicChoice = "Back";
							break;
						}
					}

					if (MagicChoice == "Offence magic")
					{
						OffenceMagicChoice = "Base";
						system("cls");
						while (OffenceMagicChoice != "Back")
						{
							OffenceMagicChoice = "Base";
							cout << "\nOffence magic:" << endl << endl;
							cout << "Powder: " << PlayerPowder << "/" << PlayerResourceLimit << endl << endl;
							cout << "1) Weak spell - 50 powder";
							if (WeakOffenciveSpell == true)
							{
								cout << " - Activated";
							}
							cout << "\n2) Medium spell - 100 powder";
							if (MediumOffenciveSpell == true)
							{
								cout << " - Activated";
							}
							cout << "\n3) Powerful spell - 150 powder";
							if (PowerfulOffenciveSpell == true)
							{
								cout << " - Activated";
							}
							cout << "\n4) Destructive spell - 200 powder";
							if (DestructiveOffenciveSpell == true)
							{
								cout << " - Activated";
							}
							cout << "\nESC - Back" << endl << endl;

							while (true)
							{
								if (GetAsyncKeyState(0x31))
								{
									Sleep(500);
									OffenceMagicChoice = "Weak spell";
									break;
								}

								if (GetAsyncKeyState(0x32))
								{
									Sleep(500);
									OffenceMagicChoice = "Medium spell";
									break;
								}

								if (GetAsyncKeyState(0x33))
								{
									Sleep(500);
									OffenceMagicChoice = "Powerful spell";
									break;
								}

								if (GetAsyncKeyState(0x34))
								{
									Sleep(500);
									OffenceMagicChoice = "Destructive spell";
									break;
								}

								if (GetAsyncKeyState(VK_ESCAPE))
								{
									Sleep(500);
									OffenceMagicChoice = "Back";
									break;
								}
							}

							if (OffenceMagicChoice == "Weak spell")
							{
								system("cls");
								if (WeakOffenciveSpell == false)
								{
									if (PlayerPowder >= 50)
									{
										PlayerPowder -= 50;
										WeakOffenciveSpell = true;
										cout << "Weak offencive spell has been succecefuly activated, Sir" << endl << endl;
									}
									else
									{
										cout << "We have not enough powder, Sir" << endl << endl;
									}
								}
								else
								{
									cout << "We have already activated this spell, Sir" << endl << endl;
								}
							}
							else if (OffenceMagicChoice == "Medium spell")
							{
								system("cls");
								if (MediumOffenciveSpell == false)
								{
									if (PlayerPowder >= 100)
									{
										PlayerPowder -= 100;
										MediumOffenciveSpell = true;
										cout << "Medium offencive spell has been succecefuly activated, Sir" << endl << endl;
									}
									else
									{
										cout << "We have not enough powder, Sir" << endl << endl;
									}
								}
								else
								{
									cout << "We have already activated this spell, Sir" << endl << endl;
								}
							}
							else if (OffenceMagicChoice == "Powerful spell")
							{
								system("cls");
								if (PowerfulOffenciveSpell == false)
								{
									if (PlayerPowder >= 150)
									{
										PlayerPowder -= 150;
										PowerfulOffenciveSpell = true;
										cout << "Powerful offencive spell has been succecefuly activated, Sir" << endl << endl;
									}
									else
									{
										cout << "We have not enough powder, Sir" << endl << endl;
									}
								}
								else
								{
									cout << "We have already activated this spell, Sir" << endl << endl;
								}
							}
							else if (OffenceMagicChoice == "Destructive spell")
							{
								system("cls");
								if (DestructiveOffenciveSpell == false)
								{
									if (PlayerPowder >= 200)
									{
										PlayerPowder -= 200;
										DestructiveOffenciveSpell = true;
										cout << "Destructive offencive spell has been succecefuly activated, Sir" << endl << endl;
									}
									else
									{
										cout << "We have not enough powder, Sir" << endl << endl;
									}
								}
								else
								{
									cout << "We have already activated this spell, Sir" << endl << endl;
								}
							}
						}
						system("cls");
					}
					else if (MagicChoice == "Defence runes")
					{
						DefenceMagicChoice = "Base";
						system("cls");
						while (DefenceMagicChoice != "Back")
						{
							DefenceMagicChoice = "Base";
							cout << "\nDefence runes:" << endl << endl;
							cout << "Powder: " << PlayerPowder << "/" << PlayerResourceLimit << endl << endl;
							cout << "1) Weak runes - 50 powder";
							if (WeakDefensiveRunes == true)
							{
								cout << " - Activated";
							}
							cout << "\n2) Medium runes - 100 powder";
							if (MediumDefensiveRunes == true)
							{
								cout << " - Activated";
							}
							cout << "\n3) Powerful runes - 150 powder";
							if (PowerfulDefensiveRunes == true)
							{
								cout << " - Activated";
							}
							cout << "\n4) Great runes - 200 powder";
							if (GreatDefensiveRunes == true)
							{
								cout << " - Activated";
							}
							cout << "\nESC - Back" << endl << endl;

							while (true)
							{
								if (GetAsyncKeyState(0x31))
								{
									Sleep(500);
									DefenceMagicChoice = "Weak runes";
									break;
								}

								if (GetAsyncKeyState(0x32))
								{
									Sleep(500);
									DefenceMagicChoice = "Medium runes";
									break;
								}

								if (GetAsyncKeyState(0x33))
								{
									Sleep(500);
									DefenceMagicChoice = "Powerful runes";
									break;
								}

								if (GetAsyncKeyState(0x34))
								{
									Sleep(500);
									DefenceMagicChoice = "Great runes";
									break;
								}

								if (GetAsyncKeyState(VK_ESCAPE))
								{
									Sleep(500);
									DefenceMagicChoice = "Back";
									break;
								}
							}

							if (DefenceMagicChoice == "Weak runes")
							{
								system("cls");
								if (WeakDefensiveRunes == false)
								{
									if (PlayerPowder >= 50)
									{
										PlayerPowder -= 50;
										WeakDefensiveRunes = true;
										cout << "Weak defencive runes has been succecefuly activated, Sir" << endl << endl;
									}
									else
									{
										cout << "We have not enough powder, Sir" << endl << endl;
									}
								}
								else
								{
									cout << "We have already activated this runes, Sir" << endl << endl;
								}
							}
							else if (DefenceMagicChoice == "Medium runes")
							{
								system("cls");
								if (MediumDefensiveRunes == false)
								{
									if (PlayerPowder >= 100)
									{
										PlayerPowder -= 100;
										MediumDefensiveRunes = true;
										cout << "Medium defencive runes has been succecefuly activated, Sir" << endl << endl;
									}
									else
									{
										cout << "We have not enough powder, Sir" << endl << endl;
									}
								}
								else
								{
									cout << "We have already activated this runes, Sir" << endl << endl;
								}
							}
							else if (DefenceMagicChoice == "Powerful runes")
							{
								system("cls");
								if (PowerfulDefensiveRunes == false)
								{
									if (PlayerPowder >= 150)
									{
										PlayerPowder -= 150;
										PowerfulDefensiveRunes = true;
										cout << "Powerful defencive runes has been succecefuly activated, Sir" << endl << endl;
									}
									else
									{
										cout << "We have not enough powder, Sir" << endl << endl;
									}
								}
								else
								{
									cout << "We have already activated this runes, Sir" << endl << endl;
								}
							}
							else if (DefenceMagicChoice == "Great runes")
							{
								system("cls");
								if (GreatDefensiveRunes == false)
								{
									if (PlayerPowder >= 200)
									{
										PlayerPowder -= 200;
										GreatDefensiveRunes = true;
										cout << "Great defencive runes has been succecefuly activated, Sir" << endl << endl;
									}
									else
									{
										cout << "We have not enough powder, Sir" << endl << endl;
									}
								}
								else
								{
									cout << "We have already activated this runes, Sir" << endl << endl;
								}
							}
						}
						system("cls");
					}
					else if (MagicChoice == "Gold mine improvement")
					{
						cout << "\nImproves the gold income for 25% for 3 turns" << endl;
						while (MagicTemp != "Yes" && MagicTemp != "No")
						{
							cout << "\nAre you sure, Sir?" << endl << endl;
							cout << "1) Yes" << endl;
							cout << "2) No" << endl << endl;

							while (true)
							{
								if (GetAsyncKeyState(0x31))
								{
									Sleep(500);
									MagicTemp = "Yes";
									break;
								}

								if (GetAsyncKeyState(0x32))
								{
									Sleep(500);
									MagicTemp = "No";
									break;
								}
							}
							if (MagicTemp == "Yes")
							{
								system("cls");
								if (PlayerPowder >= 75)
								{
									PlayerPowder -= 75;
									GoldMineImprovement = true;
									GMIturn += 3;
									cout << "We have succesefully improved our gold mine for the next 3 turns, Sir" << endl << endl;
								}
								else
								{
									cout << "We have not enough powder, Sir" << endl << endl;
								}
							}
							else
							{
								system("cls");
							}
						}
					}
					else if (MagicChoice == "Lumbermill improvement")
					{
						cout << "\nImproves the lumber income for 25% for 3 turns" << endl;
						while (MagicTemp != "Yes" && MagicTemp != "No")
						{
							cout << "\nAre you sure, Sir?" << endl << endl;
							cout << "1) Yes" << endl;
							cout << "2) No" << endl << endl;

							while (true)
							{
								if (GetAsyncKeyState(0x31))
								{
									Sleep(500);
									MagicTemp = "Yes";
									break;
								}

								if (GetAsyncKeyState(0x32))
								{
									Sleep(500);
									MagicTemp = "No";
									break;
								}
							}

							if (MagicTemp == "Yes")
							{
								system("cls");
								if (PlayerPowder >= 75)
								{
									PlayerPowder -= 75;
									LumbermillImprovement = true;
									LMIturn += 3;
									cout << "We have succesefully improved our lumbermill for the next 3 turns, Sir" << endl << endl;
								}
								else
								{
									cout << "We have not enough powder, Sir" << endl << endl;
								}
							}
							else
							{
								system("cls");
							}
						}
					}
					else if (MagicChoice == "Iron mine improvement")
					{
						cout << "\nImproves the iron income for 25% for 3 turns" << endl;
						while (MagicTemp != "Yes" && MagicTemp != "No")
						{
							cout << "\nAre you sure, Sir?" << endl << endl;
							cout << "1) Yes" << endl;
							cout << "2) No" << endl << endl;

							while (true)
							{
								if (GetAsyncKeyState(0x31))
								{
									Sleep(500);
									MagicTemp = "Yes";
									break;
								}

								if (GetAsyncKeyState(0x32))
								{
									Sleep(500);
									MagicTemp = "No";
									break;
								}
							}

							if (MagicTemp == "Yes")
							{
								system("cls");
								if (PlayerPowder >= 75)
								{
									PlayerPowder -= 75;
									IronMineImprovement = true;
									IMIturn += 3;
									cout << "We have succesefully improved our iron mine for the next 3 turns, Sir" << endl << endl;
								}
								else
								{
									cout << "We have not enough powder, Sir" << endl << endl;
								}
							}
							else
							{
								system("cls");
							}
						}
					}
					else if (MagicChoice == "Stone quarry improvement")
					{
						cout << "\nImproves the stone income for 25% for 3 turns" << endl;
						while (MagicTemp != "Yes" && MagicTemp != "No")
						{
							cout << "\nAre you sure, Sir?" << endl << endl;
							cout << "1) Yes" << endl;
							cout << "2) No" << endl << endl;

							while (true)
							{
								if (GetAsyncKeyState(0x31))
								{
									Sleep(500);
									MagicTemp = "Yes";
									break;
								}

								if (GetAsyncKeyState(0x32))
								{
									Sleep(500);
									MagicTemp = "No";
									break;
								}
							}


							if (MagicTemp == "Yes")
							{
								system("cls");
								if (PlayerPowder >= 75)
								{
									PlayerPowder -= 75;
									StoneQuarryImprovement = true;
									SQIturn += 3;
									cout << "We have succesefully improved our stone quarry for the next 3 turns, Sir" << endl << endl;
								}
								else
								{
									cout << "We have not enough powder, Sir" << endl << endl;
								}
							}
							else
							{
								system("cls");
							}
						}
					}
				}
			}
			system("cls");
		}
		Battle();
	}
}

void hewo()
{
	system("cls");

	cout << "00       00   00000000000   000                  000000                  000    000000000   " << endl;
	cout << "00       00   00000000000    000                000  000                000    00       00  " << endl;
	cout << "00       00   00              000              000    000              000     00       00  " << endl;
	cout << "00       00   00               000            000      000            000      00       00  " << endl;
	cout << "00000000000   00000000000       000          000        000          000       00       00  " << endl;
	cout << "00000000000   00000000000        000        000          000        000        00       00  " << endl;
	cout << "00       00   00                  000      000            000      000         00       00  " << endl;
	cout << "00       00   00                   000    000              000    000          00       00  " << endl;
	cout << "00       00   00000000000           000  000                000  000           00       00  " << endl;
	cout << "00       00   00000000000            000000                  000000             000000000   " << endl;

	cout << "                                                ||@@                                                           " << endl;
	cout << "                                                ||@@@@@@@                                                      " << endl;
	cout << "                                                ||@@@@@                                                        " << endl;
	cout << "                                                ||@                                                            " << endl;
	cout << "                                                ||                                                             " << endl;
	cout << "                                                ||                                                             " << endl;
	cout << "                                                ||                                                             " << endl;
	cout << "                                               |##|                                                            " << endl;
	cout << "                                              |####|                                                           " << endl;
	cout << "                                             |######|                                                          " << endl;
	cout << "                                            |########|                                                         " << endl;
	cout << "                            |@@@            |########|               |@@@                                      " << endl;
	cout << "                            |@@@@@@@       |##########|              |@@@@@@@                                  " << endl;
	cout << "                            |@@@@@@        |##########|              |@@@@@                                    " << endl;
	cout << "                            |@              |########|               |@                                        " << endl;
	cout << "                            |               |###  ###|               |                                         " << endl;
	cout << "                            |               |###  ###|               |                                         " << endl;
	cout << "                           |#|              |########|              |#|                                        " << endl;
	cout << "                          |##|              |########|             |###|                                       " << endl;
	cout << "                         |#####|            |########|            |#####|                                      " << endl;
	cout << "                        |#######|           |########|            |#####|                                      " << endl;
	cout << "                        |#######|    |______##########______|    |#######|                                     " << endl;
	cout << "                       |#########|   |######################|   |#########|                                    " << endl;
	cout << "                      |###########|  |######################|  |###########|                                   " << endl;
	cout << "                      |###########|  |######################|  |###########|                                   " << endl;
	cout << "                       |#########|   |######################|   |#########|                                    " << endl;
	cout << "                       |###   ###|   |######################|   |###   ###|                                    " << endl;
	cout << "                       |###   ###|   |######################|   |###   ###|                                    " << endl;
	cout << "                       |###   ###|   |######################|   |###   ###|                                    " << endl;
	cout << "                       |#########|      |################|      |#########|                                    " << endl;
	cout << "                     |###########|      |################|      |###########|                                  " << endl;
	cout << "                     |######################################################|                                  " << endl;
	cout << "                     |######################################################|                                  " << endl;
	cout << "                     |#######################################################|                                 " << endl;
	cout << "                     |#######################################################|                                 " << endl;
	cout << "                    |#########################################################|                                " << endl;
	cout << "                    |#########################################################|                                " << endl;
	cout << "                   |#######################____________#######################|                                " << endl;
	cout << "                   |#######################||        ||########################|                               " << endl;
	cout << "                   |#######################||        ||########################|                               " << endl;
	cout << "                   |#######################||        ||########################|                               " << endl;
	cout << "                  |@@@@@@@@@@@@@@@@@@@@@@@@||        ||@@@@@@@@@@@@@@@@@@@@@@@@@|                              " << endl;
	cout << "                  |@@@@@@@@@@@@@@@@@@@@@@@@||        ||@@@@@@@@@@@@@@@@@@@@@@@@@|                              " << endl;

	cout << "\nWelcome to the \"Two Castles\" game, my lord.\n";
	cout << "Do you want to skip the tutorial?" << endl;
	cout << "1) Yes" << endl;
	cout << "2) No" << endl << endl;

	//skip tutorial
	while (true)
	{
		if (GetAsyncKeyState(0x31))
		{
			Sleep(500);
			SkipTutorial = "Yes";
			break;
		}

		if (GetAsyncKeyState(0x32))
		{
			Sleep(500);
			SkipTutorial = "No";
			break;
		}
	}
	if (SkipTutorial == "Yes")
	{

	}
	else if (SkipTutorial == "No")
	{
		cout << "The main goal in this game is to destroy your enemy's castle.\n";
	}

	//Sleep(1000);

}

inline void clear()
{
	if (CicleNumber > 0)
	{
		system("cls");
	}
}

void UpgradeAskCout()
{
	UpgradeAsk = "Base";
	cout << "\nDo you want to upgrade this building, Sir?" << endl;
	cout << "\n1) Upgrade" << endl;
	cout << "\n2) Back" << endl << endl;
	while (true)
	{
		if (GetAsyncKeyState(0x31))
		{
			Sleep(500);
			UpgradeAsk = "Upgrade";
			break;
		}

		if (GetAsyncKeyState(0x32))
		{
			Sleep(500);
			UpgradeAsk = "Back";
			break;
		}
	}
}

void YourResourses()
{
	cout << "\nYour resources:\n";
	cout << "\nGold: " << PlayerGold << "/" << PlayerResourceLimit << endl;
	cout << "Lumber: " << PlayerLumber << "/" << PlayerResourceLimit << endl;
	cout << "Iron: " << PlayerIron << "/" << PlayerResourceLimit << endl;
	cout << "Stone: " << PlayerStone << "/" << PlayerResourceLimit << endl;
}

void YourResoursesForArmy()
{
	cout << "\nYour resources:\n";
	cout << "\nGold: " << PlayerGold << "/" << PlayerResourceLimit << endl;
	cout << "Lumber: " << PlayerLumber << "/" << PlayerResourceLimit << endl;
	cout << "Iron: " << PlayerIron << "/" << PlayerResourceLimit << endl;
	cout << "Stone: " << PlayerStone << "/" << PlayerResourceLimit << endl;
	cout << "People: " << PlayerPeople << "/" << PlayerPeopleLimit << endl;
	cout << "Horses: " << PlayerHorses << endl;
}

void Income()
{
	//gold
	if (GMIturn > 0)
	{
		PlayerGold += (PlayerGMlvl * 30 + 140) * 1.25;
		GMIturn -= 1;
	}
	else
	{
		PlayerGold += PlayerGMlvl * 30 + 140;
	}
	if (PlayerGold > PlayerResourceLimit)
	{
		PlayerGold = PlayerResourceLimit;
	}
	//lumber
	if (LMIturn > 0)
	{
		PlayerLumber += (PlayerLMlvl * 30 + 140) * 1.25;
		LMIturn -= 1;
	}
	else
	{
		PlayerLumber += PlayerLMlvl * 30 + 140;
	}
	if (PlayerLumber > PlayerResourceLimit)
	{
		PlayerLumber = PlayerResourceLimit;
	}
	//iron
	if (IMIturn > 0)
	{
		PlayerIron += (PlayerIMlvl * 25 + 100) * 1.25;
		IMIturn -= 1;
	}
	else
	{
		PlayerIron += PlayerIMlvl * 25 + 100;
	}
	if (PlayerIron > PlayerResourceLimit)
	{
		PlayerIron = PlayerResourceLimit;
	}
	//stone
	if (SQIturn > 0)
	{
		PlayerStone += (PlayerSQlvl * 25 + 100) * 1.25;
		SQIturn -= 1;
	}
	else
	{
		PlayerStone += PlayerSQlvl * 25 + 100;
	}
	if (PlayerStone > PlayerResourceLimit)
	{
		PlayerStone = PlayerResourceLimit;
	}
	//People
	if (PlayerHlvl <= 4)
	{
		PlayerPeople += 5;
	}
	else if (PlayerHlvl > 4 && PlayerHlvl <= 8)
	{
		PlayerPeople += 20;
	}
	else if (PlayerHlvl > 8 && PlayerHlvl <= 12)
	{
		PlayerPeople += 40;
	}
	if (PlayerPeople > PlayerPeopleLimit)
	{
		PlayerPeople = PlayerPeopleLimit;
	}
}

int SendSoldiersNumber(double PlayerSoldiers, double x)
{
	double FunctionTemp1;
	double y;

	FunctionTemp1 = PlayerSoldiers * x;

	while (FunctionTemp1 >= 1)
	{
		FunctionTemp1 -= 1;
	}

	if (FunctionTemp1 == 0)
	{
		return (PlayerSoldiers * x);
	}
	else if (FunctionTemp1 < 0.5)
	{
		return ((PlayerSoldiers * x) - FunctionTemp1);
	}
	else if (FunctionTemp1 >= 0.5 && FunctionTemp1 < 1)
	{
		y = 1 - FunctionTemp1;
		return ((PlayerSoldiers * x) + y);
	}
}

void Battle()
{
	system("cls");

	int BattleTurn = 0;
	int ArmyReturn = 0;

	int SendTemp = 0;


	int PlayerArchersWalls = 0;
	int PlayerArchersBattle = 0;
	int PlayerSpearmansBattle = 0;
	int PlayerCavalryBattle = 0;
	int PlayerCatapultsBattle = 0;

	int EnemyArchersWalls = 0;
	int EnemyArchersBattle = 0;
	int EnemySpearmansBattle = 0;
	int EnemyCavalryBattle = 0;
	int EnemyCatapultsBattle = 0;

	double PTotalArchersDamage = 0;
	double PTotalSpearmansDamage = 0;
	double PTotalCavalryDamage = 0;
	double PTotalCatapultsDamage = 0;

	double PTotalArchersHealth = 0;
	double PTotalSpearmansHealth = 0;
	double PTotalCavalryHealth = 0;
	double PTotalCatapultsHealth = 0;

	double ETotalArchersDamage = 0;
	double ETotalSpearmansDamage = 0;
	double ETotalCavalryDamage = 0;
	double ETotalCatapultsDamage = 0;

	double ETotalArchersHealth = 0;
	double ETotalSpearmansHealth = 0;
	double ETotalCavalryHealth = 0;
	double ETotalCatapultsHealth = 0;

	double PTotalArchersWallsDamage = 0;
	double PTotalArchersWallsHealth = 0;

	double ETotalArchersWallsDamage = 0;
	double ETotalArchersWallsHealth = 0;

	//P(player) (Wall - who deal damage) (Archers - who receive damage)
	double PWallsArchersDamage = 0;
	double PWallsSpearmansDamage = 0;
	double PWallsCavalryDamage = 0;
	double PWallsCatapultsDamage = 0;

	double PArchersArchersDamage = 0;
	double PArchersSpearmansDamage = 0;
	double PArchersCavalryDamage = 0;
	double PArchersCatapultsDamage = 0;
	double PArchersWallsDamage = 0;

	double PSpearmansArchersDamage = 0;
	double PSpearmansSpearmansDamage = 0;
	double PSpearmansCavalryDamage = 0;
	double PSpearmansCatapultsDamage = 0;

	double PCavalryArchersDamage = 0;
	double PCavalrySpearmansDamage = 0;
	double PCavalryCavalryDamage = 0;
	double PCavalryCatapultsDamage = 0;

	double PCatapultsArchersDamage = 0;
	double PCatapultsSpearmansDamage = 0;
	double PCatapultsCavalryDamage = 0;
	double PCatapultsCatapultsDamage = 0;
	double PCatapultsWallsDamage = 0;

	double PAllArchersDamage = 0;
	double PAllSpearmansDamage = 0;
	double PAllCavalryDamage = 0;
	double PAllCatapultsDamage = 0;

	double EWallsArchersDamage = 0;
	double EWallsSpearmansDamage = 0;
	double EWallsCavalryDamage = 0;
	double EWallsCatapultsDamage = 0;

	double EArchersArchersDamage = 0;
	double EArchersSpearmansDamage = 0;
	double EArchersCavalryDamage = 0;
	double EArchersCatapultsDamage = 0;
	double EArchersWallsDamage = 0;

	double ESpearmansArchersDamage = 0;
	double ESpearmansSpearmansDamage = 0;
	double ESpearmansCavalryDamage = 0;
	double ESpearmansCatapultsDamage = 0;

	double ECavalryArchersDamage = 0;
	double ECavalrySpearmansDamage = 0;
	double ECavalryCavalryDamage = 0;
	double ECavalryCatapultsDamage = 0;

	double ECatapultsArchersDamage = 0;
	double ECatapultsSpearmansDamage = 0;
	double ECatapultsCavalryDamage = 0;
	double ECatapultsCatapultsDamage = 0;
	double ECatapultsWallsDamage = 0;

	double EAllWallsDamage = 0;
	double EAllArchersDamage = 0;
	double EAllSpearmansDamage = 0;
	double EAllCavalryDamage = 0;
	double EAllCatapultsDamage = 0;

	string BattleChoice = "Base";
	string BattleTemp = "Base";


	while (BattleTurn < 2)
	{
		BattleTurn += 1;
		if (Turn % 2 == 0)
		{
			if (PlayerArchers > PlayerWallsLimit)
			{
				PlayerArchersWalls = PlayerWallsLimit;
				PlayerArchers -= PlayerWallsLimit;
				PlayerArchersBattle = PlayerArchers;
				PlayerArchers = 0;
			}
			else
			{
				PlayerArchersWalls = PlayerArchers;
				PlayerArchers = 0;
			}

			PlayerSpearmansBattle = PlayerSpearmans;
			PlayerSpearmans = 0;
			PlayerCavalryBattle = PlayerCavalry;
			PlayerCavalry = 0;
			PlayerCatapultsBattle = PlayerCatapults;
			PlayerCatapults = 0;

			system("cls");

			cout << "Turn: " << BattleTurn << "/2" << endl;
			cout << "Enemies are attacking! Prepare your soldiers, Sir!" << endl << endl;
			cout << "Your army, Sir:";
			if (PlayerSpy == true)
			{
				cout << "\t\tEnemy army:";
			}
			cout << "\n\nTotal units: " << PlayerArchersBattle + PlayerSpearmansBattle + PlayerCavalryBattle + PlayerCatapultsBattle;
			if (PlayerSpy == true)
			{
				cout << "\t\tTotal units: " << EnemyArchersBattle + EnemySpearmansBattle + EnemyCavalryBattle + EnemyCatapultsBattle;
			}
			cout << "\nArchers: " << PlayerArchersBattle << ", on walls: " << PlayerArchersWalls;
			if (PlayerSpy == true)
			{
				cout << "\t\tArchers: " << EnemyArchersBattle;
			}
			cout << "\nSpearmans: " << PlayerSpearmansBattle;
			if (PlayerSpy == true)
			{
				cout << "\t\tSpearmans: " << EnemySpearmansBattle;
			}
			cout << "\nCavalry: " << PlayerCavalryBattle;
			if (PlayerSpy == true)
			{
				cout << "\t\tCavalry: " << EnemyCavalryBattle;
			}
			cout << "\nCatapults: " << PlayerCatapultsBattle;
			if (PlayerSpy == true)
			{
				cout << "\t\tCatapults: " << EnemyCatapultsBattle;
			}
			cout << endl << endl;
			cout << "Press space to continue, Sir." << endl << endl;
			
			while (true)
			{
				if (GetAsyncKeyState(VK_SPACE))
				{
					Sleep(500);
					break;
				}
			}

		}
		else
		{
			BattleTemp = "Base";

			while (BattleTemp != "Continue")
			{
				if (EnemyArchers > EnemyWallsLimit)
				{
					EnemyArchersWalls = EnemyWallsLimit;
					EnemyArchers -= EnemyWallsLimit;
					EnemyArchersBattle = EnemyArchers;
					EnemyArchers = 0;
				}
				else
				{
					EnemyArchersWalls = EnemyArchers;
					EnemyArchers = 0;
				}


				EnemySpearmansBattle = EnemySpearmans;
				EnemySpearmans = 0;
				EnemyCavalryBattle = EnemyCavalry;
				EnemyCavalry = 0;
				EnemyCatapultsBattle = EnemyCatapults;
				EnemyCatapults = 0;

				BattleTemp = "Base";
				SendTemp = 0;

				system("cls");
				cout << "Turn: " << BattleTurn << "/2" << endl;
				cout << "It's your turn to attack, Sir.\nHow much soldiers will you send?" << endl << endl;
				cout << "Your army, Sir:";
				if (PlayerSpy == true)
				{
					cout << "\t\tEnemy army:";
				}
				cout << "\n\nTotal units: " << PlayerArchers + PlayerSpearmans + PlayerCavalry + PlayerCatapults;
				if (PlayerSpy == true)
				{
					cout << "\t\tTotal units: " << EnemyArchersBattle + EnemySpearmansBattle + EnemyCavalryBattle + EnemyCatapultsBattle;
				}
				cout << "\nArchers: " << PlayerArchers;
				if (PlayerSpy == true)
				{
					cout << "\t\tArchers: " << EnemyArchersBattle << ", on walls: " << EnemyArchersWalls;
				}
				cout << "\nSpearmans: " << PlayerSpearmans;
				if (PlayerSpy == true)
				{
					cout << "\t\tSpearmans: " << EnemySpearmansBattle;
				}
				cout << "\nCavalry: " << PlayerCavalry;
				if (PlayerSpy == true)
				{
					cout << "\t\tCavalry: " << EnemyCavalryBattle;
				}
				cout << "\nCatapults: " << PlayerCatapults;
				if (PlayerSpy == true)
				{
					cout << "\t\tCatapults: " << EnemyCatapultsBattle;
				}
				cout << endl << endl;

				cout << "1) Send archers - " << PlayerArchersBattle << " sent" << endl;
				cout << "2) Send spearmans - " << PlayerSpearmansBattle << " sent" << endl;
				cout << "3) Send cavalry - " << PlayerCavalryBattle << " sent" << endl;
				cout << "4) Send catapults - " << PlayerCatapultsBattle << " sent" << endl;
				cout << "5) Send all" << endl;
				cout << "6) Continue" << endl << endl;

				while (true)
				{
					if (GetAsyncKeyState(0x31))
					{
						Sleep(500);
						BattleTemp = "Send archers";
						break;
					}

					if (GetAsyncKeyState(0x32))
					{
						Sleep(500);
						BattleTemp = "Send spearmans";
						break;
					}

					if (GetAsyncKeyState(0x33))
					{
						Sleep(500);
						BattleTemp = "Send cavalry";
						break;
					}

					if (GetAsyncKeyState(0x34))
					{
						Sleep(500);
						BattleTemp = "Send catapults";
						break;
					}

					if (GetAsyncKeyState(0x35))
					{
						Sleep(500);
						BattleTemp = "Send all";
						break;
					}

					if (GetAsyncKeyState(0x36))
					{
						Sleep(500);
						BattleTemp = "Continue";
						break;
					}
				}

				if (BattleTemp == "Send archers")
				{
					cout << "\nHow much archers do you want to send, Sir?" << endl << endl;
					cout << "1) 10%  - " << SendSoldiersNumber(PlayerArchers + PlayerArchersBattle, 0.10) << endl;
					cout << "2) 20%  - " << SendSoldiersNumber(PlayerArchers + PlayerArchersBattle, 0.20) << endl;
					cout << "3) 30%  - " << SendSoldiersNumber(PlayerArchers + PlayerArchersBattle, 0.30) << endl;
					cout << "4) 40%  - " << SendSoldiersNumber(PlayerArchers + PlayerArchersBattle, 0.40) << endl;
					cout << "5) 50%  - " << SendSoldiersNumber(PlayerArchers + PlayerArchersBattle, 0.50) << endl;
					cout << "6) 60%  - " << SendSoldiersNumber(PlayerArchers + PlayerArchersBattle, 0.60) << endl;
					cout << "7) 70%  - " << SendSoldiersNumber(PlayerArchers + PlayerArchersBattle, 0.70) << endl;
					cout << "8) 80%  - " << SendSoldiersNumber(PlayerArchers + PlayerArchersBattle, 0.80) << endl;
					cout << "9) 90%  - " << SendSoldiersNumber(PlayerArchers + PlayerArchersBattle, 0.90) << endl;
					cout << "0) 100% - " << PlayerArchers + PlayerArchersBattle << endl;
					cout << "TAB - 0%" << endl;
					cout << "ESC - Back" << endl << endl;

					while (true)
					{
						if (GetAsyncKeyState(0x31))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerArchers + PlayerArchersBattle, 0.10);
							break;
						}

						if (GetAsyncKeyState(0x32))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerArchers + PlayerArchersBattle, 0.20);
							break;
						}

						if (GetAsyncKeyState(0x33))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerArchers + PlayerArchersBattle, 0.30);
							break;
						}

						if (GetAsyncKeyState(0x34))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerArchers + PlayerArchersBattle, 0.40);
							break;
						}

						if (GetAsyncKeyState(0x35))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerArchers + PlayerArchersBattle, 0.50);
							break;
						}

						if (GetAsyncKeyState(0x36))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerArchers + PlayerArchersBattle, 0.60);
							break;
						}

						if (GetAsyncKeyState(0x37))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerArchers + PlayerArchersBattle, 0.70);
							break;
						}

						if (GetAsyncKeyState(0x38))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerArchers + PlayerArchersBattle, 0.80);
							break;
						}

						if (GetAsyncKeyState(0x39))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerArchers + PlayerArchersBattle, 0.90);
							break;
						}

						if (GetAsyncKeyState(0x30))
						{
							Sleep(500);
							SendTemp = PlayerArchers;
							break;
						}

						if (GetAsyncKeyState(VK_TAB))
						{
							Sleep(500);
							PlayerArchers += PlayerArchersBattle;
							PlayerArchersBattle = 0;
							SendTemp = 0;
							break;
						}

						if (GetAsyncKeyState(VK_ESCAPE))
						{
							Sleep(500);
							SendTemp = 0;
							break;
						}
					}

					if (PlayerArchersBattle > 0 && SendTemp > 0)
					{
						PlayerArchers += PlayerArchersBattle;
						PlayerArchersBattle = 0;
					}

					if (SendTemp <= PlayerArchers && SendTemp > 0)
					{
						PlayerArchersBattle += SendTemp;
						PlayerArchers -= SendTemp;
					}
				}
				else if (BattleTemp == "Send spearmans")
				{
					cout << "\nHow much spearmans do you want to send, Sir?" << endl << endl;
					cout << "1) 10%  - " << SendSoldiersNumber(PlayerSpearmans + PlayerSpearmansBattle, 0.10) << endl;
					cout << "2) 20%  - " << SendSoldiersNumber(PlayerSpearmans + PlayerSpearmansBattle, 0.20) << endl;
					cout << "3) 30%  - " << SendSoldiersNumber(PlayerSpearmans + PlayerSpearmansBattle, 0.30) << endl;
					cout << "4) 40%  - " << SendSoldiersNumber(PlayerSpearmans + PlayerSpearmansBattle, 0.40) << endl;
					cout << "5) 50%  - " << SendSoldiersNumber(PlayerSpearmans + PlayerSpearmansBattle, 0.50) << endl;
					cout << "6) 60%  - " << SendSoldiersNumber(PlayerSpearmans + PlayerSpearmansBattle, 0.60) << endl;
					cout << "7) 70%  - " << SendSoldiersNumber(PlayerSpearmans + PlayerSpearmansBattle, 0.70) << endl;
					cout << "8) 80%  - " << SendSoldiersNumber(PlayerSpearmans + PlayerSpearmansBattle, 0.80) << endl;
					cout << "9) 90%  - " << SendSoldiersNumber(PlayerSpearmans + PlayerSpearmansBattle, 0.90) << endl;
					cout << "0) 100% - " << PlayerSpearmans + PlayerSpearmansBattle << endl;
					cout << "TAB - 0%" << endl;
					cout << "ESC - Back" << endl << endl;

					while (true)
					{
						if (GetAsyncKeyState(0x31))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerSpearmans + PlayerSpearmansBattle, 0.10);
							break;
						}

						if (GetAsyncKeyState(0x32))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerSpearmans + PlayerSpearmansBattle, 0.20);
							break;
						}

						if (GetAsyncKeyState(0x33))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerSpearmans + PlayerSpearmansBattle, 0.30);
							break;
						}

						if (GetAsyncKeyState(0x34))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerSpearmans + PlayerSpearmansBattle, 0.40);
							break;
						}

						if (GetAsyncKeyState(0x35))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerSpearmans + PlayerSpearmansBattle, 0.50);
							break;
						}

						if (GetAsyncKeyState(0x36))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerSpearmans + PlayerSpearmansBattle, 0.60);
							break;
						}

						if (GetAsyncKeyState(0x37))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerSpearmans + PlayerSpearmansBattle, 0.70);
							break;
						}

						if (GetAsyncKeyState(0x38))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerSpearmans + PlayerSpearmansBattle, 0.80);
							break;
						}

						if (GetAsyncKeyState(0x39))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerSpearmans + PlayerSpearmansBattle, 0.90);
							break;
						}

						if (GetAsyncKeyState(0x30))
						{
							Sleep(500);
							SendTemp = PlayerSpearmans + PlayerSpearmansBattle;
							break;
						}

						if (GetAsyncKeyState(VK_TAB))
						{
							Sleep(500);
							PlayerSpearmans += PlayerSpearmansBattle;
							PlayerSpearmansBattle = 0;
							SendTemp = 0;
							break;
						}

						if (GetAsyncKeyState(VK_ESCAPE))
						{
							Sleep(500);
							SendTemp = 0;
							break;
						}
					}

					if (PlayerSpearmansBattle > 0 && SendTemp > 0)
					{
						PlayerSpearmans += PlayerSpearmansBattle;
						PlayerSpearmansBattle = 0;
					}

					if (SendTemp <= PlayerSpearmans && SendTemp > 0)
					{
						PlayerSpearmansBattle += SendTemp;
						PlayerSpearmans -= SendTemp;
					}
				}
				else if (BattleTemp == "Send cavalry")
				{
					cout << "\nHow much cavalry units do you want to send, Sir?" << endl << endl;
					cout << "1) 10%  - " << SendSoldiersNumber(PlayerCavalry + PlayerCavalryBattle, 0.10) << endl;
					cout << "2) 20%  - " << SendSoldiersNumber(PlayerCavalry + PlayerCavalryBattle, 0.20) << endl;
					cout << "3) 30%  - " << SendSoldiersNumber(PlayerCavalry + PlayerCavalryBattle, 0.30) << endl;
					cout << "4) 40%  - " << SendSoldiersNumber(PlayerCavalry + PlayerCavalryBattle, 0.40) << endl;
					cout << "5) 50%  - " << SendSoldiersNumber(PlayerCavalry + PlayerCavalryBattle, 0.50) << endl;
					cout << "6) 60%  - " << SendSoldiersNumber(PlayerCavalry + PlayerCavalryBattle, 0.60) << endl;
					cout << "7) 70%  - " << SendSoldiersNumber(PlayerCavalry + PlayerCavalryBattle, 0.70) << endl;
					cout << "8) 80%  - " << SendSoldiersNumber(PlayerCavalry + PlayerCavalryBattle, 0.80) << endl;
					cout << "9) 90%  - " << SendSoldiersNumber(PlayerCavalry + PlayerCavalryBattle, 0.90) << endl;
					cout << "0) 100% - " << PlayerCavalry + PlayerCavalryBattle << endl;
					cout << "TAB - 0%" << endl;
					cout << "ESC - Back" << endl << endl;

					while (true)
					{
						if (GetAsyncKeyState(0x31))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerCavalry + PlayerCavalryBattle, 0.10);
							break;
						}

						if (GetAsyncKeyState(0x32))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerCavalry + PlayerCavalryBattle, 0.20);
							break;
						}

						if (GetAsyncKeyState(0x33))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerCavalry + PlayerCavalryBattle, 0.30);
							break;
						}

						if (GetAsyncKeyState(0x34))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerCavalry + PlayerCavalryBattle, 0.40);
							break;
						}

						if (GetAsyncKeyState(0x35))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerCavalry + PlayerCavalryBattle, 0.50);
							break;
						}

						if (GetAsyncKeyState(0x36))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerCavalry + PlayerCavalryBattle, 0.60);
							break;
						}

						if (GetAsyncKeyState(0x37))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerCavalry + PlayerCavalryBattle, 0.70);
							break;
						}

						if (GetAsyncKeyState(0x38))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerCavalry + PlayerCavalryBattle, 0.80);
							break;
						}

						if (GetAsyncKeyState(0x39))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerCavalry + PlayerCavalryBattle, 0.90);
							break;
						}

						if (GetAsyncKeyState(0x30))
						{
							Sleep(500);
							SendTemp = PlayerCavalry + PlayerCavalryBattle;
							break;
						}

						if (GetAsyncKeyState(VK_TAB))
						{
							Sleep(500);
							PlayerCavalry += PlayerCavalryBattle;
							PlayerCavalryBattle = 0;
							SendTemp = 0;
							break;
						}

						if (GetAsyncKeyState(VK_ESCAPE))
						{
							Sleep(500);
							SendTemp = 0;
							break;
						}
					}

					if (PlayerCavalryBattle > 0 && SendTemp > 0)
					{
						PlayerCavalry += PlayerCavalryBattle;
						PlayerCavalryBattle = 0;
					}

					if (SendTemp <= PlayerCavalry && SendTemp > 0)
					{
						PlayerCavalryBattle += SendTemp;
						PlayerCavalry -= SendTemp;
					}
				}
				else if (BattleTemp == "Send catapults")
				{
					cout << "\nHow much catapults do you want to send, Sir?" << endl << endl;
					cout << "1) 10%  - " << SendSoldiersNumber(PlayerCatapults + PlayerCatapultsBattle, 0.10) << endl;
					cout << "2) 20%  - " << SendSoldiersNumber(PlayerCatapults + PlayerCatapultsBattle, 0.20) << endl;
					cout << "3) 30%  - " << SendSoldiersNumber(PlayerCatapults + PlayerCatapultsBattle, 0.30) << endl;
					cout << "4) 40%  - " << SendSoldiersNumber(PlayerCatapults + PlayerCatapultsBattle, 0.40) << endl;
					cout << "5) 50%  - " << SendSoldiersNumber(PlayerCatapults + PlayerCatapultsBattle, 0.50) << endl;
					cout << "6) 60%  - " << SendSoldiersNumber(PlayerCatapults + PlayerCatapultsBattle, 0.60) << endl;
					cout << "7) 70%  - " << SendSoldiersNumber(PlayerCatapults + PlayerCatapultsBattle, 0.70) << endl;
					cout << "8) 80%  - " << SendSoldiersNumber(PlayerCatapults + PlayerCatapultsBattle, 0.80) << endl;
					cout << "9) 90%  - " << SendSoldiersNumber(PlayerCatapults + PlayerCatapultsBattle, 0.90) << endl;
					cout << "0) 100% - " << PlayerCatapults + PlayerCatapultsBattle << endl;
					cout << "TAB - 0%" << endl;
					cout << "ESC - Back" << endl << endl;

					while (true)
					{
						if (GetAsyncKeyState(0x31))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerCatapults + PlayerCatapultsBattle, 0.10);
							break;
						}

						if (GetAsyncKeyState(0x32))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerCatapults + PlayerCatapultsBattle, 0.20);
							break;
						}

						if (GetAsyncKeyState(0x33))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerCatapults + PlayerCatapultsBattle, 0.30);
							break;
						}

						if (GetAsyncKeyState(0x34))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerCatapults + PlayerCatapultsBattle, 0.40);
							break;
						}

						if (GetAsyncKeyState(0x35))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerCatapults + PlayerCatapultsBattle, 0.50);
							break;
						}

						if (GetAsyncKeyState(0x36))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerCatapults + PlayerCatapultsBattle, 0.60);
							break;
						}

						if (GetAsyncKeyState(0x37))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerCatapults + PlayerCatapultsBattle, 0.70);
							break;
						}

						if (GetAsyncKeyState(0x38))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerCatapults + PlayerCatapultsBattle, 0.80);
							break;
						}

						if (GetAsyncKeyState(0x39))
						{
							Sleep(500);
							SendTemp = SendSoldiersNumber(PlayerCatapults + PlayerCatapultsBattle, 0.90);
							break;
						}

						if (GetAsyncKeyState(0x30))
						{
							Sleep(500);
							SendTemp = PlayerCatapults + PlayerCatapultsBattle;
							break;
						}

						if (GetAsyncKeyState(VK_TAB))
						{
							Sleep(500);
							PlayerCatapults += PlayerCatapultsBattle;
							PlayerCatapultsBattle = 0;
							SendTemp = 0;
							break;
						}

						if (GetAsyncKeyState(VK_ESCAPE))
						{
							Sleep(500);
							SendTemp = 0;
							break;
						}
					}

					if (PlayerCatapultsBattle > 0 && SendTemp > 0)
					{
						PlayerCatapults += PlayerCatapultsBattle;
						PlayerCatapultsBattle = 0;
					}

					if (SendTemp <= PlayerCatapults && SendTemp > 0)
					{
						PlayerCatapultsBattle += SendTemp;
						PlayerCatapults -= SendTemp;
					}
				}
				else if (BattleTemp == "Send all")
				{
					PlayerArchersBattle += PlayerArchers;
					PlayerArchers = 0;
					PlayerSpearmansBattle += PlayerSpearmans;
					PlayerSpearmans = 0;
					PlayerCavalryBattle += PlayerCavalry;
					PlayerCavalry = 0;
					PlayerCatapultsBattle += PlayerCatapults;
					PlayerCatapults = 0;
				}
			}
		}

		//player
		PTotalArchersDamage = PlayerArchersBattle * ArchersDamage * PArchersDamageLvl;
		if (PlayerArchersEnchance == true)
		{
			PTotalArchersDamage = PTotalArchersDamage * 0.2;
		}

		PTotalSpearmansDamage = PlayerSpearmansBattle * SpearmansDamage * PSpearmansDamageLvl;
		if (PlayerSpearmansEnchance == true)
		{
			PTotalSpearmansDamage = PTotalSpearmansDamage * 0.2;
		}

		PTotalCavalryDamage = PlayerCavalryBattle * CavalryDamage * PCavalryDamageLvl;
		if (PlayerCavalryEnchance == true)
		{
			PTotalCavalryDamage = PTotalCavalryDamage * 0.2;
		}

		PTotalCatapultsDamage = PlayerCatapultsBattle * CatapultsDamage * PCatapultsDamageLvl;


		PTotalArchersHealth = PlayerArchersBattle * ArchersHealth * PArchersHealthLvl;
		PTotalSpearmansHealth = PlayerSpearmansBattle * SpearmansHealth * PSpearmansHealthLvl;
		PTotalCavalryHealth = PlayerCavalryBattle * CavalryHealth * PCavalryHealthLvl;
		if (PlayerArmourEnchance == true)
		{
			PTotalArchersHealth = PTotalArchersHealth * 0.2;
			PTotalSpearmansHealth = PTotalSpearmansHealth * 0.2;
			PTotalCavalryHealth = PTotalCavalryHealth * 0.2;
		}
		PTotalCatapultsHealth = PlayerCatapultsBattle * CatapultsHealth * PCatapultsHealthLvl;

		PlayerArchersBattle = 0;
		PlayerSpearmansBattle = 0;
		PlayerCavalryBattle = 0;
		PlayerCatapultsBattle = 0;

		//enemy
		ETotalArchersDamage = EnemyArchersBattle * ArchersDamage * EArchersDamageLvl;
		ETotalSpearmansDamage = EnemySpearmansBattle * SpearmansDamage * ESpearmansDamageLvl;
		ETotalCavalryDamage = EnemyCavalryBattle * CavalryDamage * ECavalryDamageLvl;
		ETotalCatapultsDamage = EnemyCatapultsBattle * CatapultsDamage * ECatapultsDamageLvl;

		ETotalArchersHealth = EnemyArchersBattle * ArchersHealth * EArchersHealthLvl;
		ETotalSpearmansHealth = EnemySpearmansBattle * SpearmansHealth * ESpearmansHealthLvl;
		ETotalCavalryHealth = EnemyCavalryBattle * CavalryHealth * ECavalryHealthLvl;
		ETotalCatapultsHealth = EnemyCatapultsBattle * CatapultsHealth * ECatapultsHealthLvl;

		EnemyArchersBattle = 0;
		EnemySpearmansBattle = 0;
		EnemyCavalryBattle = 0;
		EnemyCatapultsBattle = 0;

		if (Turn % 2 == 0)
		{
			PTotalArchersWallsDamage = PlayerArchersWalls * ArchersDamage * PArchersDamageLvl;
			PTotalArchersWallsHealth = PlayerArchersWalls * ArchersHealth * PArchersHealthLvl;
			if (PlayerArmourEnchance == true)
			{
				PTotalArchersWallsHealth = PTotalArchersWallsHealth * 0.2;
			}
			
			PlayerArchersWalls = 0;

			//player
			PWallsArchersDamage = PTotalArchersWallsDamage * 0.25 * 0.01;
			PWallsSpearmansDamage = PTotalArchersWallsDamage * 0.50 * 0.01;
			PWallsCavalryDamage = PTotalArchersWallsDamage * 0.15 * 0.01;
			PWallsCatapultsDamage = PTotalArchersWallsDamage * 0.10 * 0.01;

			PArchersArchersDamage = PTotalArchersDamage * 0.25 * 0.01;
			PArchersSpearmansDamage = PTotalArchersDamage * 0.50 * 0.01;
			PArchersCavalryDamage = PTotalArchersDamage * 0.15 * 0.01;
			PArchersCatapultsDamage = PTotalArchersDamage * 0.10 * 0.01;

			PSpearmansArchersDamage = PTotalSpearmansDamage * 0.10 * 0.01;
			PSpearmansSpearmansDamage = PTotalSpearmansDamage * 0.25 * 0.01;
			PSpearmansCavalryDamage = PTotalSpearmansDamage * 0.50 * 0.01;
			PSpearmansCatapultsDamage = PTotalSpearmansDamage * 0.15 * 0.01;

			PCavalryArchersDamage = PTotalCavalryDamage * 0.50 * 0.01;
			PCavalrySpearmansDamage = PTotalCavalryDamage * 0.15 * 0.01;
			PCavalryCavalryDamage = PTotalCavalryDamage * 0.25 * 0.01;
			PCavalryCatapultsDamage = PTotalCavalryDamage * 0.10 * 0.01;

			PCatapultsArchersDamage = PTotalCatapultsDamage * 0.25 * 0.01;
			PCatapultsSpearmansDamage = PTotalCatapultsDamage * 0.40 * 0.01;
			PCatapultsCavalryDamage = PTotalCatapultsDamage * 0.15 * 0.01;
			PCatapultsCatapultsDamage = PTotalCatapultsDamage * 0.20 * 0.01;

			//PAllArchersDamage = PWallsArchersDamage + PArchersArchersDamage + PSpearmansArchersDamage + PCavalryArchersDamage + PCatapultsArchersDamage;
			//PAllSpearmansDamage = PWallsSpearmansDamage + PArchersSpearmansDamage + PSpearmansSpearmansDamage + PCavalrySpearmansDamage + PCatapultsSpearmansDamage;
			//PAllCavalryDamage = PWallsCavalryDamage + PArchersCavalryDamage + PSpearmansCavalryDamage + PCavalryCavalryDamage + PCatapultsCavalryDamage;
			//PAllCatapultsDamage = PWallsCatapultsDamage + PArchersCatapultsDamage + PSpearmansCatapultsDamage + PCavalryCatapultsDamage + PCatapultsCatapultsDamage;
			//player-end
			//enemy
			EArchersArchersDamage = ETotalArchersDamage * 0.20 * 0.01;
			EArchersSpearmansDamage = ETotalArchersDamage * 0.50 * 0.01;
			EArchersCavalryDamage = ETotalArchersDamage * 0.15 * 0.01;
			EArchersCatapultsDamage = ETotalArchersDamage * 0.10 * 0.01;
			EArchersWallsDamage = ETotalArchersDamage * 0.05 * 0.01;

			ESpearmansArchersDamage = ETotalSpearmansDamage * 0.10 * 0.01;
			ESpearmansSpearmansDamage = ETotalSpearmansDamage * 0.25 * 0.01;
			ESpearmansCavalryDamage = ETotalSpearmansDamage * 0.50 * 0.01;
			ESpearmansCatapultsDamage = ETotalSpearmansDamage * 0.15 * 0.01;

			ECavalryArchersDamage = ETotalCavalryDamage * 0.50 * 0.01;
			ECavalrySpearmansDamage = ETotalCavalryDamage * 0.15 * 0.01;
			ECavalryCavalryDamage = ETotalCavalryDamage * 0.25 * 0.01;
			ECavalryCatapultsDamage = ETotalCavalryDamage * 0.10 * 0.01;

			ECatapultsArchersDamage = ETotalCatapultsDamage * 0.25 * 0.01;
			ECatapultsSpearmansDamage = ETotalCatapultsDamage * 0.15 * 0.01;
			ECatapultsCavalryDamage = ETotalCatapultsDamage * 0.05 * 0.01;
			ECatapultsCatapultsDamage = ETotalCatapultsDamage * 0.10 * 0.01;
			ECatapultsWallsDamage = ETotalCatapultsDamage * 0.45 * 0.01;

			//EAllWallsDamage = EArchersWallsDamage + ECatapultsWallsDamage;
			//EAllArchersDamage = EArchersArchersDamage + ESpearmansArchersDamage + ECavalryArchersDamage + ECatapultsArchersDamage;
			//EAllSpearmansDamage = EArchersSpearmansDamage + ESpearmansSpearmansDamage + ECavalrySpearmansDamage + ECatapultsSpearmansDamage;
			//EAllCavalryDamage = EArchersCavalryDamage + ESpearmansCavalryDamage + ECavalryCavalryDamage + ECatapultsCavalryDamage;
			//EAllCatapultsDamage = EArchersCatapultsDamage + ESpearmansCatapultsDamage + ECavalryCatapultsDamage + ECatapultsCatapultsDamage;
			//enemy-end
		
			while (((PTotalArchersWallsDamage + PTotalArchersDamage + PTotalSpearmansDamage + PTotalCavalryDamage + PTotalCatapultsDamage > 0) && (ETotalArchersHealth + ETotalSpearmansHealth + ETotalCavalryHealth + ETotalCatapultsHealth > 0)) 
				|| (ETotalArchersDamage + ETotalSpearmansDamage + ETotalCavalryDamage + ETotalCatapultsDamage > 0) && ((ETotalArchersHealth + ETotalSpearmansHealth + ETotalCavalryHealth + ETotalCatapultsHealth > 0)))
			{
				//to enemy archers
				if (ETotalArchersHealth > 0 && PTotalArchersWallsDamage > 0)
				{
					ETotalArchersHealth -= PWallsArchersDamage;
					PTotalArchersWallsDamage -= PWallsArchersDamage;
				}
				if (ETotalArchersHealth > 0 && PTotalArchersDamage > 0)
				{
					ETotalArchersHealth -= PArchersArchersDamage;
					PTotalArchersDamage -= PArchersArchersDamage;
				}
				if (ETotalArchersHealth > 0 && PTotalSpearmansDamage > 0)
				{
					ETotalArchersHealth -= PSpearmansArchersDamage;
					PTotalSpearmansDamage -= PSpearmansArchersDamage;
				}
				if (ETotalArchersHealth > 0 && PTotalCavalryDamage > 0)
				{
					ETotalArchersHealth -= PCavalryArchersDamage;
					PTotalCavalryDamage -= PCavalryArchersDamage;
				}
				if (ETotalArchersHealth > 0 && PTotalCatapultsDamage > 0)
				{
					ETotalArchersHealth -= PCatapultsArchersDamage;
					PTotalCatapultsDamage -= PCatapultsArchersDamage;
				}

				//to enemy spearmans
				if (ETotalSpearmansHealth > 0 && PTotalArchersWallsDamage > 0)
				{
					ETotalSpearmansHealth -= PWallsSpearmansDamage;
					PTotalArchersWallsDamage -= PWallsSpearmansDamage;
				}
				if (ETotalSpearmansHealth > 0 && PTotalArchersDamage > 0)
				{
					ETotalSpearmansHealth -= PArchersSpearmansDamage;
					PTotalArchersDamage -= PArchersSpearmansDamage;
				}
				if (ETotalSpearmansHealth > 0 && PTotalSpearmansDamage > 0)
				{
					ETotalSpearmansHealth -= PSpearmansSpearmansDamage;
					PTotalSpearmansDamage -= PSpearmansSpearmansDamage;
				}
				if (ETotalSpearmansHealth > 0 && PTotalCavalryDamage > 0)
				{
					ETotalSpearmansHealth -= PCavalrySpearmansDamage;
					PTotalCavalryDamage -= PCavalrySpearmansDamage;
				}
				if (ETotalSpearmansHealth > 0 && PTotalCatapultsDamage > 0)
				{
					ETotalSpearmansHealth -= PCatapultsSpearmansDamage;
					PTotalCatapultsDamage -= PCatapultsSpearmansDamage;
				}

				//to enemy cavalry
				if (ETotalCavalryHealth > 0 && PTotalArchersWallsDamage > 0)
				{
					ETotalCavalryHealth -= PWallsCavalryDamage;
					PTotalArchersWallsDamage -= PWallsCavalryDamage;
				}
				if (ETotalCavalryHealth > 0 && PTotalArchersDamage > 0)
				{
					ETotalCavalryHealth -= PArchersCavalryDamage;
					PTotalArchersDamage -= PArchersCavalryDamage;
				}
				if (ETotalCavalryHealth > 0 && PTotalSpearmansDamage > 0)
				{
					ETotalCavalryHealth -= PSpearmansCavalryDamage;
					PTotalSpearmansDamage -= PSpearmansCavalryDamage;
				}
				if (ETotalCavalryHealth > 0 && PTotalCavalryDamage > 0)
				{
					ETotalCavalryHealth -= PCavalryCavalryDamage;
					PTotalCavalryDamage -= PCavalryCavalryDamage;
				}
				if (ETotalCavalryHealth > 0 && PTotalCatapultsDamage > 0)
				{
					ETotalCavalryHealth -= PCatapultsCavalryDamage;
					PTotalCatapultsDamage -= PCatapultsCavalryDamage;
				}

				//to enemy catapults
				if (ETotalCatapultsHealth > 0 && PTotalArchersWallsDamage > 0)
				{
					ETotalCatapultsHealth -= PWallsCatapultsDamage;
					PTotalArchersWallsDamage -= PWallsCatapultsDamage;
				}
				if (ETotalCatapultsHealth > 0 && PTotalArchersDamage > 0)
				{
					ETotalCatapultsHealth -= PArchersCatapultsDamage;
					PTotalArchersDamage -= PArchersCatapultsDamage;
				}
				if (ETotalCatapultsHealth > 0 && PTotalSpearmansDamage > 0)
				{
					ETotalCatapultsHealth -= PSpearmansCatapultsDamage;
					PTotalSpearmansDamage -= PSpearmansCatapultsDamage;
				}
				if (ETotalCatapultsHealth > 0 && PTotalCavalryDamage > 0)
				{
					ETotalCatapultsHealth -= PCavalryCatapultsDamage;
					PTotalCavalryDamage -= PCavalryCatapultsDamage;
				}
				if (ETotalCatapultsHealth > 0 && PTotalCatapultsDamage > 0)
				{
					ETotalCatapultsHealth -= PCatapultsCatapultsDamage;
					PTotalCatapultsDamage -= PCatapultsCatapultsDamage;
				}

				//to player walls
				if (PTotalArchersWallsHealth > 0 && ETotalArchersDamage > 0)
				{
					PTotalArchersWallsHealth -= EArchersWallsDamage;
					ETotalArchersDamage -= EArchersWallsDamage;
				}
				if (PTotalArchersWallsHealth > 0 && ETotalCatapultsDamage > 0)
				{
					PTotalArchersWallsHealth -= ECatapultsWallsDamage;
					ETotalCatapultsDamage -= ECatapultsWallsDamage;
				}

				//to player archers
				if (PTotalArchersHealth > 0 && ETotalArchersDamage > 0)
				{
					PTotalArchersHealth -= EArchersArchersDamage;
					ETotalArchersDamage -= EArchersArchersDamage;
				}
				if (PTotalArchersHealth > 0 && ETotalSpearmansDamage > 0)
				{
					PTotalArchersHealth -= ESpearmansArchersDamage;
					ETotalSpearmansDamage -= ESpearmansArchersDamage;
				}
				if (PTotalArchersHealth > 0 && ETotalCavalryDamage > 0)
				{
					PTotalArchersHealth -= ECavalryArchersDamage;
					ETotalCavalryDamage -= ECavalryArchersDamage;
				}
				if (PTotalArchersHealth > 0 && ETotalCatapultsDamage > 0)
				{
					PTotalArchersHealth -= ECatapultsArchersDamage;
					ETotalCatapultsDamage -= ECatapultsArchersDamage;
				}

				//to player spearmans
				if (PTotalSpearmansHealth > 0 && ETotalArchersDamage > 0)
				{
					PTotalSpearmansHealth -= EArchersSpearmansDamage;
					ETotalArchersHealth -= EArchersSpearmansDamage;
				}
				if (PTotalSpearmansHealth > 0 && ETotalSpearmansDamage > 0)
				{
					PTotalSpearmansHealth -= ESpearmansSpearmansDamage;
					ETotalSpearmansHealth -= ESpearmansSpearmansDamage;
				}
				if (PTotalSpearmansHealth > 0 && ETotalCavalryDamage > 0)
				{
					PTotalSpearmansHealth -= ECavalrySpearmansDamage;
					ETotalCavalryHealth -= ECavalrySpearmansDamage;
				}
				if (PTotalSpearmansHealth > 0 && ETotalCatapultsDamage > 0)
				{
					PTotalSpearmansHealth -= ECatapultsSpearmansDamage;
					ETotalCatapultsHealth -= ECatapultsSpearmansDamage;
				}

				//to player cavalry
				if (PTotalCavalryHealth > 0 && ETotalArchersDamage > 0)
				{
					PTotalCavalryHealth -= EArchersCavalryDamage;
					ETotalArchersDamage -= EArchersCavalryDamage;
				}
				if (PTotalCavalryHealth > 0 && ETotalSpearmansDamage > 0)
				{
					PTotalCavalryHealth -= ESpearmansCavalryDamage;
					ETotalSpearmansDamage -= ESpearmansCavalryDamage;
				}
				if (PTotalCavalryHealth > 0 && ETotalCavalryDamage > 0)
				{
					PTotalCavalryHealth -= ECavalryCavalryDamage;
					ETotalCavalryDamage -= ECavalryCavalryDamage;
				}
				if (PTotalCavalryHealth > 0 && ETotalCatapultsDamage > 0)
				{
					PTotalCavalryHealth -= ECatapultsCavalryDamage;
					ETotalCatapultsDamage -= ECatapultsCavalryDamage;
				}

				//to player catapults
				if (PTotalCatapultsHealth > 0 && ETotalArchersDamage > 0)
				{
					PTotalCatapultsHealth -= EArchersCatapultsDamage;
					ETotalArchersDamage -= EArchersCatapultsDamage;
				}
				if (PTotalCatapultsHealth > 0 && ETotalSpearmansDamage > 0)
				{
					PTotalCatapultsHealth -= ESpearmansCatapultsDamage;
					ETotalSpearmansDamage -= ESpearmansCatapultsDamage;
				}
				if (PTotalCatapultsHealth > 0 && ETotalCavalryDamage > 0)
				{
					PTotalCatapultsHealth -= ECavalryCatapultsDamage;
					ETotalCavalryDamage -= ECavalryCatapultsDamage;
				}
				if (PTotalCatapultsHealth > 0 && ETotalCatapultsDamage > 0)
				{
					PTotalCatapultsHealth -= ECatapultsCatapultsDamage;
					ETotalCatapultsDamage -= ECatapultsCatapultsDamage;
				}

				//to player castlle from enemy archers
				if ((PTotalArchersWallsHealth + PTotalArchersHealth + PTotalSpearmansHealth + PTotalCavalryHealth + PTotalCatapultsHealth) <= 0 && ETotalArchersDamage > 0)
				{
					PlayerCastleCondition -= ETotalArchersDamage * 0.01;
					ETotalArchersDamage = 0;
				}
				
				//to player castlle from enemy spearmans
				if ((PTotalArchersHealth + PTotalSpearmansHealth + PTotalCavalryHealth + PTotalCatapultsHealth) <= 0 && ETotalSpearmansDamage > 0)
				{
					PlayerCastleCondition -= ETotalSpearmansDamage * 0.02;
					ETotalSpearmansDamage = 0;
				}
				
				//to player castlle from enemy cavalry
				if ((PTotalArchersHealth + PTotalSpearmansHealth + PTotalCavalryHealth + PTotalCatapultsHealth) <= 0 && ETotalCavalryDamage > 0)
				{
					PlayerCastleCondition -= ETotalCavalryDamage * 0.02;
					ETotalCavalryDamage = 0;
				}

				//to player castlle from enemy catapults
				if ((PTotalArchersWallsHealth + PTotalArchersHealth + PTotalSpearmansHealth + PTotalCavalryHealth + PTotalCatapultsHealth) <= 0 && ETotalCatapultsDamage > 0)
				{
					PlayerCastleCondition -= ETotalCatapultsDamage * 0.05;
					ETotalCatapultsDamage = 0;
				}
			}



			//army return
			//player walls
			ArmyReturn = 0;
			if (PlayerArmourEnchance == true)
			{
				while (PTotalArchersWallsHealth >= (ArchersHealth * PArchersHealthLvl * 0.2 / 2))
				{
					PTotalArchersWallsHealth -= ArchersHealth * PArchersHealthLvl * 0.2;
					ArmyReturn += 1;
				}
				PlayerArchers += ArmyReturn;
			}
			else
			{
				while (PTotalArchersWallsHealth >= (ArchersHealth * PArchersHealthLvl / 2))
				{
					PTotalArchersWallsHealth -= ArchersHealth * PArchersHealthLvl;
					ArmyReturn += 1;
				}
				PlayerArchers += ArmyReturn;
			}

			//player archers
			ArmyReturn = 0;
			if (PlayerArmourEnchance == true)
			{
				while (PTotalArchersHealth >= (ArchersHealth * PArchersHealthLvl * 0.2 / 2))
				{
					PTotalArchersHealth -= ArchersHealth * PArchersHealthLvl * 0.2;
					ArmyReturn += 1;
				}
				PlayerArchers += ArmyReturn;
			}
			else
			{
				while (PTotalArchersHealth >= (ArchersHealth * PArchersHealthLvl / 2))
				{
					PTotalArchersHealth -= ArchersHealth * PArchersHealthLvl;
					ArmyReturn += 1;
				}
				PlayerArchers += ArmyReturn;
			}

			//player spearmans
			ArmyReturn = 0;
			if (PlayerArmourEnchance == true)
			{
				while (PTotalSpearmansHealth >= (SpearmansHealth * PSpearmansHealthLvl * 0.2 / 2))
				{
					PTotalSpearmansHealth -= SpearmansHealth * PSpearmansHealthLvl * 0.2;
					ArmyReturn += 1;
				}
				PlayerSpearmans += ArmyReturn;
			}
			else
			{
				while (PTotalSpearmansHealth >= (SpearmansHealth * PSpearmansHealthLvl / 2))
				{
					PTotalSpearmansHealth -= SpearmansHealth * PSpearmansHealthLvl;
					ArmyReturn += 1;
				}
				PlayerSpearmans += ArmyReturn;
			}

			//player cavalry
			ArmyReturn = 0;
			if (PlayerArmourEnchance == true)
			{
				while (PTotalCavalryHealth >= (CavalryHealth * PCavalryHealthLvl * 0.2 / 2))
				{
					PTotalCavalryHealth -= CavalryHealth * PCavalryHealthLvl * 0.2;
					ArmyReturn += 1;
				}
				PlayerCavalry += ArmyReturn;
			}
			else
			{
				while (PTotalCavalryHealth >= (CavalryHealth * PCavalryHealthLvl / 2))
				{
					PTotalCavalryHealth -= CavalryHealth * PCavalryHealthLvl;
					ArmyReturn += 1;
				}
				PlayerCavalry += ArmyReturn;
			}

			//player catapults
			ArmyReturn = 0;
			while (PTotalCatapultsHealth >= (CatapultsHealth * PCatapultsHealthLvl / 2))
			{
				PTotalCatapultsHealth -= CatapultsHealth * PCatapultsHealthLvl;
				ArmyReturn += 1;
			}
			PlayerCatapults += ArmyReturn;

			//enemy archers
			ArmyReturn = 0;
			if (EnemyArmourEnchance == true)
			{
				while (ETotalArchersHealth >= (ArchersHealth * EArchersHealthLvl * 0.2 / 2))
				{
					ETotalArchersHealth -= ArchersHealth * EArchersHealthLvl * 0.2;
					ArmyReturn += 1;
				}
				EnemyArchers += ArmyReturn;
			}
			else
			{
				while (ETotalArchersHealth >= (ArchersHealth * EArchersHealthLvl / 2))
				{
					ETotalArchersHealth -= ArchersHealth * EArchersHealthLvl;
					ArmyReturn += 1;
				}
				EnemyArchers += ArmyReturn;
			}

			//enemy spearmans
			ArmyReturn = 0;
			if (EnemyArmourEnchance == true)
			{
				while (ETotalSpearmansHealth >= (SpearmansHealth * ESpearmansHealthLvl * 0.2 / 2))
				{
					ETotalSpearmansHealth -= SpearmansHealth * ESpearmansHealthLvl * 0.2;
					ArmyReturn += 1;
				}
				EnemySpearmans += ArmyReturn;
			}
			else
			{
				while (ETotalSpearmansHealth >= (SpearmansHealth * ESpearmansHealthLvl / 2))
				{
					ETotalSpearmansHealth -= SpearmansHealth * ESpearmansHealthLvl;
					ArmyReturn += 1;
				}
				EnemySpearmans += ArmyReturn;
			}

			//enemy cavalry
			ArmyReturn = 0;
			if (EnemyArmourEnchance == true)
			{
				while (ETotalCavalryHealth >= (CavalryHealth * ECavalryHealthLvl * 0.2 / 2))
				{
					ETotalCavalryHealth -= CavalryHealth * ECavalryHealthLvl * 0.2;
					ArmyReturn += 1;
				}
				EnemyCavalry += ArmyReturn;
			}
			else
			{
				while (ETotalCavalryHealth >= (CavalryHealth * ECavalryHealthLvl / 2))
				{
					ETotalCavalryHealth -= CavalryHealth * ECavalryHealthLvl;
					ArmyReturn += 1;
				}
				EnemyCavalry += ArmyReturn;
			}

			//enemy catapults
			ArmyReturn = 0;
			while (ETotalCatapultsHealth >= (CatapultsHealth * ECatapultsHealthLvl / 2))
			{
				ETotalCatapultsHealth -= CatapultsHealth * ECatapultsHealthLvl;
				ArmyReturn += 1;
			}
			EnemyCatapults += ArmyReturn;
		}
		else
		{
			ETotalArchersWallsDamage = EnemyArchersWalls * ArchersDamage * EArchersDamageLvl;
			ETotalArchersWallsHealth = EnemyArchersWalls * ArchersHealth * EArchersHealthLvl;

			EnemyArchersWalls = 0;

			//player
			PArchersArchersDamage = PTotalArchersDamage * 0.20;
			PArchersSpearmansDamage = PTotalArchersDamage * 0.50;
			PArchersCavalryDamage = PTotalArchersDamage * 0.15;
			PArchersCatapultsDamage = PTotalArchersDamage * 0.10;
			PArchersWallsDamage = PTotalArchersDamage * 0.05;

			PSpearmansArchersDamage = PTotalSpearmansDamage * 0.10;
			PSpearmansSpearmansDamage = PTotalSpearmansDamage * 0.25;
			PSpearmansCavalryDamage = PTotalSpearmansDamage * 0.50;
			PSpearmansCatapultsDamage = PTotalSpearmansDamage * 0.15;

			PCavalryArchersDamage = PTotalCavalryDamage * 0.50;
			PCavalrySpearmansDamage = PTotalCavalryDamage * 0.15;
			PCavalryCavalryDamage = PTotalCavalryDamage * 0.25;
			PCavalryCatapultsDamage = PTotalCavalryDamage * 0.10;

			PCatapultsArchersDamage = PTotalCatapultsDamage * 0.25;
			PCatapultsSpearmansDamage = PTotalCatapultsDamage * 0.15;
			PCatapultsCavalryDamage = PTotalCatapultsDamage * 0.05;
			PCatapultsCatapultsDamage = PTotalCatapultsDamage * 0.10;
			PCatapultsWallsDamage = PTotalCatapultsDamage * 0.45;
			//player-end
			//enemy
			EWallsArchersDamage = ETotalArchersWallsDamage * 0.25;
			EWallsSpearmansDamage = ETotalArchersWallsDamage * 0.50;
			EWallsCavalryDamage = ETotalArchersWallsDamage * 0.15;
			EWallsCatapultsDamage = ETotalArchersWallsDamage * 0.10;

			EArchersArchersDamage = ETotalArchersDamage * 0.25;
			EArchersSpearmansDamage = ETotalArchersDamage * 0.50;
			EArchersCavalryDamage = ETotalArchersDamage * 0.15;
			EArchersCatapultsDamage = ETotalArchersDamage * 0.10;

			ESpearmansArchersDamage = ETotalSpearmansDamage * 0.10;
			ESpearmansSpearmansDamage = ETotalSpearmansDamage * 0.25;
			ESpearmansCavalryDamage = ETotalSpearmansDamage * 0.50;
			ESpearmansCatapultsDamage = ETotalSpearmansDamage * 0.15;

			ECavalryArchersDamage = ETotalCavalryDamage * 0.50;
			ECavalrySpearmansDamage = ETotalCavalryDamage * 0.15;
			ECavalryCavalryDamage = ETotalCavalryDamage * 0.25;
			ECavalryCatapultsDamage = ETotalCavalryDamage * 0.10;

			ECatapultsArchersDamage = ETotalCatapultsDamage * 0.25;
			ECatapultsSpearmansDamage = ETotalCatapultsDamage * 0.40;
			ECatapultsCavalryDamage = ETotalCatapultsDamage * 0.15;
			ECatapultsCatapultsDamage = ETotalCatapultsDamage * 0.20;
			//enemy-end

			while (((ETotalArchersWallsDamage + ETotalArchersDamage + ETotalSpearmansDamage + ETotalCavalryDamage + ETotalCatapultsDamage > 0) && (PTotalArchersHealth + PTotalSpearmansHealth + PTotalCavalryHealth + PTotalCatapultsHealth > 0))
				|| (PTotalArchersDamage + PTotalSpearmansDamage + PTotalCavalryDamage + PTotalCatapultsDamage > 0) && ((PTotalArchersHealth + PTotalSpearmansHealth + PTotalCavalryHealth + PTotalCatapultsHealth > 0)))
			{
				//to player archers
				if (PTotalArchersHealth > 0 && ETotalArchersWallsDamage > 0)
				{
					PTotalArchersHealth -= EWallsArchersDamage;
					ETotalArchersWallsDamage -= EWallsArchersDamage;
				}
				if (PTotalArchersHealth > 0 && ETotalArchersDamage > 0)
				{
					PTotalArchersHealth -= EArchersArchersDamage;
					ETotalArchersDamage -= EArchersArchersDamage;
				}
				if (PTotalArchersHealth > 0 && ETotalSpearmansDamage > 0)
				{
					PTotalArchersHealth -= ESpearmansArchersDamage;
					ETotalSpearmansDamage -= ESpearmansArchersDamage;
				}
				if (PTotalArchersHealth > 0 && ETotalCavalryDamage > 0)
				{
					PTotalArchersHealth -= ECavalryArchersDamage;
					ETotalCavalryDamage -= ECavalryArchersDamage;
				}
				if (PTotalArchersHealth > 0 && ETotalCatapultsDamage > 0)
				{
					PTotalArchersHealth -= ECatapultsArchersDamage;
					ETotalCatapultsDamage -= ECatapultsArchersDamage;
				}

				//to player spearmans
				if (PTotalSpearmansHealth > 0 && ETotalArchersWallsDamage > 0)
				{
					PTotalSpearmansHealth -= EWallsSpearmansDamage;
					ETotalArchersWallsDamage -= EWallsSpearmansDamage;
				}
				if (PTotalSpearmansHealth > 0 && ETotalArchersDamage > 0)
				{
					PTotalSpearmansHealth -= EArchersSpearmansDamage;
					ETotalArchersDamage -= EArchersSpearmansDamage;
				}
				if (PTotalSpearmansHealth > 0 && ETotalSpearmansDamage > 0)
				{
					PTotalSpearmansHealth -= ESpearmansSpearmansDamage;
					ETotalSpearmansDamage -= ESpearmansSpearmansDamage;
				}
				if (PTotalSpearmansHealth > 0 && ETotalCavalryDamage > 0)
				{
					PTotalSpearmansHealth -= ECavalrySpearmansDamage;
					ETotalCavalryDamage -= ECavalrySpearmansDamage;
				}
				if (PTotalSpearmansHealth > 0 && ETotalCatapultsDamage > 0)
				{
					PTotalSpearmansHealth -= ECatapultsSpearmansDamage;
					ETotalCatapultsDamage -= ECatapultsSpearmansDamage;
				}

				//to player cavalry
				if (PTotalCavalryHealth > 0 && ETotalArchersWallsDamage > 0)
				{
					PTotalCavalryHealth -= EWallsCavalryDamage;
					ETotalArchersWallsDamage -= EWallsCavalryDamage;
				}
				if (PTotalCavalryHealth > 0 && ETotalArchersDamage > 0)
				{
					PTotalCavalryHealth -= EArchersCavalryDamage;
					ETotalArchersDamage -= EArchersCavalryDamage;
				}
				if (PTotalCavalryHealth > 0 && ETotalSpearmansDamage > 0)
				{
					PTotalCavalryHealth -= ESpearmansCavalryDamage;
					ETotalSpearmansDamage -= ESpearmansCavalryDamage;
				}
				if (PTotalCavalryHealth > 0 && ETotalCavalryDamage > 0)
				{
					PTotalCavalryHealth -= ECavalryCavalryDamage;
					ETotalCavalryDamage -= ECavalryCavalryDamage;
				}
				if (PTotalCavalryHealth > 0 && ETotalCatapultsDamage > 0)
				{
					PTotalCavalryHealth -= ECatapultsCavalryDamage;
					ETotalCatapultsDamage -= ECatapultsCavalryDamage;
				}

				//to player catapults
				if (PTotalCatapultsHealth > 0 && ETotalArchersWallsDamage > 0)
				{
					PTotalCatapultsHealth -= EWallsCatapultsDamage;
					ETotalArchersWallsDamage -= EWallsCatapultsDamage;
				}
				if (PTotalCatapultsHealth > 0 && ETotalArchersDamage > 0)
				{
					PTotalCatapultsHealth -= EArchersCatapultsDamage;
					ETotalArchersDamage -= EArchersCatapultsDamage;
				}
				if (PTotalCatapultsHealth > 0 && ETotalSpearmansDamage > 0)
				{
					PTotalCatapultsHealth -= ESpearmansCatapultsDamage;
					ETotalSpearmansDamage -= ESpearmansCatapultsDamage;
				}
				if (PTotalCatapultsHealth > 0 && ETotalCavalryDamage > 0)
				{
					PTotalCatapultsHealth -= ECavalryCatapultsDamage;
					ETotalCavalryDamage -= ECavalryCatapultsDamage;
				}
				if (PTotalCatapultsHealth > 0 && ETotalCatapultsDamage > 0)
				{
					PTotalCatapultsHealth -= ECatapultsCatapultsDamage;
					ETotalCatapultsDamage -= ECatapultsCatapultsDamage;
				}

				//to enemy walls
				if (ETotalArchersWallsHealth > 0 && PTotalArchersDamage > 0)
				{
					ETotalArchersWallsHealth -= PArchersWallsDamage;
					PTotalArchersDamage -= PArchersWallsDamage;
				}
				if (ETotalArchersWallsHealth > 0 && PTotalCatapultsDamage > 0)
				{
					ETotalArchersWallsHealth -= PCatapultsWallsDamage;
					PTotalCatapultsDamage -= PCatapultsWallsDamage;
				}

				//to enemy archers
				if (ETotalArchersHealth > 0 && PTotalArchersDamage > 0)
				{
					ETotalArchersHealth -= PArchersArchersDamage;
					PTotalArchersDamage -= PArchersArchersDamage;
				}
				if (ETotalArchersHealth > 0 && PTotalSpearmansDamage > 0)
				{
					ETotalArchersHealth -= PSpearmansArchersDamage;
					PTotalSpearmansDamage -= PSpearmansArchersDamage;
				}
				if (ETotalArchersHealth > 0 && PTotalCavalryDamage > 0)
				{
					ETotalArchersHealth -= PCavalryArchersDamage;
					PTotalCavalryDamage -= PCavalryArchersDamage;
				}
				if (ETotalArchersHealth > 0 && PTotalCatapultsDamage > 0)
				{
					ETotalArchersHealth -= PCatapultsArchersDamage;
					PTotalCatapultsDamage -= PCatapultsArchersDamage;
				}

				//to enemy spearmans
				if (ETotalSpearmansHealth > 0 && PTotalArchersDamage > 0)
				{
					ETotalSpearmansHealth -= PArchersSpearmansDamage;
					PTotalArchersHealth -= PArchersSpearmansDamage;
				}
				if (ETotalSpearmansHealth > 0 && PTotalSpearmansDamage > 0)
				{
					ETotalSpearmansHealth -= PSpearmansSpearmansDamage;
					PTotalSpearmansHealth -= PSpearmansSpearmansDamage;
				}
				if (ETotalSpearmansHealth > 0 && PTotalCavalryDamage > 0)
				{
					ETotalSpearmansHealth -= PCavalrySpearmansDamage;
					PTotalCavalryHealth -= PCavalrySpearmansDamage;
				}
				if (ETotalSpearmansHealth > 0 && PTotalCatapultsDamage > 0)
				{
					ETotalSpearmansHealth -= PCatapultsSpearmansDamage;
					PTotalCatapultsHealth -= PCatapultsSpearmansDamage;
				}

				//to enemy cavalry
				if (ETotalCavalryHealth > 0 && PTotalArchersDamage > 0)
				{
					ETotalCavalryHealth -= PArchersCavalryDamage;
					PTotalArchersDamage -= PArchersCavalryDamage;
				}
				if (ETotalCavalryHealth > 0 && PTotalSpearmansDamage > 0)
				{
					ETotalCavalryHealth -= PSpearmansCavalryDamage;
					PTotalSpearmansDamage -= PSpearmansCavalryDamage;
				}
				if (ETotalCavalryHealth > 0 && PTotalCavalryDamage > 0)
				{
					ETotalCavalryHealth -= PCavalryCavalryDamage;
					PTotalCavalryDamage -= PCavalryCavalryDamage;
				}
				if (ETotalCavalryHealth > 0 && PTotalCatapultsDamage > 0)
				{
					ETotalCavalryHealth -= PCatapultsCavalryDamage;
					PTotalCatapultsDamage -= PCatapultsCavalryDamage;
				}

				//to enemy catapults
				if (ETotalCatapultsHealth > 0 && PTotalArchersDamage > 0)
				{
					ETotalCatapultsHealth -= PArchersCatapultsDamage;
					PTotalArchersDamage -= PArchersCatapultsDamage;
				}
				if (ETotalCatapultsHealth > 0 && PTotalSpearmansDamage > 0)
				{
					ETotalCatapultsHealth -= PSpearmansCatapultsDamage;
					PTotalSpearmansDamage -= PSpearmansCatapultsDamage;
				}
				if (ETotalCatapultsHealth > 0 && PTotalCavalryDamage > 0)
				{
					ETotalCatapultsHealth -= PCavalryCatapultsDamage;
					PTotalCavalryDamage -= PCavalryCatapultsDamage;
				}
				if (ETotalCatapultsHealth > 0 && PTotalCatapultsDamage > 0)
				{
					ETotalCatapultsHealth -= PCatapultsCatapultsDamage;
					PTotalCatapultsDamage -= PCatapultsCatapultsDamage;
				}

				//to enemy castlle from player archers
				if ((ETotalArchersWallsHealth + ETotalArchersHealth + ETotalSpearmansHealth + ETotalCavalryHealth + ETotalCatapultsHealth) <= 0 && PTotalArchersDamage > 0)
				{
					EnemyCastleCondition -= PTotalArchersDamage * 0.01;
					PTotalArchersDamage = 0;
				}

				//to enemy castlle from player spearmans
				if ((ETotalArchersHealth + ETotalSpearmansHealth + ETotalCavalryHealth + ETotalCatapultsHealth) <= 0 && PTotalSpearmansDamage > 0)
				{
					EnemyCastleCondition -= PTotalSpearmansDamage * 0.02;
					PTotalSpearmansDamage = 0;
				}

				//to enemy castlle from player cavalry
				if ((ETotalArchersHealth + ETotalSpearmansHealth + ETotalCavalryHealth + ETotalCatapultsHealth) <= 0 && PTotalCavalryDamage > 0)
				{
					EnemyCastleCondition -= PTotalCavalryDamage * 0.02;
					PTotalCavalryDamage = 0;
				}

				//to enemy castlle from player catapults
				if ((ETotalArchersWallsHealth + ETotalArchersHealth + ETotalSpearmansHealth + ETotalCavalryHealth + ETotalCatapultsHealth) <= 0 && PTotalCatapultsDamage > 0)
				{
					EnemyCastleCondition -= PTotalCatapultsDamage * 0.05;
					PTotalCatapultsDamage = 0;
				}
			}

			//army return
			//player walls
			ArmyReturn = 0;
			if (PlayerArmourEnchance == true)
			{
				while (PTotalArchersWallsHealth >= (ArchersHealth * PArchersHealthLvl * 0.2 / 2))
				{
					PTotalArchersWallsHealth -= ArchersHealth * PArchersHealthLvl * 0.2;
					ArmyReturn += 1;
				}
				PlayerArchers += ArmyReturn;
			}
			else
			{
				while (PTotalArchersWallsHealth >= (ArchersHealth * PArchersHealthLvl / 2))
				{
					PTotalArchersWallsHealth -= ArchersHealth * PArchersHealthLvl;
					ArmyReturn += 1;
				}
				PlayerArchers += ArmyReturn;
			}

			//player archers
			ArmyReturn = 0;
			if (PlayerArmourEnchance == true)
			{
				while (PTotalArchersHealth >= (ArchersHealth * PArchersHealthLvl * 0.2 / 2))
				{
					PTotalArchersHealth -= ArchersHealth * PArchersHealthLvl * 0.2;
					ArmyReturn += 1;
				}
				PlayerArchers += ArmyReturn;
			}
			else
			{
				while (PTotalArchersHealth >= (ArchersHealth * PArchersHealthLvl / 2))
				{
					PTotalArchersHealth -= ArchersHealth * PArchersHealthLvl;
					ArmyReturn += 1;
				}
				PlayerArchers += ArmyReturn;
			}

			//player spearmans
			ArmyReturn = 0;
			if (PlayerArmourEnchance == true)
			{
				while (PTotalSpearmansHealth >= (SpearmansHealth * PSpearmansHealthLvl * 0.2 / 2))
				{
					PTotalSpearmansHealth -= SpearmansHealth * PSpearmansHealthLvl * 0.2;
					ArmyReturn += 1;
				}
				PlayerSpearmans += ArmyReturn;
			}
			else
			{
				while (PTotalSpearmansHealth >= (SpearmansHealth * PSpearmansHealthLvl / 2))
				{
					PTotalSpearmansHealth -= SpearmansHealth * PSpearmansHealthLvl;
					ArmyReturn += 1;
				}
				PlayerSpearmans += ArmyReturn;
			}

			//player cavalry
			ArmyReturn = 0;
			if (PlayerArmourEnchance == true)
			{
				while (PTotalCavalryHealth >= (CavalryHealth * PCavalryHealthLvl * 0.2 / 2))
				{
					PTotalCavalryHealth -= CavalryHealth * PCavalryHealthLvl * 0.2;
					ArmyReturn += 1;
				}
				PlayerCavalry += ArmyReturn;
			}
			else
			{
				while (PTotalCavalryHealth >= (CavalryHealth * PCavalryHealthLvl / 2))
				{
					PTotalCavalryHealth -= CavalryHealth * PCavalryHealthLvl;
					ArmyReturn += 1;
				}
				PlayerCavalry += ArmyReturn;
			}

			//player catapults
			ArmyReturn = 0;
			while (PTotalCatapultsHealth >= (CatapultsHealth * PCatapultsHealthLvl / 2))
			{
				PTotalCatapultsHealth -= CatapultsHealth * PCatapultsHealthLvl;
				ArmyReturn += 1;
			}
			PlayerCatapults += ArmyReturn;

			//enemy archers
			ArmyReturn = 0;
			if (EnemyArmourEnchance == true)
			{
				while (ETotalArchersHealth >= (ArchersHealth * EArchersHealthLvl * 0.2 / 2))
				{
					ETotalArchersHealth -= ArchersHealth * EArchersHealthLvl * 0.2;
					ArmyReturn += 1;
				}
				EnemyArchers += ArmyReturn;
			}
			else
			{
				while (ETotalArchersHealth >= (ArchersHealth * EArchersHealthLvl / 2))
				{
					ETotalArchersHealth -= ArchersHealth * EArchersHealthLvl;
					ArmyReturn += 1;
				}
				EnemyArchers += ArmyReturn;
			}

			//enemy spearmans
			ArmyReturn = 0;
			if (EnemyArmourEnchance == true)
			{
				while (ETotalSpearmansHealth >= (SpearmansHealth * ESpearmansHealthLvl * 0.2 / 2))
				{
					ETotalSpearmansHealth -= SpearmansHealth * ESpearmansHealthLvl * 0.2;
					ArmyReturn += 1;
				}
				EnemySpearmans += ArmyReturn;
			}
			else
			{
				while (ETotalSpearmansHealth >= (SpearmansHealth * ESpearmansHealthLvl / 2))
				{
					ETotalSpearmansHealth -= SpearmansHealth * ESpearmansHealthLvl;
					ArmyReturn += 1;
				}
				EnemySpearmans += ArmyReturn;
			}

			//enemy cavalry
			ArmyReturn = 0;
			if (EnemyArmourEnchance == true)
			{
				while (ETotalCavalryHealth >= (CavalryHealth * ECavalryHealthLvl * 0.2 / 2))
				{
					ETotalCavalryHealth -= CavalryHealth * ECavalryHealthLvl * 0.2;
					ArmyReturn += 1;
				}
				EnemyCavalry += ArmyReturn;
			}
			else
			{
				while (ETotalCavalryHealth >= (CavalryHealth * ECavalryHealthLvl / 2))
				{
					ETotalCavalryHealth -= CavalryHealth * ECavalryHealthLvl;
					ArmyReturn += 1;
				}
				EnemyCavalry += ArmyReturn;
			}

			//enemy catapults
			ArmyReturn = 0;
			while (ETotalCatapultsHealth >= (CatapultsHealth * ECatapultsHealthLvl / 2))
			{
				ETotalCatapultsHealth -= CatapultsHealth * ECatapultsHealthLvl;
				ArmyReturn += 1;
			}
			EnemyCatapults += ArmyReturn;

		}
	}
}

void Pause()
{
	cout << "Press space to continue, Sir." << endl << endl;

	while (true)
	{
		if (GetAsyncKeyState(VK_SPACE))
		{
			Sleep(500);
			break;
		}
	}
}