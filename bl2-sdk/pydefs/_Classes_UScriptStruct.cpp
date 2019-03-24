#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UScriptStruct(py::module &m)
{
    py::class_< UScriptStruct,  UStruct   >(m, "UScriptStruct")
		.def_static("StaticClass", &UScriptStruct::StaticClass, py::return_value_policy::reference)
          ;
}