#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObjectReferencer(py::module &m)
{
    py::class_< UObjectReferencer,  UObject   >(m, "UObjectReferencer")
		.def_static("StaticClass", &UObjectReferencer::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ReferencedObjects", &UObjectReferencer::ReferencedObjects)
          ;
}