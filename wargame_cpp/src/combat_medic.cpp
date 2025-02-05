#include "combat_medic.hpp"

CombatMedic::CombatMedic(int health, int damage) : Soldier(health, damage)
{

}

void CombatMedic::heal(Unit &target)
{

    target.set_health(target.get_health() + target.get_health()); // Ville gerne have brugt CombatMedics damage værdi til at heale med, men kunne ikke finde ud af at få fat i den
}