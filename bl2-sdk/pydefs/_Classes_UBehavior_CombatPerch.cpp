#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_CombatPerch()
{
    class_< UBehavior_CombatPerch, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_CombatPerch", no_init)
        .def_readwrite("AttachmentName", &UBehavior_CombatPerch::AttachmentName)
        .def_readwrite("Action", &UBehavior_CombatPerch::Action)
        .def("StaticClass", &UBehavior_CombatPerch::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_CombatPerch::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}