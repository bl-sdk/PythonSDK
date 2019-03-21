#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowVersusDuelBehavior()
{
    class_< UWillowVersusDuelBehavior, bases< UBehaviorBase >  , boost::noncopyable>("UWillowVersusDuelBehavior", no_init)
        .def("StaticClass", &UWillowVersusDuelBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UWillowVersusDuelBehavior::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}