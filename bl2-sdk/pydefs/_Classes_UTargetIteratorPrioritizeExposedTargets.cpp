#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTargetIteratorPrioritizeExposedTargets()
{
    class_< UTargetIteratorPrioritizeExposedTargets, bases< UTI_Prioritize >  , boost::noncopyable>("UTargetIteratorPrioritizeExposedTargets", no_init)
        .def("StaticClass", &UTargetIteratorPrioritizeExposedTargets::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}