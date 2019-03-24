#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UReferenceSet(py::module &m)
{
    py::class_< UReferenceSet,  UObject   >(m, "UReferenceSet")
		.def_static("StaticClass", &UReferenceSet::StaticClass, py::return_value_policy::reference)
        .def_readwrite("References", &UReferenceSet::References)
          ;
}