#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_UnlockAvatarAwardForAllPlayers()
{
    class_< UBehavior_UnlockAvatarAwardForAllPlayers, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_UnlockAvatarAwardForAllPlayers", no_init)
        .def_readwrite("AvatarAward", &UBehavior_UnlockAvatarAwardForAllPlayers::AvatarAward)
        .def("StaticClass", &UBehavior_UnlockAvatarAwardForAllPlayers::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_UnlockAvatarAwardForAllPlayers::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}