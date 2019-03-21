#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USkelControlSpline()
{
    class_< USkelControlSpline, bases< USkelControlBase >  , boost::noncopyable>("USkelControlSpline", no_init)
        .def_readwrite("SplineLength", &USkelControlSpline::SplineLength)
        .def_readwrite("SplineBoneAxis", &USkelControlSpline::SplineBoneAxis)
        .def_readwrite("BoneRotMode", &USkelControlSpline::BoneRotMode)
        .def_readwrite("EndSplineTension", &USkelControlSpline::EndSplineTension)
        .def_readwrite("StartSplineTension", &USkelControlSpline::StartSplineTension)
        .def("StaticClass", &USkelControlSpline::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}