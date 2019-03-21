#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDistributionFloat()
{
    class_< UDistributionFloat, bases< UComponent >  , boost::noncopyable>("UDistributionFloat", no_init)
        .def_readwrite("VfTable_FCurveEdInterface", &UDistributionFloat::VfTable_FCurveEdInterface)
        .def("StaticClass", &UDistributionFloat::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetFloatValue", &UDistributionFloat::GetFloatValue)
        .staticmethod("StaticClass")
  ;
}