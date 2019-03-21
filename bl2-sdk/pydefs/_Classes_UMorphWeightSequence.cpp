#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMorphWeightSequence(py::object m)
{
    py::class_< UMorphWeightSequence,  UObject   >(m, "UMorphWeightSequence")
        .def("StaticClass", &UMorphWeightSequence::StaticClass, py::return_value_policy::reference)
          ;
}