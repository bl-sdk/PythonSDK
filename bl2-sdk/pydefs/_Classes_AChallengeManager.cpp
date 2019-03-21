#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AChallengeManager()
{
    py::class_< AChallengeManager,  AActor   >("AChallengeManager")
        .def_readwrite("VfTable_IIBehaviorConsumer", &AChallengeManager::VfTable_IIBehaviorConsumer)
        .def_readwrite("StatIdChallengeMap", &AChallengeManager::StatIdChallengeMap)
        .def_readwrite("BPRewardText", &AChallengeManager::BPRewardText)
        .def_readwrite("BehaviorConsumerHandle", &AChallengeManager::BehaviorConsumerHandle)
        .def("StaticClass", &AChallengeManager::StaticClass, py::return_value_policy::reference)
        .def("GetBehaviorConsumerHandle", &AChallengeManager::GetBehaviorConsumerHandle)
        .def("OnStatIncrement", &AChallengeManager::OnStatIncrement)
        .def("UnregisterChallenges", &AChallengeManager::UnregisterChallenges)
        .def("UnregisterChallenge", &AChallengeManager::UnregisterChallenge)
        .def("RegisterChallenge", &AChallengeManager::RegisterChallenge)
        .staticmethod("StaticClass")
  ;
}