#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCreditsGFxDefinition()
{
    class_< UCreditsGFxDefinition, bases< UWillowGFxMovie3DDefinition >  , boost::noncopyable>("UCreditsGFxDefinition", no_init)
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
        .def("StaticClass", &UCreditsGFxDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}