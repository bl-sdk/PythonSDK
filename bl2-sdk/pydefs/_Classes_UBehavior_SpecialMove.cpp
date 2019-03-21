#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SpecialMove()
{
    class_< UBehavior_SpecialMove, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SpecialMove", no_init)
        .def_readwrite("SpecialMove", &UBehavior_SpecialMove::SpecialMove)
        .def_readwrite("Duration", &UBehavior_SpecialMove::Duration)
        .def("StaticClass", &UBehavior_SpecialMove::StaticClass, return_value_policy< reference_existing_object >())
        .def("PlaySpecialMove", &UBehavior_SpecialMove::PlaySpecialMove)
        .def("TriggerOutput", &UBehavior_SpecialMove::TriggerOutput)
        .def("ApplyBehaviorToContext", &UBehavior_SpecialMove::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}