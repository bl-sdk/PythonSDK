#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeCanTarget()
{
    class_< UBehavior_ChangeCanTarget, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ChangeCanTarget", no_init)
        .def_readwrite("ChangeStatus", &UBehavior_ChangeCanTarget::ChangeStatus)
        .def("StaticClass", &UBehavior_ChangeCanTarget::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ChangeCanTarget::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}