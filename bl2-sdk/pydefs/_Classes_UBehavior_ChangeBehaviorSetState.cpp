#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeBehaviorSetState()
{
    class_< UBehavior_ChangeBehaviorSetState, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ChangeBehaviorSetState", no_init)
        .def_readwrite("BehaviorSetName", &UBehavior_ChangeBehaviorSetState::BehaviorSetName)
        .def_readwrite("ChangeStatus", &UBehavior_ChangeBehaviorSetState::ChangeStatus)
        .def("StaticClass", &UBehavior_ChangeBehaviorSetState::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ChangeBehaviorSetState::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}