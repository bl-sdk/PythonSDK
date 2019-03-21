#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCreditsDataProviderGFxObject()
{
    py::class_< UCreditsDataProviderGFxObject,  UGFxObject   >("UCreditsDataProviderGFxObject")
        .def_readwrite("CreditsDef", &UCreditsDataProviderGFxObject::CreditsDef)
        .def_readwrite("bShouldAvoidAccentedLetters", &UCreditsDataProviderGFxObject::bShouldAvoidAccentedLetters)
        .def("StaticClass", &UCreditsDataProviderGFxObject::StaticClass, py::return_value_policy::reference)
        .def("extGetLengthOfData", &UCreditsDataProviderGFxObject::extGetLengthOfData)
        .def("ReplaceCertainAccentedLetters", &UCreditsDataProviderGFxObject::ReplaceCertainAccentedLetters)
        .def("extGetClipDataAt", &UCreditsDataProviderGFxObject::extGetClipDataAt, py::return_value_policy::reference)
        .def("Init", &UCreditsDataProviderGFxObject::Init)
        .staticmethod("StaticClass")
  ;
}