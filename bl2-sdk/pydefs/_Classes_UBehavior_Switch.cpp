#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_Switch()
{
    class_< UBehavior_Switch, bases< UBehavior_RandomBranch >  , boost::noncopyable>("UBehavior_Switch", no_init)
        .def_readwrite("CheckValue", &UBehavior_Switch::CheckValue)
        .def("StaticClass", &UBehavior_Switch::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_Switch::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}