#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTargetIteratorPrioritizeHumanTargets()
{
    class_< UTargetIteratorPrioritizeHumanTargets, bases< UTI_Prioritize >  , boost::noncopyable>("UTargetIteratorPrioritizeHumanTargets", no_init)
        .def("StaticClass", &UTargetIteratorPrioritizeHumanTargets::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}