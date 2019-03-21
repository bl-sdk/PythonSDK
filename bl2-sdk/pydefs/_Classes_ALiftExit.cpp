#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ALiftExit()
{
    class_< ALiftExit, bases< ANavigationPoint >  , boost::noncopyable>("ALiftExit", no_init)
        .def_readwrite("MyLiftCenter", &ALiftExit::MyLiftCenter)
        .def("StaticClass", &ALiftExit::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventSuggestMovePreparation", &ALiftExit::eventSuggestMovePreparation)
        .def("WaitForLift", &ALiftExit::WaitForLift)
        .def("CanBeReachedFromLiftBy", &ALiftExit::CanBeReachedFromLiftBy)
        .staticmethod("StaticClass")
  ;
}