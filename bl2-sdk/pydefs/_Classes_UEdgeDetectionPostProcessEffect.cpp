#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UEdgeDetectionPostProcessEffect()
{
    class_< UEdgeDetectionPostProcessEffect, bases< UPostProcessEffect >  , boost::noncopyable>("UEdgeDetectionPostProcessEffect", no_init)
        .def_readwrite("HFilterAxisCoeff", &UEdgeDetectionPostProcessEffect::HFilterAxisCoeff)
        .def_readwrite("HFilterDiagCoeff", &UEdgeDetectionPostProcessEffect::HFilterDiagCoeff)
        .def_readwrite("VFilterAxisCoeff", &UEdgeDetectionPostProcessEffect::VFilterAxisCoeff)
        .def_readwrite("VFilterDiagCoeff", &UEdgeDetectionPostProcessEffect::VFilterDiagCoeff)
        .def_readwrite("FarDist", &UEdgeDetectionPostProcessEffect::FarDist)
        .def_readwrite("NearDist", &UEdgeDetectionPostProcessEffect::NearDist)
        .def_readwrite("SobelPower", &UEdgeDetectionPostProcessEffect::SobelPower)
        .def_readwrite("TexelOffset", &UEdgeDetectionPostProcessEffect::TexelOffset)
        .def("StaticClass", &UEdgeDetectionPostProcessEffect::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}