#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_CharacterDialog()
{
    py::class_< URES_CharacterDialog,  UActionResource   >("URES_CharacterDialog")
        .def("StaticClass", &URES_CharacterDialog::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}