#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCreditsGFxDefinition(py::module &m)
{
    py::class_< UCreditsGFxDefinition,  UWillowGFxMovie3DDefinition   >(m, "UCreditsGFxDefinition")
        .def_readwrite("CreditData", &UCreditsGFxDefinition::CreditData)
        .def_readwrite("DefaultSpeed", &UCreditsGFxDefinition::DefaultSpeed)
        .def_readwrite("MaxFastForwardSpeed", &UCreditsGFxDefinition::MaxFastForwardSpeed)
        .def_readwrite("MaxRewindSpeed", &UCreditsGFxDefinition::MaxRewindSpeed)
        .def_readwrite("ImageMontage", &UCreditsGFxDefinition::ImageMontage)
        .def_readwrite("ImageMontagePackageName", &UCreditsGFxDefinition::ImageMontagePackageName)
        .def_readwrite("ImageDuration", &UCreditsGFxDefinition::ImageDuration)
        .def_readwrite("ImageBlankSpace", &UCreditsGFxDefinition::ImageBlankSpace)
        .def_readwrite("InitialBlankSpace", &UCreditsGFxDefinition::InitialBlankSpace)
        .def_readwrite("MiddlewareLogosPackageName", &UCreditsGFxDefinition::MiddlewareLogosPackageName)
        .def_readwrite("MiddlewareTexturePath", &UCreditsGFxDefinition::MiddlewareTexturePath)
        .def_readwrite("SplatPackageName", &UCreditsGFxDefinition::SplatPackageName)
        .def_readwrite("SplatTexturePath", &UCreditsGFxDefinition::SplatTexturePath)
        .def("StaticClass", &UCreditsGFxDefinition::StaticClass, py::return_value_policy::reference)
          ;
}