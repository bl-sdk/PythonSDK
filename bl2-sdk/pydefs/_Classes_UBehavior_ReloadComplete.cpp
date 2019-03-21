#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ReloadComplete()
{
    class_< UBehavior_ReloadComplete, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ReloadComplete", no_init)
        .def("StaticClass", &UBehavior_ReloadComplete::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ReloadComplete::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}