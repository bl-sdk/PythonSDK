#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ToggleObstacle()
{
    class_< UBehavior_ToggleObstacle, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ToggleObstacle", no_init)
        .def_readwrite("Option", &UBehavior_ToggleObstacle::Option)
        .def("StaticClass", &UBehavior_ToggleObstacle::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ToggleObstacle::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}