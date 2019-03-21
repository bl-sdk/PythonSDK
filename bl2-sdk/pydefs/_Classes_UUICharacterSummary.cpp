#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUICharacterSummary()
{
    py::class_< UUICharacterSummary,  UUIResourceDataProvider   >("UUICharacterSummary")
        .def_readwrite("ClassPathName", &UUICharacterSummary::ClassPathName)
        .def_readwrite("CharacterName", &UUICharacterSummary::CharacterName)
        .def_readwrite("CharacterBio", &UUICharacterSummary::CharacterBio)
        .def("StaticClass", &UUICharacterSummary::StaticClass, py::return_value_policy::reference)
        .def("eventIsProviderDisabled", &UUICharacterSummary::eventIsProviderDisabled)
        .staticmethod("StaticClass")
  ;
}