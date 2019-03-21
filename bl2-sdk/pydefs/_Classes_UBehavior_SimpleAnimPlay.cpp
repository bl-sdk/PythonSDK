#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SimpleAnimPlay()
{
    class_< UBehavior_SimpleAnimPlay, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SimpleAnimPlay", no_init)
        .def_readwrite("Tree", &UBehavior_SimpleAnimPlay::Tree)
        .def_readwrite("AnimName", &UBehavior_SimpleAnimPlay::AnimName)
        .def("StaticClass", &UBehavior_SimpleAnimPlay::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SimpleAnimPlay::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}