#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObjectSerializer(py::module &m)
{
    py::class_< UObjectSerializer,  UObject   >(m, "UObjectSerializer")
		.def_static("StaticClass", &UObjectSerializer::StaticClass, py::return_value_policy::reference)
          ;
}