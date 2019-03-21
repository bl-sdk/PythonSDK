#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetInfoBarVisibility()
{
    class_< UBehavior_SetInfoBarVisibility, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetInfoBarVisibility", no_init)
        .def("StaticClass", &UBehavior_SetInfoBarVisibility::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetInfoBarVisibility::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}