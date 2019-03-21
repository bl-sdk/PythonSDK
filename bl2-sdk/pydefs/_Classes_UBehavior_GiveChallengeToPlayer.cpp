#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_GiveChallengeToPlayer()
{
    class_< UBehavior_GiveChallengeToPlayer, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_GiveChallengeToPlayer", no_init)
        .def_readwrite("Challenge", &UBehavior_GiveChallengeToPlayer::Challenge)
        .def_readwrite("Challenges", &UBehavior_GiveChallengeToPlayer::Challenges)
        .def("StaticClass", &UBehavior_GiveChallengeToPlayer::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_GiveChallengeToPlayer::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}