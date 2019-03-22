#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObjectReferencer(py::module &m)
{
    py::class_< UObjectReferencer,  UObject   >(m, "UObjectReferencer")
        .def_readwrite("ReferencedObjects", &UObjectReferencer::ReferencedObjects)
          ;
}