#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNameListDefinition(py::module &m)
{
    py::class_< UNameListDefinition,  UGBXDefinition   >(m, "UNameListDefinition")
        .def_readwrite("Names", &UNameListDefinition::Names)
          ;
}