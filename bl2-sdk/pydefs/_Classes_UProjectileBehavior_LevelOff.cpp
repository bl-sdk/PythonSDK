#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_LevelOff()
{
    class_< UProjectileBehavior_LevelOff, bases< UProjectileBehaviorBase >  , boost::noncopyable>("UProjectileBehavior_LevelOff", no_init)
        .def_readwrite("DesiredWorldZToLevelOff", &UProjectileBehavior_LevelOff::DesiredWorldZToLevelOff)
        .def_readwrite("TurnSpeed", &UProjectileBehavior_LevelOff::TurnSpeed)
        .def("StaticClass", &UProjectileBehavior_LevelOff::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UProjectileBehavior_LevelOff::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}