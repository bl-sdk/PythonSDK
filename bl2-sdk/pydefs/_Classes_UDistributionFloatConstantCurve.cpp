#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDistributionFloatConstantCurve()
{
    class_< UDistributionFloatConstantCurve, bases< UDistributionFloat >  , boost::noncopyable>("UDistributionFloatConstantCurve", no_init)
        .def_readwrite("ConstantCurve", &UDistributionFloatConstantCurve::ConstantCurve)
        .def("StaticClass", &UDistributionFloatConstantCurve::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}