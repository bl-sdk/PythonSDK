#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFont(py::object m)
{
    py::class_< UFont,  UObject   >(m, "UFont")
        .def_readwrite("Characters", &UFont::Characters)
        .def_readwrite("Textures", &UFont::Textures)
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
        .def("StaticClass", &UFont::StaticClass, py::return_value_policy::reference)
        .def("GetStringHeightAndWidth", &UFont::GetStringHeightAndWidth)
        .def("GetMaxCharHeight", &UFont::GetMaxCharHeight)
        .def("GetAuthoredViewportHeight", &UFont::GetAuthoredViewportHeight)
        .def("GetScalingFactor", &UFont::GetScalingFactor)
        .def("GetResolutionPageIndex", &UFont::GetResolutionPageIndex)
          ;
}