#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDistributionVector()
{
    class_< UDistributionVector, bases< UComponent >  , boost::noncopyable>("UDistributionVector", no_init)
        .def_readwrite("VfTable_FCurveEdInterface", &UDistributionVector::VfTable_FCurveEdInterface)
        .def("StaticClass", &UDistributionVector::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetVectorValue", &UDistributionVector::GetVectorValue)
        .staticmethod("StaticClass")
  ;
}