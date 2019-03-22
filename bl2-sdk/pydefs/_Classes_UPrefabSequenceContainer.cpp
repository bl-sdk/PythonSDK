#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPrefabSequenceContainer(py::module &m)
{
    py::class_< UPrefabSequenceContainer,  USequence   >(m, "UPrefabSequenceContainer")
          ;
}