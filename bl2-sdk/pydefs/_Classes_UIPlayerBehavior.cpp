#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIPlayerBehavior(py::module &m)
{
    py::class_< UIPlayerBehavior,  UInterface   >(m, "UIPlayerBehavior")
        .def("Behavior_StopRevive", &UIPlayerBehavior::Behavior_StopRevive)
        .def("Behavior_StartRevive", &UIPlayerBehavior::Behavior_StartRevive)
        .def("GetPlayerLoot", &UIPlayerBehavior::GetPlayerLoot)
        .def("Behavior_UnlockAchievementForAllPlayers", &UIPlayerBehavior::Behavior_UnlockAchievementForAllPlayers)
        .def("Behavior_DetachMeleeWeapon", &UIPlayerBehavior::Behavior_DetachMeleeWeapon)
        .def("Behavior_AttachMeleeWeapon", &UIPlayerBehavior::Behavior_AttachMeleeWeapon)
        .def("Behavior_UnlockAchievement", &UIPlayerBehavior::Behavior_UnlockAchievement)
        .def("Behavior_RegisterStation", &UIPlayerBehavior::Behavior_RegisterStation)
        .def("Behavior_SendMessageToPlayers", &UIPlayerBehavior::Behavior_SendMessageToPlayers)
        .def("Behavior_CameraAnim", &UIPlayerBehavior::Behavior_CameraAnim)
        .def("Behavior_ViewShake", &UIPlayerBehavior::Behavior_ViewShake)
        .def("Behavior_SpawnTeleporter", &UIPlayerBehavior::Behavior_SpawnTeleporter)
        .def("Behavior_ForceFeedback", &UIPlayerBehavior::Behavior_ForceFeedback)
        .def("Behavior_SpawnCurrentProjectile", &UIPlayerBehavior::Behavior_SpawnCurrentProjectile, py::return_value_policy::reference)
        .def("Behavior_SetCurrentProjectile", &UIPlayerBehavior::Behavior_SetCurrentProjectile)
        .def("Behavior_ThrowGrenade", &UIPlayerBehavior::Behavior_ThrowGrenade)
        .def("Behavior_Melee", &UIPlayerBehavior::Behavior_Melee)
        .def("Behavior_Reload", &UIPlayerBehavior::Behavior_Reload)
          ;
}