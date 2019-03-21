#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDistributionVectorConstant()
{
    class_< UDistributionVectorConstant, bases< UDistributionVector >  , boost::noncopyable>("UDistributionVectorConstant", no_init)
        .def_readwrite("Constant", &UDistributionVectorConstant::Constant)
        .def_readwrite("LockedAxes", &UDistributionVectorConstant::LockedAxes)
        .def("StaticClass", &UDistributionVectorConstant::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}