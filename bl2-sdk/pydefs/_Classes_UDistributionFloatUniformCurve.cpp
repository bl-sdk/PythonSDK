#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDistributionFloatUniformCurve()
{
    class_< UDistributionFloatUniformCurve, bases< UDistributionFloat >  , boost::noncopyable>("UDistributionFloatUniformCurve", no_init)
        .def_readwrite("ConstantCurve", &UDistributionFloatUniformCurve::ConstantCurve)
        .def("StaticClass", &UDistributionFloatUniformCurve::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}