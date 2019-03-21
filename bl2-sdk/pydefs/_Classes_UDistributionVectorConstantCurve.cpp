#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDistributionVectorConstantCurve()
{
    class_< UDistributionVectorConstantCurve, bases< UDistributionVector >  , boost::noncopyable>("UDistributionVectorConstantCurve", no_init)
        .def_readwrite("ConstantCurve", &UDistributionVectorConstantCurve::ConstantCurve)
        .def_readwrite("LockedAxes", &UDistributionVectorConstantCurve::LockedAxes)
        .def("StaticClass", &UDistributionVectorConstantCurve::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}