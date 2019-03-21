#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_IsObjectPlayer()
{
    class_< UBehavior_IsObjectPlayer, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_IsObjectPlayer", no_init)
        .def_readwrite("PlayerCandidate", &UBehavior_IsObjectPlayer::PlayerCandidate)
        .def("StaticClass", &UBehavior_IsObjectPlayer::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_IsObjectPlayer::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}