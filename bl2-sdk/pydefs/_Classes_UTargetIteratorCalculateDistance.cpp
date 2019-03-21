#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTargetIteratorCalculateDistance()
{
    class_< UTargetIteratorCalculateDistance, bases< UTargetIterator >  , boost::noncopyable>("UTargetIteratorCalculateDistance", no_init)
        .def("StaticClass", &UTargetIteratorCalculateDistance::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}