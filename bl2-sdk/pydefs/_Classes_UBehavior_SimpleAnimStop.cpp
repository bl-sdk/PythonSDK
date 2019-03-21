#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SimpleAnimStop()
{
    class_< UBehavior_SimpleAnimStop, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SimpleAnimStop", no_init)
        .def_readwrite("Tree", &UBehavior_SimpleAnimStop::Tree)
        .def_readwrite("AnimName", &UBehavior_SimpleAnimStop::AnimName)
        .def("StaticClass", &UBehavior_SimpleAnimStop::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SimpleAnimStop::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}