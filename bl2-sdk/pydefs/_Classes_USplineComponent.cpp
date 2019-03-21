#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USplineComponent()
{
    py::class_< USplineComponent,  UPrimitiveComponent   >("USplineComponent")
        .def_readwrite("SplineInfo", &USplineComponent::SplineInfo)
        .def_readwrite("SplineCurviness", &USplineComponent::SplineCurviness)
        .def_readwrite("SplineColor", &USplineComponent::SplineColor)
        .def_readwrite("SplineDrawRes", &USplineComponent::SplineDrawRes)
        .def_readwrite("SplineArrowSize", &USplineComponent::SplineArrowSize)
        .def_readwrite("SplineReparamTable", &USplineComponent::SplineReparamTable)
        .def("StaticClass", &USplineComponent::StaticClass, py::return_value_policy::reference)
        .def("GetTangentAtDistanceAlongSpline", &USplineComponent::GetTangentAtDistanceAlongSpline)
        .def("GetLocationAtDistanceAlongSpline", &USplineComponent::GetLocationAtDistanceAlongSpline)
        .def("GetSplineLength", &USplineComponent::GetSplineLength)
        .def("UpdateSplineReparamTable", &USplineComponent::UpdateSplineReparamTable)
        .def("UpdateSplineCurviness", &USplineComponent::UpdateSplineCurviness)
        .staticmethod("StaticClass")
  ;
}