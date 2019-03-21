#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AChallengeManager()
{
    class_< AChallengeManager, bases< AActor >  , boost::noncopyable>("AChallengeManager", no_init)
        .def_readwrite("VfTable_IIBehaviorConsumer", &AChallengeManager::VfTable_IIBehaviorConsumer)
        .def_readwrite("StatIdChallengeMap", &AChallengeManager::StatIdChallengeMap)
        .def_readwrite("BPRewardText", &AChallengeManager::BPRewardText)
        .def_readwrite("BehaviorConsumerHandle", &AChallengeManager::BehaviorConsumerHandle)
        .def("StaticClass", &AChallengeManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetBehaviorConsumerHandle", &AChallengeManager::GetBehaviorConsumerHandle)
        .def("OnStatIncrement", &AChallengeManager::OnStatIncrement)
        .def("UnregisterChallenges", &AChallengeManager::UnregisterChallenges)
        .def("UnregisterChallenge", &AChallengeManager::UnregisterChallenge)
        .def("RegisterChallenge", &AChallengeManager::RegisterChallenge)
        .staticmethod("StaticClass")
  ;
}