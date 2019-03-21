#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTargetIteratorPrioritizeNearbyTarget()
{
    class_< UTargetIteratorPrioritizeNearbyTarget, bases< UTI_Prioritize >  , boost::noncopyable>("UTargetIteratorPrioritizeNearbyTarget", no_init)
        .def_readwrite("MaxDistance", &UTargetIteratorPrioritizeNearbyTarget::MaxDistance)
        .def("StaticClass", &UTargetIteratorPrioritizeNearbyTarget::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}