#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AISetItemTossTarget()
{
    class_< UBehavior_AISetItemTossTarget, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AISetItemTossTarget", no_init)
        .def_readwrite("TossTarget", &UBehavior_AISetItemTossTarget::TossTarget)
        .def("StaticClass", &UBehavior_AISetItemTossTarget::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AISetItemTossTarget::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}