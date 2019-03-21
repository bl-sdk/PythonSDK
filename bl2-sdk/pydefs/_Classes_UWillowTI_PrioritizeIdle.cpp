#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowTI_PrioritizeIdle()
{
    class_< UWillowTI_PrioritizeIdle, bases< UTI_Prioritize >  , boost::noncopyable>("UWillowTI_PrioritizeIdle", no_init)
        .def_readwrite("MaxAICurrentlyTargeting", &UWillowTI_PrioritizeIdle::MaxAICurrentlyTargeting)
        .def("StaticClass", &UWillowTI_PrioritizeIdle::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}