#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeVisibility()
{
    class_< UBehavior_ChangeVisibility, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ChangeVisibility", no_init)
        .def_readwrite("Status", &UBehavior_ChangeVisibility::Status)
        .def("StaticClass", &UBehavior_ChangeVisibility::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ChangeVisibility::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}