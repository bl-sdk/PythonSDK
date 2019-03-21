#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTI_PrioritizeConditional()
{
    class_< UTI_PrioritizeConditional, bases< UTI_Prioritize >  , boost::noncopyable>("UTI_PrioritizeConditional", no_init)
        .def_readwrite("Condition", &UTI_PrioritizeConditional::Condition)
        .def("StaticClass", &UTI_PrioritizeConditional::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}