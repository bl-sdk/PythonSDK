#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTargetIteratorCheckRemoveTarget()
{
    class_< UTargetIteratorCheckRemoveTarget, bases< UTargetIterator >  , boost::noncopyable>("UTargetIteratorCheckRemoveTarget", no_init)
        .def("StaticClass", &UTargetIteratorCheckRemoveTarget::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}