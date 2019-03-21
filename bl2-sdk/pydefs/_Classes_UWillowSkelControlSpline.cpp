#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSkelControlSpline()
{
    class_< UWillowSkelControlSpline, bases< USkelControlBase >  , boost::noncopyable>("UWillowSkelControlSpline", no_init)
        .def_readwrite("SplineLength", &UWillowSkelControlSpline::SplineLength)
        .def_readwrite("SplineBoneAxis", &UWillowSkelControlSpline::SplineBoneAxis)
        .def_readwrite("BoneRotMode", &UWillowSkelControlSpline::BoneRotMode)
        .def_readwrite("EndSplineLocationSpace", &UWillowSkelControlSpline::EndSplineLocationSpace)
        .def_readwrite("StartSplineLocationSpace", &UWillowSkelControlSpline::StartSplineLocationSpace)
        .def_readwrite("EndSplineOffset", &UWillowSkelControlSpline::EndSplineOffset)
        .def_readwrite("StartSplineOffset", &UWillowSkelControlSpline::StartSplineOffset)
        .def("StaticClass", &UWillowSkelControlSpline::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}