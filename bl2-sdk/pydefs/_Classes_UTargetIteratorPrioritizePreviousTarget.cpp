#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTargetIteratorPrioritizePreviousTarget()
{
    class_< UTargetIteratorPrioritizePreviousTarget, bases< UTI_Prioritize >  , boost::noncopyable>("UTargetIteratorPrioritizePreviousTarget", no_init)
        .def("StaticClass", &UTargetIteratorPrioritizePreviousTarget::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}