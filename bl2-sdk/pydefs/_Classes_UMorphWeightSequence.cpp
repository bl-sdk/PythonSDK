#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMorphWeightSequence(py::module &m)
{
    py::class_< UMorphWeightSequence,  UObject   >(m, "UMorphWeightSequence")
		.def_static("StaticClass", &UMorphWeightSequence::StaticClass, py::return_value_policy::reference)
          ;
}