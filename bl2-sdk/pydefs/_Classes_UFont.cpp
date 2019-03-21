#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFont()
{
    class_< UFont, bases< UObject >  , boost::noncopyable>("UFont", no_init)
        .def_readwrite("Characters", &UFont::Characters)
        .def_readwrite("Textures", &UFont::Textures)
        .def_readonly("UnknownData00", &UFont::UnknownData00)
        .def_readwrite("IsRemapped", &UFont::IsRemapped)
        .def_readwrite("EmScale", &UFont::EmScale)
        .def_readwrite("Ascent", &UFont::Ascent)
        .def_readwrite("Descent", &UFont::Descent)
        .def_readwrite("Leading", &UFont::Leading)
        .def_readwrite("Kerning", &UFont::Kerning)
        .def_readwrite("ImportOptions", &UFont::ImportOptions)
        .def_readwrite("NumCharacters", &UFont::NumCharacters)
        .def_readwrite("MaxCharHeight", &UFont::MaxCharHeight)
        .def_readwrite("ScalingFactor", &UFont::ScalingFactor)
        .def("StaticClass", &UFont::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetStringHeightAndWidth", &UFont::GetStringHeightAndWidth)
        .def("GetMaxCharHeight", &UFont::GetMaxCharHeight)
        .def("GetAuthoredViewportHeight", &UFont::GetAuthoredViewportHeight)
        .def("GetScalingFactor", &UFont::GetScalingFactor)
        .def("GetResolutionPageIndex", &UFont::GetResolutionPageIndex)
        .staticmethod("StaticClass")
  ;
}