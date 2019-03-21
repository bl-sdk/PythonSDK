#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetPhysics()
{
    class_< UBehavior_SetPhysics, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetPhysics", no_init)
        .def_readwrite("Physics", &UBehavior_SetPhysics::Physics)
        .def_readwrite("BodyAction", &UBehavior_SetPhysics::BodyAction)
        .def_readwrite("SimulationAction", &UBehavior_SetPhysics::SimulationAction)
        .def("StaticClass", &UBehavior_SetPhysics::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetPhysics::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}