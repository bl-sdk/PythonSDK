#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AdvanceObjectiveSet()
{
    class_< UBehavior_AdvanceObjectiveSet, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AdvanceObjectiveSet", no_init)
        .def_readwrite("ObjectiveSetToAdvanceTo", &UBehavior_AdvanceObjectiveSet::ObjectiveSetToAdvanceTo)
        .def("StaticClass", &UBehavior_AdvanceObjectiveSet::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AdvanceObjectiveSet::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}