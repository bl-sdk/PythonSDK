#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUICharacterSummary(py::module &m)
{
    py::class_< UUICharacterSummary,  UUIResourceDataProvider   >(m, "UUICharacterSummary")
		.def_static("StaticClass", &UUICharacterSummary::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ClassPathName", &UUICharacterSummary::ClassPathName)
        .def_readwrite("CharacterName", &UUICharacterSummary::CharacterName)
        .def_readwrite("CharacterBio", &UUICharacterSummary::CharacterBio)
        .def("eventIsProviderDisabled", &UUICharacterSummary::eventIsProviderDisabled)
          ;
}