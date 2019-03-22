#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_CharacterDialog(py::module &m)
{
    py::class_< URES_CharacterDialog,  UActionResource   >(m, "URES_CharacterDialog")
          ;
}