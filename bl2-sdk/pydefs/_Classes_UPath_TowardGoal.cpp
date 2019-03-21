#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPath_TowardGoal()
{
    class_< UPath_TowardGoal, bases< UPathConstraint >  , boost::noncopyable>("UPath_TowardGoal", no_init)
        .def_readwrite("GoalActor", &UPath_TowardGoal::GoalActor)
        .def("StaticClass", &UPath_TowardGoal::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UPath_TowardGoal::Recycle)
        .def("TowardGoal", &UPath_TowardGoal::TowardGoal)
        .staticmethod("StaticClass")
  ;
}