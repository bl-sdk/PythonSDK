#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ReviveInjuredPlayer()
{
    class_< UBehavior_ReviveInjuredPlayer, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ReviveInjuredPlayer", no_init)
        .def_readwrite("ReviverContext", &UBehavior_ReviveInjuredPlayer::ReviverContext)
        .def("StaticClass", &UBehavior_ReviveInjuredPlayer::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ReviveInjuredPlayer::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}