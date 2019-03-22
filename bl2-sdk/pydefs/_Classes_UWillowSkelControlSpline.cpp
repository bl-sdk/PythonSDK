#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSkelControlSpline(py::module &m)
{
    py::class_< UWillowSkelControlSpline,  USkelControlBase   >(m, "UWillowSkelControlSpline")
        .def_readwrite("SplineLength", &UWillowSkelControlSpline::SplineLength)
        .def_readwrite("SplineBoneAxis", &UWillowSkelControlSpline::SplineBoneAxis)
        .def_readwrite("BoneRotMode", &UWillowSkelControlSpline::BoneRotMode)
        .def_readwrite("EndSplineLocationSpace", &UWillowSkelControlSpline::EndSplineLocationSpace)
        .def_readwrite("StartSplineLocationSpace", &UWillowSkelControlSpline::StartSplineLocationSpace)
        .def_readwrite("EndSplineOffset", &UWillowSkelControlSpline::EndSplineOffset)
        .def_readwrite("StartSplineOffset", &UWillowSkelControlSpline::StartSplineOffset)
        .def("StaticClass", &UWillowSkelControlSpline::StaticClass, py::return_value_policy::reference)
          ;
}