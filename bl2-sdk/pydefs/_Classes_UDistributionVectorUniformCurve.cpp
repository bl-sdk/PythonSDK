#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDistributionVectorUniformCurve()
{
    class_< UDistributionVectorUniformCurve, bases< UDistributionVector >  , boost::noncopyable>("UDistributionVectorUniformCurve", no_init)
        .def_readwrite("ConstantCurve", &UDistributionVectorUniformCurve::ConstantCurve)
        .def_readonly("LockedAxes", &UDistributionVectorUniformCurve::LockedAxes)
        .def_readonly("MirrorFlags", &UDistributionVectorUniformCurve::MirrorFlags)
        .def("StaticClass", &UDistributionVectorUniformCurve::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}