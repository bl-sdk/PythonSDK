#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AILevelUp()
{
    class_< UBehavior_AILevelUp, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AILevelUp", no_init)
        .def_readwrite("MaxLevelUps", &UBehavior_AILevelUp::MaxLevelUps)
        .def("StaticClass", &UBehavior_AILevelUp::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AILevelUp::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}