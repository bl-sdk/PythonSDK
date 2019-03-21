#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTargetIteratorPrioritizeTargetsIAmExposedTo()
{
    class_< UTargetIteratorPrioritizeTargetsIAmExposedTo, bases< UTargetIterator >  , boost::noncopyable>("UTargetIteratorPrioritizeTargetsIAmExposedTo", no_init)
        .def("StaticClass", &UTargetIteratorPrioritizeTargetsIAmExposedTo::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}