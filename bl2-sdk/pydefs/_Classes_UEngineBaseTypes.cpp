#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEngineBaseTypes(py::module &m)
{
    py::class_< UEngineBaseTypes,  UObject   >(m, "UEngineBaseTypes")
		.def_static("StaticClass", &UEngineBaseTypes::StaticClass, py::return_value_policy::reference)
          ;
}