#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTargetIteratorCalculateExposure()
{
    class_< UTargetIteratorCalculateExposure, bases< UTargetIterator >  , boost::noncopyable>("UTargetIteratorCalculateExposure", no_init)
        .def("StaticClass", &UTargetIteratorCalculateExposure::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}