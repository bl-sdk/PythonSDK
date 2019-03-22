#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USequenceDefinition(py::module &m)
{
    py::class_< USequenceDefinition,  USequence   >(m, "USequenceDefinition")
          ;
}