#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPrefabSequenceContainer(py::module &m)
{
    py::class_< UPrefabSequenceContainer,  USequence   >(m, "UPrefabSequenceContainer")
		.def_static("StaticClass", &UPrefabSequenceContainer::StaticClass, py::return_value_policy::reference)
          ;
}