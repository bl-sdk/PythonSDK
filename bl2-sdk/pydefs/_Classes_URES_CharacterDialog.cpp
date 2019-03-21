#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_CharacterDialog(py::object m)
{
    py::class_< URES_CharacterDialog,  UActionResource   >(m, "URES_CharacterDialog")
        .def("StaticClass", &URES_CharacterDialog::StaticClass, py::return_value_policy::reference)
          ;
}