#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_Destroy()
{
    class_< UBehavior_Destroy, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_Destroy", no_init)
        .def("StaticClass", &UBehavior_Destroy::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_Destroy::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}