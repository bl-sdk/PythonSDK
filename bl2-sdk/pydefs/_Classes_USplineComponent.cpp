#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USplineComponent()
{
    class_< USplineComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("USplineComponent", no_init)
        .def_readwrite("SplineInfo", &USplineComponent::SplineInfo)
        .def_readwrite("SplineCurviness", &USplineComponent::SplineCurviness)
        .def_readwrite("SplineColor", &USplineComponent::SplineColor)
        .def_readwrite("SplineDrawRes", &USplineComponent::SplineDrawRes)
        .def_readwrite("SplineArrowSize", &USplineComponent::SplineArrowSize)
        .def_readwrite("SplineReparamTable", &USplineComponent::SplineReparamTable)
        .def("StaticClass", &USplineComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetTangentAtDistanceAlongSpline", &USplineComponent::GetTangentAtDistanceAlongSpline)
        .def("GetLocationAtDistanceAlongSpline", &USplineComponent::GetLocationAtDistanceAlongSpline)
        .def("GetSplineLength", &USplineComponent::GetSplineLength)
        .def("UpdateSplineReparamTable", &USplineComponent::UpdateSplineReparamTable)
        .def("UpdateSplineCurviness", &USplineComponent::UpdateSplineCurviness)
        .staticmethod("StaticClass")
  ;
}